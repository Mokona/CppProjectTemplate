CppProjectTemplate
==================

Basic C++ Project to help quick start a C++ compiling and testing environment.

How to install
--------------

Either get the latest version from GitHub or extract the archive to a directory.

You also have to install __Google Test__ in the extern/ sub-directory. Check README in it to see how.

Suggested way of manual building:

- if the directory is named __CppProjectTemplate/__, create another directory at the same level with the name __CppProjectTemplate-build/__.
- in __CppProjectTemplate-build/__, type cmake __../CppProjectTemplate/__.
- on Linux, you can test type __make__, on Windows with Visual Studio, open the generated solution file.

Building with QtCreator:

- Open the CMakeFiles.txt from QtCreator.
- Choose the build directory when asked.
- Run CMake when asked.

How to run
----------

CppProjectTemplate creates two executables.

One is the application executable and is named __cpp_project_template__. It displays a Hello World typical message.

The other is named __test_suite__ and runs the tests.

Both are console application that you can run either from a terminal or from an IDE.
