#include <iostream>
#include <fstream>
#include <string>
#include "Actividad.h"

using namespace std;

void menuOrganizador() {
    int opcion;
    Actividad actividad;
    do {
        cout << "Menú para Organizador:\n"
             << "1. Crear actividad\n"
             << "2. Eliminar actividad\n"
             << "3. Ver lista de actividades\n"
             << "4. Ver inscripciones\n"
             << "5. Eliminar inscripciones\n"
             << "0. Salir\n"
             << "Ingrese su elección: ";
             cout<< endl;
        cin >> opcion;
         Actividad nuevaActividad;
         string nombreEliminar;
         string nombreUsuarioAEliminar;


        switch (opcion) {
            case 1:
                cout << "Crear actividad - Opción seleccionada para Organizador\n";
                cout<< endl;
               
                actividad.agregarActividadAlArchivo(nuevaActividad);
                break;
            case 2:
                cout << "Eliminar actividad - Opción seleccionada para Organizador\n";
                cout<< endl;

                cout << "Ingrese el nombre de la actividad que desea eliminar: ";
             
             cin >> nombreEliminar;
             actividad.eliminarActividadDelArchivo(nombreEliminar);
               
                
                break;
            case 3:
                cout << "Ver lista de actividades - Opción seleccionada para Organizador\n";
                cout<< endl;
                actividad.leerActividadesDesdeArchivo();
                cout<< endl;
                break;
            case 4:
                cout << "Ver Registrados - Opción seleccionada para Organizador\n";
                cout<< endl;
                actividad.leerRegistradosDesdeArchivo();
                cout<< endl;
                break;
            case 5:
                cout << "Eliminar Registrados - Opción seleccionada para Organizador\n";
                cout << "Ingrese el nombre del usuario que desea eliminar: ";
             
                cin >> nombreUsuarioAEliminar;


                actividad.eliminarUsuario(nombreUsuarioAEliminar);
                break;
            case 0:
                cout << "Saliendo del menú para Organizador...\n";
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    } while (opcion != 0);
}

void menuDirectorAcademico() {
    int opcion;

    Actividad actividad;
    Actividad nuevaActividad;
    string nombreEliminar;
    string nombreUsuario, contrasena;
    do {
        cout << "Menú para Director Académico:\n"
             << "1. Crear Mailing\n"
             << "2. Eliminar correos del mailing\n"
             << "3. Añadir actividades\n"
             << "4. Eliminar actividades\n"
             << "5. Asignar organizadores\n"
             << "0. Salir\n";
             cout<<endl;
             cout<< "Ingrese su elección: ";
        cin >> opcion;
        cout<<endl;
        

        switch (opcion) {
            
            case 1:
                cout << "Crear Mailing- Opción seleccionada para Director Académico\n";
                cout<<endl;
                actividad.mailing();
                break;

            case 2:
                cout << "Eliminar correos del mailing- Opción seleccionada para Director Académico\n";
                cout<<endl;
                actividad.eliminarCorreosDeArchivo();
                break;
            case 3:
                cout << "Añadir actividades - Opción seleccionada para Director Académico\n";
                 cout<< endl;
               
                actividad.agregarActividadAlArchivo(nuevaActividad);
                break;
            case 4:
                cout << "Eliminar actividades - Opción seleccionada para Director Académico\n";
                cout<< endl;

                cout << "Ingrese el nombre de la actividad que desea eliminar: ";
             
             cin >> nombreEliminar;
             actividad.eliminarActividadDelArchivo(nombreEliminar);
                break;
            case 5:
                cout << "Asignar organizadores - Opción seleccionada para Director Académico\n";
                cout << "Ingrese su nombre de usuario: ";
               cin >> nombreUsuario;
               cout << "Ingrese su contraseña: ";
               cin >> contrasena;
               cout<<endl;

            actividad.registrarOrganizador(nombreUsuario, contrasena);
            cout << "Nuevo usuario registrado como 'organizador'.\n";
                break;
            case 0:
                cout << "Saliendo del menú para Director Académico...\n";
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    } while (opcion != 0);
}

void menuUsuario() {
    int opcion;
    std::string nombreUsuario;
    std::string nombreActividad;
    std::vector<std::string> actividadesUsuario;


    Actividad actividad;
    do {
        cout << "Menú para Usuario:\n"
             << "1. Ver actividades disponibles\n"
             << "2. Registrarse en actividad\n"
             << "3. Ver actividades registrado\n"
             << "0. Salir\n"
             << "Ingrese su elección: ";
        cin >> opcion;
        cout<<endl;

        switch (opcion) {
            case 1:
                cout << "Ver actividades disponibles - Opción seleccionada para Usuario\n";
                 cout<< endl;
                 actividad.leerActividadesDesdeArchivo();
                cout<< endl;
                break;
            case 2:
                cout << "Inscribirse en actividad - Opción seleccionada para Usuario\n";
                 
                // Solicitar al usuario que ingrese su nombre
                std::cout << "Ingrese su nombre de usuario: ";
                std::cin >> nombreUsuario;

    // ... Aquí puedes mostrar las actividades disponibles y permitir al usuario seleccionar una
                cout<< endl;
                actividad.leerActividadesDesdeArchivo();
                cout<< endl;
    // Solicitar al usuario que ingrese el nombre de la actividad en la que desea inscribirse
         std::cout << "Ingrese el nombre de la actividad en la que desea inscribirse: ";
         std::cin>> nombreActividad;
         cout<< endl;

    // Inscribir al usuario en la actividad seleccionada
            actividad.inscribirUsuarioEnActividad(nombreUsuario, nombreActividad);
                break;
            case 3:
                cout << "Ver actividades registrado - Opción seleccionada para Usuario\n";

                 std::cout << "Ingrese su nombre de usuario: ";
                 std::cin >> nombreUsuario;
                 cout<<endl;

                 actividadesUsuario = actividad.obtenerActividadesUsuario(nombreUsuario);

                 if (actividadesUsuario.empty()) {
                 std::cout << "No se encontraron actividades para el usuario.\n";
             } else {
                std::cout << "El usuario está inscrito en las siguientes actividades:\n";
                for (const auto& actividad : actividadesUsuario) {
                std::cout << "- " << actividad << "\n";
                cout<<endl;
             }
    }
                break;
            case 0:
                cout << "Saliendo del menú para Usuario...\n";
                break;
            default:
                cout << "Opción no válida\n";
                break;
        }
    } while (opcion != 0);
}



int main() {
    Actividad actividad;
    string nombreUsuario, contrasena;
    int opcion;

    // Menú inicial
    cout << "Bienvenido al sistema:\n\n"
         << "1. Iniciar Sesión\n"
         << "2. Registrarse\n"
         << "0. Salir\n"
         << "Ingrese su elección: \n";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            bool usuarioRegistrado = false;

            cout << "Ingrese su nombre de usuario:";
            cin >> nombreUsuario;
            cout << "Ingrese su contraseña: ";
            cin >> contrasena;

            usuarioRegistrado = actividad.estaRegistrado(nombreUsuario, contrasena);

            if (usuarioRegistrado) {
                cout << "Bienvenido de nuevo, " << nombreUsuario << endl;
            } else {
                cout << "Usuario no encontrado. Por favor, regístrese.\n";
            }
            break;
        }
        case 2: {
            cout << "Ingrese su nombre de usuario: ";
            cin >> nombreUsuario;
            cout << "Ingrese su contraseña: ";
            cin >> contrasena;

            actividad.registrarUsuario(nombreUsuario, contrasena);
            cout << "Nuevo usuario registrado como 'usuario'.\n";
            break;
        }
        case 0:
            cout << "Saliendo...\n";
            return 0;
        default:
            cout << "Opción no válida\n";
            return 1;
    }

    ifstream archivo("registrados.txt");

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo de registrados.\n";
        return 1;
    }

    string linea;
    bool usuarioInscrito = false;

    while (getline(archivo, linea)) {
        size_t pos = linea.find(' ');
        if (pos != string::npos) {
            string usuarioArchivo = linea.substr(0, pos);
            string pass_rol = linea.substr(pos + 1);
            size_t pos_rol = pass_rol.find(' ');
            if (pos_rol != string::npos) {
                string passArchivo = pass_rol.substr(0, pos_rol);
                string rolArchivo = pass_rol.substr(pos_rol + 1);

                if (usuarioArchivo == nombreUsuario && passArchivo == contrasena) {
                    usuarioInscrito = true;

                    if (rolArchivo == "organizador") {
                        menuOrganizador();
                    } else if (rolArchivo == "usuario") {
                        menuUsuario();
                    } else if (rolArchivo == "directoracademico") {
                        menuDirectorAcademico();
                    } else {
                        cout << "Rol no reconocido: " << rolArchivo << endl;
                    }

                    break;
                }
            }
        }
    }

    if (!usuarioInscrito) {
        cout << "Usuario y/o contraseña incorrectos.\n";
    }

    archivo.close();
    return 0;
}