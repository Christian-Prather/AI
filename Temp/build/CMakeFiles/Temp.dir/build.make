# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/christian/Documents/AI/Temp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/christian/Documents/AI/Temp/build

# Include any dependencies generated for this target.
include CMakeFiles/Temp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Temp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Temp.dir/flags.make

CMakeFiles/Temp.dir/main.cpp.o: CMakeFiles/Temp.dir/flags.make
CMakeFiles/Temp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/christian/Documents/AI/Temp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Temp.dir/main.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Temp.dir/main.cpp.o -c /home/christian/Documents/AI/Temp/main.cpp

CMakeFiles/Temp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Temp.dir/main.cpp.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_PREPROCESSED_SOURCE

CMakeFiles/Temp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Temp.dir/main.cpp.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_ASSEMBLY_SOURCE

# Object files for target Temp
Temp_OBJECTS = \
"CMakeFiles/Temp.dir/main.cpp.o"

# External object files for target Temp
Temp_EXTERNAL_OBJECTS =

Temp: CMakeFiles/Temp.dir/main.cpp.o
Temp: CMakeFiles/Temp.dir/build.make
Temp: CMakeFiles/Temp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/christian/Documents/AI/Temp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Temp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Temp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Temp.dir/build: Temp

.PHONY : CMakeFiles/Temp.dir/build

CMakeFiles/Temp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Temp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Temp.dir/clean

CMakeFiles/Temp.dir/depend:
	cd /home/christian/Documents/AI/Temp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/christian/Documents/AI/Temp /home/christian/Documents/AI/Temp /home/christian/Documents/AI/Temp/build /home/christian/Documents/AI/Temp/build /home/christian/Documents/AI/Temp/build/CMakeFiles/Temp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Temp.dir/depend

