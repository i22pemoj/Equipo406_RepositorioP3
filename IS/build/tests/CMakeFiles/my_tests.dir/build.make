# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joseluis/Escritorio/2ºCarrera/IS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joseluis/Escritorio/2ºCarrera/IS/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/my_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/my_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/my_tests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/my_tests.dir/flags.make

tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o: tests/CMakeFiles/my_tests.dir/flags.make
tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o: ../tests/test-eliminarusuario.cc
tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o: tests/CMakeFiles/my_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joseluis/Escritorio/2ºCarrera/IS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o -MF CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o.d -o CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o -c /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-eliminarusuario.cc

tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tests.dir/test-eliminarusuario.cc.i"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-eliminarusuario.cc > CMakeFiles/my_tests.dir/test-eliminarusuario.cc.i

tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tests.dir/test-eliminarusuario.cc.s"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-eliminarusuario.cc -o CMakeFiles/my_tests.dir/test-eliminarusuario.cc.s

tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.o: tests/CMakeFiles/my_tests.dir/flags.make
tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.o: ../tests/test-existeactividad.cc
tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.o: tests/CMakeFiles/my_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joseluis/Escritorio/2ºCarrera/IS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.o"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.o -MF CMakeFiles/my_tests.dir/test-existeactividad.cc.o.d -o CMakeFiles/my_tests.dir/test-existeactividad.cc.o -c /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-existeactividad.cc

tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tests.dir/test-existeactividad.cc.i"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-existeactividad.cc > CMakeFiles/my_tests.dir/test-existeactividad.cc.i

tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tests.dir/test-existeactividad.cc.s"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-existeactividad.cc -o CMakeFiles/my_tests.dir/test-existeactividad.cc.s

tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o: tests/CMakeFiles/my_tests.dir/flags.make
tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o: ../tests/test-inscribirusuario.cc
tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o: tests/CMakeFiles/my_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joseluis/Escritorio/2ºCarrera/IS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o -MF CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o.d -o CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o -c /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-inscribirusuario.cc

tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tests.dir/test-inscribirusuario.cc.i"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-inscribirusuario.cc > CMakeFiles/my_tests.dir/test-inscribirusuario.cc.i

tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tests.dir/test-inscribirusuario.cc.s"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-inscribirusuario.cc -o CMakeFiles/my_tests.dir/test-inscribirusuario.cc.s

tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.o: tests/CMakeFiles/my_tests.dir/flags.make
tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.o: ../tests/test-pedirdatos.cc
tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.o: tests/CMakeFiles/my_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joseluis/Escritorio/2ºCarrera/IS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.o"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.o -MF CMakeFiles/my_tests.dir/test-pedirdatos.cc.o.d -o CMakeFiles/my_tests.dir/test-pedirdatos.cc.o -c /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-pedirdatos.cc

tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tests.dir/test-pedirdatos.cc.i"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-pedirdatos.cc > CMakeFiles/my_tests.dir/test-pedirdatos.cc.i

tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tests.dir/test-pedirdatos.cc.s"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-pedirdatos.cc -o CMakeFiles/my_tests.dir/test-pedirdatos.cc.s

tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.o: tests/CMakeFiles/my_tests.dir/flags.make
tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.o: ../tests/test-registrarusuario.cc
tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.o: tests/CMakeFiles/my_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joseluis/Escritorio/2ºCarrera/IS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.o"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.o -MF CMakeFiles/my_tests.dir/test-registrarusuario.cc.o.d -o CMakeFiles/my_tests.dir/test-registrarusuario.cc.o -c /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-registrarusuario.cc

tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tests.dir/test-registrarusuario.cc.i"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-registrarusuario.cc > CMakeFiles/my_tests.dir/test-registrarusuario.cc.i

tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tests.dir/test-registrarusuario.cc.s"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joseluis/Escritorio/2ºCarrera/IS/tests/test-registrarusuario.cc -o CMakeFiles/my_tests.dir/test-registrarusuario.cc.s

# Object files for target my_tests
my_tests_OBJECTS = \
"CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o" \
"CMakeFiles/my_tests.dir/test-existeactividad.cc.o" \
"CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o" \
"CMakeFiles/my_tests.dir/test-pedirdatos.cc.o" \
"CMakeFiles/my_tests.dir/test-registrarusuario.cc.o"

# External object files for target my_tests
my_tests_EXTERNAL_OBJECTS =

tests/my_tests: tests/CMakeFiles/my_tests.dir/test-eliminarusuario.cc.o
tests/my_tests: tests/CMakeFiles/my_tests.dir/test-existeactividad.cc.o
tests/my_tests: tests/CMakeFiles/my_tests.dir/test-inscribirusuario.cc.o
tests/my_tests: tests/CMakeFiles/my_tests.dir/test-pedirdatos.cc.o
tests/my_tests: tests/CMakeFiles/my_tests.dir/test-registrarusuario.cc.o
tests/my_tests: tests/CMakeFiles/my_tests.dir/build.make
tests/my_tests: tests/CMakeFiles/my_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joseluis/Escritorio/2ºCarrera/IS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable my_tests"
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/my_tests.dir/build: tests/my_tests
.PHONY : tests/CMakeFiles/my_tests.dir/build

tests/CMakeFiles/my_tests.dir/clean:
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/my_tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/my_tests.dir/clean

tests/CMakeFiles/my_tests.dir/depend:
	cd /home/joseluis/Escritorio/2ºCarrera/IS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joseluis/Escritorio/2ºCarrera/IS /home/joseluis/Escritorio/2ºCarrera/IS/tests /home/joseluis/Escritorio/2ºCarrera/IS/build /home/joseluis/Escritorio/2ºCarrera/IS/build/tests /home/joseluis/Escritorio/2ºCarrera/IS/build/tests/CMakeFiles/my_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/my_tests.dir/depend

