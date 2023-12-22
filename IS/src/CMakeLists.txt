# Archivo CMakeLists.txt en la carpeta 'src'

# Agregar los archivos fuente al ejecutable
add_executable(my_executable main-general.cc Actividad.cpp)

# Incluir la carpeta actual como directorio de inclusión para buscar archivos de encabezado
target_include_directories(my_executable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Agregar cualquier otra configuración necesaria para la compilación de esta carpeta

