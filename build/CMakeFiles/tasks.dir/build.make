# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\bruec\cppp\03\03_OO\03_oo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bruec\cppp\03\03_OO\03_oo\build

# Include any dependencies generated for this target.
include CMakeFiles/tasks.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tasks.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tasks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tasks.dir/flags.make

CMakeFiles/tasks.dir/src/tictactoe.cpp.obj: CMakeFiles/tasks.dir/flags.make
CMakeFiles/tasks.dir/src/tictactoe.cpp.obj: CMakeFiles/tasks.dir/includes_CXX.rsp
CMakeFiles/tasks.dir/src/tictactoe.cpp.obj: ../src/tictactoe.cpp
CMakeFiles/tasks.dir/src/tictactoe.cpp.obj: CMakeFiles/tasks.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bruec\cppp\03\03_OO\03_oo\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tasks.dir/src/tictactoe.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tasks.dir/src/tictactoe.cpp.obj -MF CMakeFiles\tasks.dir\src\tictactoe.cpp.obj.d -o CMakeFiles\tasks.dir\src\tictactoe.cpp.obj -c C:\Users\bruec\cppp\03\03_OO\03_oo\src\tictactoe.cpp

CMakeFiles/tasks.dir/src/tictactoe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tasks.dir/src/tictactoe.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bruec\cppp\03\03_OO\03_oo\src\tictactoe.cpp > CMakeFiles\tasks.dir\src\tictactoe.cpp.i

CMakeFiles/tasks.dir/src/tictactoe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tasks.dir/src/tictactoe.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bruec\cppp\03\03_OO\03_oo\src\tictactoe.cpp -o CMakeFiles\tasks.dir\src\tictactoe.cpp.s

# Object files for target tasks
tasks_OBJECTS = \
"CMakeFiles/tasks.dir/src/tictactoe.cpp.obj"

# External object files for target tasks
tasks_EXTERNAL_OBJECTS = \
"C:/Users/bruec/cppp/03/03_OO/03_oo/build/CMakeFiles/common.dir/src/normal_player.cpp.obj" \
"C:/Users/bruec/cppp/03/03_OO/03_oo/build/CMakeFiles/common.dir/src/perfect_player.cpp.obj" \
"C:/Users/bruec/cppp/03/03_OO/03_oo/build/CMakeFiles/common.dir/src/random_player.cpp.obj" \
"C:/Users/bruec/cppp/03/03_OO/03_oo/build/CMakeFiles/common.dir/src/human_player.cpp.obj" \
"C:/Users/bruec/cppp/03/03_OO/03_oo/build/CMakeFiles/common.dir/src/board.cpp.obj" \
"C:/Users/bruec/cppp/03/03_OO/03_oo/build/CMakeFiles/common.dir/src/player.cpp.obj" \
"C:/Users/bruec/cppp/03/03_OO/03_oo/build/CMakeFiles/common.dir/src/game_controller.cpp.obj"

tasks.exe: CMakeFiles/tasks.dir/src/tictactoe.cpp.obj
tasks.exe: CMakeFiles/common.dir/src/normal_player.cpp.obj
tasks.exe: CMakeFiles/common.dir/src/perfect_player.cpp.obj
tasks.exe: CMakeFiles/common.dir/src/random_player.cpp.obj
tasks.exe: CMakeFiles/common.dir/src/human_player.cpp.obj
tasks.exe: CMakeFiles/common.dir/src/board.cpp.obj
tasks.exe: CMakeFiles/common.dir/src/player.cpp.obj
tasks.exe: CMakeFiles/common.dir/src/game_controller.cpp.obj
tasks.exe: CMakeFiles/tasks.dir/build.make
tasks.exe: CMakeFiles/tasks.dir/linklibs.rsp
tasks.exe: CMakeFiles/tasks.dir/objects1.rsp
tasks.exe: CMakeFiles/tasks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bruec\cppp\03\03_OO\03_oo\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tasks.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tasks.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tasks.dir/build: tasks.exe
.PHONY : CMakeFiles/tasks.dir/build

CMakeFiles/tasks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tasks.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tasks.dir/clean

CMakeFiles/tasks.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bruec\cppp\03\03_OO\03_oo C:\Users\bruec\cppp\03\03_OO\03_oo C:\Users\bruec\cppp\03\03_OO\03_oo\build C:\Users\bruec\cppp\03\03_OO\03_oo\build C:\Users\bruec\cppp\03\03_OO\03_oo\build\CMakeFiles\tasks.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tasks.dir/depend

