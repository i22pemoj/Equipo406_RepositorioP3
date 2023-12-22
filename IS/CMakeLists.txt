# Archivo CMakeLists.txt en la carpeta principal del proyecto

# Definir el nombre del proyecto
project(my_executable)


# Establecer la versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.0)

# Agregar la subcarpeta 'src' al proyecto
add_subdirectory(src)
add_subdirectory(tests)
