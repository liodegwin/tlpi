# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /media/psf/Home/MyTec/gitrepos/tlpi/my_code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/psf/Home/MyTec/gitrepos/tlpi/my_code/build

# Include any dependencies generated for this target.
include CMakeFiles/my_code.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_code.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_code.dir/flags.make

CMakeFiles/my_code.dir/process/fork_1.c.o: CMakeFiles/my_code.dir/flags.make
CMakeFiles/my_code.dir/process/fork_1.c.o: ../process/fork_1.c
CMakeFiles/my_code.dir/process/fork_1.c.o: CMakeFiles/my_code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/MyTec/gitrepos/tlpi/my_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/my_code.dir/process/fork_1.c.o"
	/usr/bin/aarch64-redhat-linux-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/my_code.dir/process/fork_1.c.o -MF CMakeFiles/my_code.dir/process/fork_1.c.o.d -o CMakeFiles/my_code.dir/process/fork_1.c.o -c /media/psf/Home/MyTec/gitrepos/tlpi/my_code/process/fork_1.c

CMakeFiles/my_code.dir/process/fork_1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/my_code.dir/process/fork_1.c.i"
	/usr/bin/aarch64-redhat-linux-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/psf/Home/MyTec/gitrepos/tlpi/my_code/process/fork_1.c > CMakeFiles/my_code.dir/process/fork_1.c.i

CMakeFiles/my_code.dir/process/fork_1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/my_code.dir/process/fork_1.c.s"
	/usr/bin/aarch64-redhat-linux-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/psf/Home/MyTec/gitrepos/tlpi/my_code/process/fork_1.c -o CMakeFiles/my_code.dir/process/fork_1.c.s

# Object files for target my_code
my_code_OBJECTS = \
"CMakeFiles/my_code.dir/process/fork_1.c.o"

# External object files for target my_code
my_code_EXTERNAL_OBJECTS =

my_code: CMakeFiles/my_code.dir/process/fork_1.c.o
my_code: CMakeFiles/my_code.dir/build.make
my_code: CMakeFiles/my_code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/psf/Home/MyTec/gitrepos/tlpi/my_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable my_code"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_code.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_code.dir/build: my_code
.PHONY : CMakeFiles/my_code.dir/build

CMakeFiles/my_code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_code.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_code.dir/clean

CMakeFiles/my_code.dir/depend:
	cd /media/psf/Home/MyTec/gitrepos/tlpi/my_code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/psf/Home/MyTec/gitrepos/tlpi/my_code /media/psf/Home/MyTec/gitrepos/tlpi/my_code /media/psf/Home/MyTec/gitrepos/tlpi/my_code/build /media/psf/Home/MyTec/gitrepos/tlpi/my_code/build /media/psf/Home/MyTec/gitrepos/tlpi/my_code/build/CMakeFiles/my_code.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_code.dir/depend
