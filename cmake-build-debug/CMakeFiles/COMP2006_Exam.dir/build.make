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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tom/CLionProjects/COMP2006_Exam

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tom/CLionProjects/COMP2006_Exam/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/COMP2006_Exam.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/COMP2006_Exam.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/COMP2006_Exam.dir/flags.make

CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o: CMakeFiles/COMP2006_Exam.dir/flags.make
CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o: ../COMP2006-Exam-Herr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tom/CLionProjects/COMP2006_Exam/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o -c /Users/tom/CLionProjects/COMP2006_Exam/COMP2006-Exam-Herr.cpp

CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tom/CLionProjects/COMP2006_Exam/COMP2006-Exam-Herr.cpp > CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.i

CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tom/CLionProjects/COMP2006_Exam/COMP2006-Exam-Herr.cpp -o CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.s

CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.requires:

.PHONY : CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.requires

CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.provides: CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.requires
	$(MAKE) -f CMakeFiles/COMP2006_Exam.dir/build.make CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.provides.build
.PHONY : CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.provides

CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.provides.build: CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o


# Object files for target COMP2006_Exam
COMP2006_Exam_OBJECTS = \
"CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o"

# External object files for target COMP2006_Exam
COMP2006_Exam_EXTERNAL_OBJECTS =

COMP2006_Exam: CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o
COMP2006_Exam: CMakeFiles/COMP2006_Exam.dir/build.make
COMP2006_Exam: CMakeFiles/COMP2006_Exam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tom/CLionProjects/COMP2006_Exam/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable COMP2006_Exam"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/COMP2006_Exam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/COMP2006_Exam.dir/build: COMP2006_Exam

.PHONY : CMakeFiles/COMP2006_Exam.dir/build

CMakeFiles/COMP2006_Exam.dir/requires: CMakeFiles/COMP2006_Exam.dir/COMP2006-Exam-Herr.cpp.o.requires

.PHONY : CMakeFiles/COMP2006_Exam.dir/requires

CMakeFiles/COMP2006_Exam.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/COMP2006_Exam.dir/cmake_clean.cmake
.PHONY : CMakeFiles/COMP2006_Exam.dir/clean

CMakeFiles/COMP2006_Exam.dir/depend:
	cd /Users/tom/CLionProjects/COMP2006_Exam/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tom/CLionProjects/COMP2006_Exam /Users/tom/CLionProjects/COMP2006_Exam /Users/tom/CLionProjects/COMP2006_Exam/cmake-build-debug /Users/tom/CLionProjects/COMP2006_Exam/cmake-build-debug /Users/tom/CLionProjects/COMP2006_Exam/cmake-build-debug/CMakeFiles/COMP2006_Exam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/COMP2006_Exam.dir/depend

