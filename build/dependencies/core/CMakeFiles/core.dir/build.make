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
include dependencies/core/CMakeFiles/core.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include dependencies/core/CMakeFiles/core.dir/compiler_depend.make

# Include the progress variables for this target.
include dependencies/core/CMakeFiles/core.dir/progress.make

# Include the compile flags for this target's objects.
include dependencies/core/CMakeFiles/core.dir/flags.make

dependencies/core/CMakeFiles/core.dir/src/base.cpp.o: dependencies/core/CMakeFiles/core.dir/flags.make
dependencies/core/CMakeFiles/core.dir/src/base.cpp.o: /Users/chetankaushik/codes/RandomThoughts/dependencies/core/src/base.cpp
dependencies/core/CMakeFiles/core.dir/src/base.cpp.o: dependencies/core/CMakeFiles/core.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chetankaushik/codes/RandomThoughts/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dependencies/core/CMakeFiles/core.dir/src/base.cpp.o"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/core && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT dependencies/core/CMakeFiles/core.dir/src/base.cpp.o -MF CMakeFiles/core.dir/src/base.cpp.o.d -o CMakeFiles/core.dir/src/base.cpp.o -c /Users/chetankaushik/codes/RandomThoughts/dependencies/core/src/base.cpp

dependencies/core/CMakeFiles/core.dir/src/base.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/src/base.cpp.i"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/core && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chetankaushik/codes/RandomThoughts/dependencies/core/src/base.cpp > CMakeFiles/core.dir/src/base.cpp.i

dependencies/core/CMakeFiles/core.dir/src/base.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/src/base.cpp.s"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/core && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chetankaushik/codes/RandomThoughts/dependencies/core/src/base.cpp -o CMakeFiles/core.dir/src/base.cpp.s

# Object files for target core
core_OBJECTS = \
"CMakeFiles/core.dir/src/base.cpp.o"

# External object files for target core
core_EXTERNAL_OBJECTS =

dependencies/core/libcore.dylib: dependencies/core/CMakeFiles/core.dir/src/base.cpp.o
dependencies/core/libcore.dylib: dependencies/core/CMakeFiles/core.dir/build.make
dependencies/core/libcore.dylib: dependencies/core/CMakeFiles/core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chetankaushik/codes/RandomThoughts/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libcore.dylib"
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dependencies/core/CMakeFiles/core.dir/build: dependencies/core/libcore.dylib
.PHONY : dependencies/core/CMakeFiles/core.dir/build

dependencies/core/CMakeFiles/core.dir/clean:
	cd /Users/chetankaushik/codes/RandomThoughts/build/dependencies/core && $(CMAKE_COMMAND) -P CMakeFiles/core.dir/cmake_clean.cmake
.PHONY : dependencies/core/CMakeFiles/core.dir/clean

dependencies/core/CMakeFiles/core.dir/depend:
	cd /Users/chetankaushik/codes/RandomThoughts/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chetankaushik/codes/RandomThoughts /Users/chetankaushik/codes/RandomThoughts/dependencies/core /Users/chetankaushik/codes/RandomThoughts/build /Users/chetankaushik/codes/RandomThoughts/build/dependencies/core /Users/chetankaushik/codes/RandomThoughts/build/dependencies/core/CMakeFiles/core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dependencies/core/CMakeFiles/core.dir/depend
