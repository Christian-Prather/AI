# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\clems\Documents\GitHub\AI\find_route

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\clems\Documents\GitHub\AI\find_route\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/find_route.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/find_route.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/find_route.dir/flags.make

CMakeFiles/find_route.dir/main.cpp.obj: CMakeFiles/find_route.dir/flags.make
CMakeFiles/find_route.dir/main.cpp.obj: CMakeFiles/find_route.dir/includes_CXX.rsp
CMakeFiles/find_route.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\clems\Documents\GitHub\AI\find_route\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/find_route.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\find_route.dir\main.cpp.obj -c C:\Users\clems\Documents\GitHub\AI\find_route\main.cpp

CMakeFiles/find_route.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/find_route.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\clems\Documents\GitHub\AI\find_route\main.cpp > CMakeFiles\find_route.dir\main.cpp.i

CMakeFiles/find_route.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/find_route.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\clems\Documents\GitHub\AI\find_route\main.cpp -o CMakeFiles\find_route.dir\main.cpp.s

# Object files for target find_route
find_route_OBJECTS = \
"CMakeFiles/find_route.dir/main.cpp.obj"

# External object files for target find_route
find_route_EXTERNAL_OBJECTS =

find_route.exe: CMakeFiles/find_route.dir/main.cpp.obj
find_route.exe: CMakeFiles/find_route.dir/build.make
find_route.exe: CMakeFiles/find_route.dir/linklibs.rsp
find_route.exe: CMakeFiles/find_route.dir/objects1.rsp
find_route.exe: CMakeFiles/find_route.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\clems\Documents\GitHub\AI\find_route\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable find_route.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\find_route.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/find_route.dir/build: find_route.exe

.PHONY : CMakeFiles/find_route.dir/build

CMakeFiles/find_route.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\find_route.dir\cmake_clean.cmake
.PHONY : CMakeFiles/find_route.dir/clean

CMakeFiles/find_route.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\clems\Documents\GitHub\AI\find_route C:\Users\clems\Documents\GitHub\AI\find_route C:\Users\clems\Documents\GitHub\AI\find_route\cmake-build-debug C:\Users\clems\Documents\GitHub\AI\find_route\cmake-build-debug C:\Users\clems\Documents\GitHub\AI\find_route\cmake-build-debug\CMakeFiles\find_route.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/find_route.dir/depend
