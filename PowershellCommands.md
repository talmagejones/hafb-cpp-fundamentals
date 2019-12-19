## C++ Environment in Windows
- VSCode  https://code.visualstudio.com/   // code editor
- git   https://git-scm.com/        // for source control
- cmake    https://cmake.org/     // to work with project
- g++ (mingw) http://www.mingw.org/  // compiler for windows. 
    - Add c:\MinGW\bin\ to PATH env. variable
    - mingw32-make      // use by cmake
    - mingw32-gcc-g++   // c++ compiler 
    - mingw32-gdb       // debugger
- github.com  http://github.com  // for cloud service

## Terminal Commands 
Note: ($ means terminal prompt):
```bash
$   ls          # list folder contents
$ cd  <dest>  	# change directories
$ cd   ..		# .. parent directory 
$ pwd           # show present working directory
$ rm <name>     # remove/delete file/directory
$ mkdir <name>  # make a directory/folder
$ cp <source> <dest>
```
## File System
``` bash
.    # (one dot) present working directory
..   # (two dots) parent directory
```
## C++ Basics
- Source file extension: `.cpp`
- Header files: `.h`,`.hpp`

## g++ Compiler for 1 file
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

## g++ Compiler for 2 files
For example, if you have a library
under the `funcitons.cpp` and 
`functions.h` files, and you have a 
driver under `run_functions.cpp` you 
need to compile as follows:
```bash
# To compile
# -o for output file name
$ g++ functions.cpp run_functions.cpp 
-o run_functions
# To run
$ ./run_functions.exe
```

### C++ File Template
```cpp
#include <iostream>
using namespace std;

int main()
{
    return 0;
}
```
## Plugins and Doxygen documentation

- C/C++ Intellisense
- Code Spell Extension 
- Doxygen Documentation Generator
- Markdown All in One
- CMake
- CMake Tools

```cpp
To generate Doxygen documentation: 
// Run /** and <Enter>
```

## Cloning a git repository in VSCode
- hit F1 to enter a command
- type Git: Clone
- copy and paste the address of the repository to clone from github
- follow instructions

## CMake
To build a project we need all the 
rules to be set under `CMakeLists.txt`
file.
- Create a build folder: `$ mkdir build`
- Go to the build dir: `$ cd build`
- Run cmake: `$ cmake .. -G "MinGW Makefiles"`. The `..` is becuase your CMakeLists.txt is one folder up.
- Build of compile your code: `$ cmake --build .`. The `.` means to build it in pwd.