# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ibrahim/C++/linux-goose/linux-goose

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ibrahim/C++/linux-goose/linux-goose/build

# Utility rule file for goose_autogen.

# Include the progress variables for this target.
include CMakeFiles/goose_autogen.dir/progress.make

CMakeFiles/goose_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ibrahim/C++/linux-goose/linux-goose/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target goose"
	/usr/bin/cmake -E cmake_autogen /home/ibrahim/C++/linux-goose/linux-goose/build/CMakeFiles/goose_autogen.dir/AutogenInfo.json Debug

goose_autogen: CMakeFiles/goose_autogen
goose_autogen: CMakeFiles/goose_autogen.dir/build.make

.PHONY : goose_autogen

# Rule to build all files generated by this target.
CMakeFiles/goose_autogen.dir/build: goose_autogen

.PHONY : CMakeFiles/goose_autogen.dir/build

CMakeFiles/goose_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/goose_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/goose_autogen.dir/clean

CMakeFiles/goose_autogen.dir/depend:
	cd /home/ibrahim/C++/linux-goose/linux-goose/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ibrahim/C++/linux-goose/linux-goose /home/ibrahim/C++/linux-goose/linux-goose /home/ibrahim/C++/linux-goose/linux-goose/build /home/ibrahim/C++/linux-goose/linux-goose/build /home/ibrahim/C++/linux-goose/linux-goose/build/CMakeFiles/goose_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/goose_autogen.dir/depend

