# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chetankaushik/codes/RandomThoughts

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chetankaushik/codes/RandomThoughts/build

# Include any dependencies generated for this target.
include dependencies/debugutils/CMakeFiles/debugutils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include dependencies/debugutils/CMakeFiles/debugutils.dir/compiler_depend.make

# Include the progress variables for this target.
include dependencies/debugutils/CMakeFiles/debugutils.dir/progress.make

# Include the compile flags for this target's objects.
include dependencies/debugutils/CMakeFiles/debugutils.dir/flags.make

dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.o: dependencies/debugutils/CMakeFiles/debugutils.dir/flags.make
dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.o: /Users/chetankaushik/codes/RandomThoughts/dependencies/debugutils/src/debug.cpp
dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.o: dependencies/debugutils/CMakeFiles/debugutils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chetankaushik/codes/RandomThoughts/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.o"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.o -MF CMakeFiles/debugutils.dir/src/debug.cpp.o.d -o CMakeFiles/debugutils.dir/src/debug.cpp.o -c /Users/chetankaushik/codes/RandomThoughts/dependencies/debugutils/src/debug.cpp

dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/debugutils.dir/src/debug.cpp.i"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chetankaushik/codes/RandomThoughts/dependencies/debugutils/src/debug.cpp > CMakeFiles/debugutils.dir/src/debug.cpp.i

dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/debugutils.dir/src/debug.cpp.s"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chetankaushik/codes/RandomThoughts/dependencies/debugutils/src/debug.cpp -o CMakeFiles/debugutils.dir/src/debug.cpp.s

# Object files for target debugutils
debugutils_OBJECTS = \
"CMakeFiles/debugutils.dir/src/debug.cpp.o"

# External object files for target debugutils
debugutils_EXTERNAL_OBJECTS =

dependencies/debugutils/libdebugutils.a: dependencies/debugutils/CMakeFiles/debugutils.dir/src/debug.cpp.o
dependencies/debugutils/libdebugutils.a: dependencies/debugutils/CMakeFiles/debugutils.dir/build.make
dependencies/debugutils/libdebugutils.a: dependencies/debugutils/CMakeFiles/debugutils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chetankaushik/codes/RandomThoughts/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdebugutils.a"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils && $(CMAKE_COMMAND) -P CMakeFiles/debugutils.dir/cmake_clean_target.cmake
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/debugutils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dependencies/debugutils/CMakeFiles/debugutils.dir/build: dependencies/debugutils/libdebugutils.a
.PHONY : dependencies/debugutils/CMakeFiles/debugutils.dir/build

dependencies/debugutils/CMakeFiles/debugutils.dir/clean:
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils && $(CMAKE_COMMAND) -P CMakeFiles/debugutils.dir/cmake_clean.cmake
.PHONY : dependencies/debugutils/CMakeFiles/debugutils.dir/clean

dependencies/debugutils/CMakeFiles/debugutils.dir/depend:
	cd /Users/chetankaushik/codes/RandomThoughts/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chetankaushik/codes/RandomThoughts /Users/chetankaushik/codes/RandomThoughts/dependencies/debugutils /Users/chetankaushik/codes/RandomThoughts/build /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils /Users/chetankaushik/codes/RandomThoughts/build/dependencies/debugutils/CMakeFiles/debugutils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dependencies/debugutils/CMakeFiles/debugutils.dir/depend

