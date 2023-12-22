
#ifndef ACTIVIDAD_H
#define ACTIVIDAD_H

// Delaración de la clase Preinscripcion
#include <string> 
#include <vector>
#include <iostream>
#include <fstream>
class Actividad{
    private:
         std::string nombreactividad_;   
         std::string descripcionactividad_;
         int aforoDisponible_;
         std::string fechaInicio_;
         std::string fechaFin_;
         std::string ponente_;
         std::string ubicacion_;
         int precioTasa_;
         int minimoAsistencia_;
         int tipologia_;
         int duracionActividad_;

    public:
        Actividad(
                 std::string nombreactividad="",
                 std::string descripcionactividad ="empty" ,
                 int aforoDisponible =0 ,
                 std::string fechaInicio=" empty" ,
                 std::string fechaFin ="empty" ,
                 std::string ponente ="empty" ,
                 std::string ubicacion ="empty" ,
                 int precioTasa=0,
                 int minimoAsistencia=0, 
                 int tipologia=0, 
                 int duracionActividad=0);

        std::string GetnombreAct(){return nombreactividad_;}
        std::string GetdescripAct(){return descripcionactividad_;}
        int GetAforo(){return aforoDisponible_;}
        std::string GetfechaInicio(){return fechaInicio_;}
        std::string GetfechaFin(){return fechaFin_;}
        std::string GetPonente(){return ponente_;}
        std::string GetUbi(){return ubicacion_;}
        int GetPrecio(){return precioTasa_;}
        int GetminimoAsistencia(){return minimoAsistencia_;}
        int GetDuracion(){return duracionActividad_;}

        void setnombreAct(std::string nombreactividad){nombreactividad_=nombreactividad;}
        void setrdescripAct(std::string descripcionactividad){descripcionactividad_=descripcionactividad;}
        void setAforo(int aforoDisponible){aforoDisponible_=aforoDisponible;}
        void setfechaInicio(std::string fechaInicio){fechaInicio_=fechaInicio;}
        void setfechaFin(std::string fechaFin){fechaFin_=fechaFin;}
        void setPonente(std::string ponente){ponente_=ponente;}  
        void setUbi(std::string ubicacion){ubicacion_=ubicacion;}     
        void setPrecio (int precioTasa){precioTasa_=precioTasa;}        
        void setminimoAsistencia (int minimoAsistencia){minimoAsistencia_=minimoAsistencia;}  
        void setDuracion(int duracionActividad){duracionActividad_=duracionActividad;}  

        void escribirActividadesEnArchivo(const std::vector<Actividad>& actividades);

        void leerActividadesDesdeArchivo();

        void pedirDatosAct (Actividad &nueva);

        void agregarActividadAlArchivo(const Actividad& ActividadExistente); 
        bool existeActividad(const std::string& nombreactividad);
        bool estaRegistrado(const std::string& nombreUsuario, const std::string& contrasena) ;
        void registrarUsuario(const std::string& nombreUsuario, const std::string& contrasena);
        
        void menuPrincipal();
        void menuOrganizador();
        void menuUsuario();
        void menuDirectorAcademico();
        void leerRegistradosDesdeArchivo();

        std::string obtenerNombreActividadDesdeLinea(const std::string& linea);
        void eliminarActividadDelArchivo(const std::string& nombreEliminar);

        void eliminarUsuario(const std::string& nombreUsuarioAEliminar);

        void registrarOrganizador(const std::string& nombreUsuario, const std::string& contrasena);

        void inscribirUsuarioEnActividad(const std::string& nombreUsuario, const std::string& nombreActividad);

        std::vector<std::string>obtenerActividadesUsuario(const std::string& nombreUsuario);

        void mailing();

        void eliminarCorreosDeArchivo();



        std::string GetDataStr() const{

                 std::string dataStr;
                 dataStr += "Nombre: " + nombreactividad_ + "\n";
                 dataStr += "Descripcion: " + descripcionactividad_ + "\n";
                 dataStr += "Aforo: " + std::to_string(aforoDisponible_)+ "personas" + "\n";
                 dataStr += "Fecha Incio: " + fechaInicio_ + "\n";
                 dataStr += "Fecha Fin: " + fechaFin_ + "\n";
                 dataStr += "Ponente: " + ponente_ + "\n";
                 dataStr += "Ubicacion: " + ubicacion_ + "\n";
                 dataStr += "Precio: " + std::to_string(precioTasa_) + "\n";
                 dataStr += "Asistencia Minima: " + std::to_string(minimoAsistencia_) + "\n";
                 dataStr += "duracion: " + std::to_string(duracionActividad_) + "horas" +"\n";
                
                return dataStr;
                }       
};
#endif
