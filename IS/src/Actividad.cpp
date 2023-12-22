#include "Actividad.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



     
        void escribirActividadesEnArchivo(const vector<Actividad>& actividades) {
    ofstream archivo("actividades.txt");

    if (archivo.is_open()) {
        for (const auto& actividad : actividades) {
            archivo << actividad.GetDataStr() << "\n\n";
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escribir las actividades.\n";
    }
}

// Función para leer las actividades desde el archivo
void Actividad::leerActividadesDesdeArchivo() {
    ifstream archivo("actividades.txt");
    std::string linea;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para leer las actividades.\n";
    }
}
void Actividad::leerRegistradosDesdeArchivo() {
    ifstream archivo("registrados.txt");
    std::string linea;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para leer las actividades.\n";
    }
}


// Función para añadir una nueva actividad al archivo

void Actividad::pedirDatosAct (Actividad &nueva){
std::string nombreactividad, descripcionactividad, fechaInicio, fechaFin;
cout << "Introduce nombre de actividad: ";
cin >> nombreactividad;
cout << "Introduce tu descripcion: ";
getchar ();
getline (cin, descripcionactividad);
cout << "Introduce la fecha de inicio: ";
cin >> fechaInicio;
cout << "Introduce la fecha de final: ";
cin >> fechaFin;
nueva. setnombreAct (nombreactividad);
nueva. setrdescripAct(descripcionactividad);
nueva. setfechaInicio (fechaInicio);
nueva. setfechaFin (fechaFin);
}

bool Actividad::existeActividad(const std::string& nombreactividad) {
    std::ifstream archivo("actividades.txt");
    std::string linea;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            // Verificar si la línea comienza con el nombre de la actividad
            if (linea.find("Nombre: " + nombreactividad) != std::string::npos) {
                archivo.close();
                return true;
            }
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para buscar la actividad.\n";
    }

    return false;
}

void Actividad::mailing() {
    std::ofstream archivo("mailing.txt", std::ios::app);

    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo para escribir los correos.\n";
        return;
    }

    std::string correo;
    std::cout << "Ingrese los correos (escribe 'fin' para terminar):\n";

    while (true) {
        std::cin >> correo;

        if (correo == "fin") {
            break;
        }

        archivo << correo << "\n";
    }

    archivo.close();
    std::cout << "Correos guardados correctamente en 'mailing.txt'.\n";
    cout<<endl;
}

void Actividad::eliminarCorreosDeArchivo() {
    std::ifstream archivoEntrada("mailing.txt");
    if (!archivoEntrada.is_open()) {
        std::cout << "No se pudo abrir el archivo.\n";
        return;
    }

    std::vector<std::string> correos;
    std::string correo;
    std::cout << "Ingrese los correos que desea eliminar (escriba 'fin' para terminar):\n";

    while (true) {
        std::cin >> correo;

        if (correo == "fin") {
            break;
        }

        correos.push_back(correo);
    }
    archivoEntrada.close();

    std::ifstream archivoLectura("mailing.txt");
    if (!archivoLectura.is_open()) {
        std::cout << "No se pudo abrir el archivo para leer.\n";
        return;
    }

    std::vector<std::string> correosRestantes;
    std::string temp;

    while (archivoLectura >> temp) {
        bool eliminar = false;
        for (const std::string& c : correos) {
            if (temp == c) {
                eliminar = true;
                break;
            }
        }
        if (!eliminar) {
            correosRestantes.push_back(temp);
        }
    }

    archivoLectura.close();

    std::ofstream archivoSalida("mailing.txt");
    if (!archivoSalida.is_open()) {
        std::cout << "No se pudo abrir el archivo para escribir.\n";
        return;
    }

    for (const std::string& c : correosRestantes) {
        archivoSalida << c << "\n";
    }
    archivoSalida.close();

    std::cout << "Correos eliminados correctamente del archivo.\n";
    cout<<endl;
}

std::string Actividad::obtenerNombreActividadDesdeLinea(const std::string& linea) {
    std::string nombreActividad;
    size_t pos = linea.find("Nombre:");

    if (pos != std::string::npos) {
        // Avanzamos la posición al final de "Nombre:"
        pos += 7; // Longitud de "Nombre:"

        // Buscamos el primer carácter no espacio después de "Nombre:"
        while (pos < linea.size() && (linea[pos] == ' ' || linea[pos] == '\t')) {
            pos++;
        }

        // Tomamos la subcadena después de "Nombre:" hasta el final de la línea
        nombreActividad = linea.substr(pos);
        // Eliminamos espacios en blanco al inicio y final de la cadena
        size_t lastChar = nombreActividad.find_last_not_of(" \t\r\n");
        if (lastChar != std::string::npos) {
            nombreActividad = nombreActividad.substr(0, lastChar + 1);
        }
    }

    return nombreActividad;
}

std::vector<std::string> Actividad::obtenerActividadesUsuario(const std::string& nombreUsuario) {
    std::ifstream archivo("inscritos.txt");
    std::vector<std::string> actividades;

    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo.\n";
        return actividades; // Devolver vector vacío si no se puede abrir el archivo
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        // Verificar si la línea contiene el nombre de usuario
        if (linea.find(nombreUsuario) != std::string::npos) {
            // Extraer el nombre de la actividad
            size_t inicio = linea.find(" en ") + 4; // Posición después de " en "
            std::string actividad = linea.substr(inicio);
            actividades.push_back(actividad);
        }
    }
    archivo.close();

    return actividades;
}

void Actividad::eliminarUsuario(const std::string& nombreUsuarioAEliminar) {
    std::ifstream archivoEntrada("registrados.txt");
    if (!archivoEntrada.is_open()) {
        std::cout << "No se pudo abrir el archivo.\n";
        return;
    }

    std::vector<std::string> lineas;
    std::string linea;
    while (std::getline(archivoEntrada, linea)) {
        if (linea.find(nombreUsuarioAEliminar) == std::string::npos) {
            lineas.push_back(linea);
        }
    }
    archivoEntrada.close();

    std::ofstream archivoSalida("registrados.txt", std::ofstream::trunc);
    if (!archivoSalida.is_open()) {
        std::cout << "No se pudo abrir el archivo para escribir.\n";
        return;
    }

    for (const std::string& l : lineas) {
        archivoSalida << l << '\n';
    }
    archivoSalida.close();

    std::cout << "Usuario eliminado correctamente.\n";
    cout<<endl;
}



   void Actividad::eliminarActividadDelArchivo(const std::string& nombreEliminar) {
    std::ifstream inputFile("actividades.txt");
    std::ofstream tempFile("temp.txt");

    if (!inputFile.is_open() || !tempFile.is_open()) {
        std::cout << "Error al abrir el archivo\n";
        return;
    }

    std::string line;
    bool borrar = false;
    int lineasBorradas = 0;

    while (std::getline(inputFile, line)) {
        if (borrar) {
            lineasBorradas++;
            if (lineasBorradas == 10) {  // 10 líneas después del nombre
                borrar = false;
                lineasBorradas = 0;
            }
        } else if (line.find("Nombre: " + nombreEliminar) != std::string::npos) {
            borrar = true;
        } else {
            tempFile << line << std::endl;
        }
    }

    inputFile.close();
    tempFile.close();

    if (std::remove("actividades.txt") != 0) {
        std::cout << "Error al eliminar el archivo original\n";
        return;
    }

    if (std::rename("temp.txt", "actividades.txt") != 0) {
        std::cout << "Error al renombrar el archivo temporal\n";
        return;
    }

    std::cout << "Actividad eliminada correctamente\n";
    cout<<endl;
}



void Actividad::agregarActividadAlArchivo(const Actividad& ActividadExistente) {
    Actividad nuevaActividad;
    pedirDatosAct(nuevaActividad);

    if (!existeActividad(nuevaActividad.GetnombreAct())) {
        ofstream archivo("actividades.txt", ios::app);
        if (archivo.is_open()) {
            archivo << nuevaActividad.GetDataStr() << "\n\n";
            archivo.close();
            cout << "Actividad agregada exitosamente al archivo.\n";
            cout<<endl;
        } else {
            cout << "No se pudo abrir el archivo para agregar la actividad.\n";
        }
    } else {
        cout << "La actividad ya existe en el archivo.\n";
    }

}

// Función para verificar si un usuario está inscrito y la contraseña es correcta
bool Actividad::estaRegistrado(const std::string& nombreUsuario, const std::string& contrasena) {
    ifstream archivo("registrados.txt");
    std::string nombre, pass, rol;

    while (archivo >> nombre >> pass >> rol) {
        if (nombre == nombreUsuario && pass == contrasena) {
            return true;
        }
    }
    return false;
}

//Función para registrar un nuevo usuario con contraseña y rol por defecto
void Actividad::registrarUsuario(const std::string& nombreUsuario, const std::string& contrasena) {
    ofstream archivo("registrados.txt", ios::app);
    if (archivo.is_open()) {
        archivo << nombreUsuario << " " << contrasena << " " << "usuario" << endl;
        cout << "Usuario registrado correctamente.\n";
        cout<<endl;
    } else {
        cout << "No se pudo abrir el archivo para registrar el usuario.\n";
    }
}

void Actividad::registrarOrganizador(const std::string& nombreUsuario, const std::string& contrasena) {
    ofstream archivo("registrados.txt", ios::app);
    if (archivo.is_open()) {
        archivo << nombreUsuario << " " << contrasena << " " << "organizador" << endl;
        cout << "Organizador registrado correctamente.\n";
        cout<<endl;
    } else {
        cout << "No se pudo abrir el archivo para registrar el usuario.\n";
    }
}

 void Actividad::inscribirUsuarioEnActividad(const std::string& nombreUsuario, const std::string& nombreActividad) {
        std::ofstream archivo("inscritos.txt", std::ios::app);

        if (!archivo.is_open()) {
            std::cout << "No se pudo abrir el archivo para inscribir al usuario en la actividad.\n";
            return;
        }

        // Verificar si la actividad existe
        if (!existeActividad(nombreActividad)) {
            std::cout << "La actividad no existe.\n";
            archivo.close();
            return;
        }

        // Escribir la inscripción en el archivo
        archivo << nombreUsuario << " se ha inscrito en " << nombreActividad << std::endl;
        archivo.close();

        std::cout << "Usuario inscrito correctamente en la actividad.\n";
        cout<<endl;
    }









Actividad::Actividad(
         std::string nombreactividad,  
         std::string descripcionactividad,
         int aforoDisponible,
         std::string fechaInicio,
         std::string fechaFin,
         std::string ponente,
         std::string ubicacion,
         int precioTasa,
         int minimoAsistencia,
         int tipologia,
         int duracionActividad){
              
        nombreactividad_=nombreactividad; 
        descripcionactividad_=descripcionactividad; 
        aforoDisponible_=aforoDisponible; 
        fechaInicio_=fechaInicio; 
        fechaFin_=fechaFin; 
        ponente_=ponente; 
        ubicacion_=ubicacion;
        precioTasa_=precioTasa;
        minimoAsistencia_=minimoAsistencia;
        tipologia_=tipologia;
        duracionActividad_=duracionActividad;
    

        
         }