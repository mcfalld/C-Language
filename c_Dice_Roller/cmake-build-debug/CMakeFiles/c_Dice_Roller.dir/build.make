# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /cygdrive/c/Users/Derrick/.CLion2017.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Derrick/.CLion2017.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_Dice_Roller.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_Dice_Roller.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_Dice_Roller.dir/flags.make

CMakeFiles/c_Dice_Roller.dir/main.c.o: CMakeFiles/c_Dice_Roller.dir/flags.make
CMakeFiles/c_Dice_Roller.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_Dice_Roller.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c_Dice_Roller.dir/main.c.o   -c /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/main.c

CMakeFiles/c_Dice_Roller.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_Dice_Roller.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/main.c > CMakeFiles/c_Dice_Roller.dir/main.c.i

CMakeFiles/c_Dice_Roller.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_Dice_Roller.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/main.c -o CMakeFiles/c_Dice_Roller.dir/main.c.s

CMakeFiles/c_Dice_Roller.dir/main.c.o.requires:

.PHONY : CMakeFiles/c_Dice_Roller.dir/main.c.o.requires

CMakeFiles/c_Dice_Roller.dir/main.c.o.provides: CMakeFiles/c_Dice_Roller.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/c_Dice_Roller.dir/build.make CMakeFiles/c_Dice_Roller.dir/main.c.o.provides.build
.PHONY : CMakeFiles/c_Dice_Roller.dir/main.c.o.provides

CMakeFiles/c_Dice_Roller.dir/main.c.o.provides.build: CMakeFiles/c_Dice_Roller.dir/main.c.o


# Object files for target c_Dice_Roller
c_Dice_Roller_OBJECTS = \
"CMakeFiles/c_Dice_Roller.dir/main.c.o"

# External object files for target c_Dice_Roller
c_Dice_Roller_EXTERNAL_OBJECTS =

c_Dice_Roller.exe: CMakeFiles/c_Dice_Roller.dir/main.c.o
c_Dice_Roller.exe: CMakeFiles/c_Dice_Roller.dir/build.make
c_Dice_Roller.exe: CMakeFiles/c_Dice_Roller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_Dice_Roller.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_Dice_Roller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_Dice_Roller.dir/build: c_Dice_Roller.exe

.PHONY : CMakeFiles/c_Dice_Roller.dir/build

CMakeFiles/c_Dice_Roller.dir/requires: CMakeFiles/c_Dice_Roller.dir/main.c.o.requires

.PHONY : CMakeFiles/c_Dice_Roller.dir/requires

CMakeFiles/c_Dice_Roller.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_Dice_Roller.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_Dice_Roller.dir/clean

CMakeFiles/c_Dice_Roller.dir/depend:
	cd /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/cmake-build-debug /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/cmake-build-debug /cygdrive/c/Users/Derrick/Desktop/C/c_Dice_Roller/cmake-build-debug/CMakeFiles/c_Dice_Roller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_Dice_Roller.dir/depend

