# Establecer la versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.0)

# Definir el nombre del proyecto para las pruebas
project(MyProjectTests)

# Establecer la ubicación de la biblioteca GTest
set(GTEST_ROOT /Escritorio/2ºCarrera/googletest)  # Reemplaza con tu ruta real

# Incluir la biblioteca de Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Agregar el archivo fuente de las pruebas al ejecutable de pruebas
add_executable(my_tests test-eliminarusuario.cc test-existeactividad.cc test-inscribirusuario.cc test-pedirdatos.cc test-registrarusuario.cc)

# Enlazar con las bibliotecas necesarias para las pruebas
target_link_libraries(my_tests gtest gtest_main-general)

