![Linux](https://cdn.comparitech.com/wp-content/uploads/2018/08/Linux-Shell-Getting-Started-1.jpg)
![issues](https://img.shields.io/github/issues/ChongLeangUENG/holbertonschool-simple_shell)
![forks](https://img.shields.io/github/forks/ChongLeangUENG/holbertonschool-simple_shell)
![stars](https://img.shields.io/github/stars/ChongLeangUENG/holbertonschool-simple_shell)
![license](https://img.shields.io/github/license/ChongLeangUENG/holbertonschool-simple_shell)
![Ubuntu](https://img.shields.io/badge/-Ubuntu%2020.04.4-orange)
![C language](https://img.shields.io/badge/-C%20language-yellow)
![Vim](https://img.shields.io/badge/-Vim-yellowgreen)

# simple_shell :
# a simple recreation of the command-line interpreter for the Unix-like operating system


## TABLE OF CONTENTS

- __[Description](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#description)__
- __[Structure of the project](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#structure-of-the-project)__
- __[Functionality](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#functionality)__
- __[Requirements](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#requirements)__
- __[Installation, compilation and running](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#installation-compilation-and-running)__
- __[Some examples](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#some-examples)__
- __[Credits](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#credits)__
- __[License](https://github.com/ChongLeangUENG/holbertonschool-simple_shell#license)__

***

### DESCRIPTION

__*simple_shell*__ is a command-line interpreter that provides a command line user interface.

The simple_shell project has been inspired by the real shell written by __*Ken Thompson*__ in 1971 (the first version of it was called "the Thompson shell").

It controls the execution of the system using shell scripts, and allows users to do multiple limited tasks. All users interact with this simple_shell by using a terminal emulator.

The goal of this project was to make us understand how the shell works by rewriting our own version.

***

### STRUCTURE OF THE PROJECT

- __*README.md*__ : Informations about this repository
- __*AUTHORS*__ : contributors to this repository
- __*man_1_simple_shell*__ : Manual page for the simple_shell
- __*shell.h*__ : header file including all the prototypes functions used
- __*execve.c*__ :
- __*freegrid.c*__ :
- __*getenv.c*__ :
- __*getpath.c*__ :
- __*pidmax.sh*__ :
- __*printenv.c*__ :
- __*readcmd.c*__ :
- __*sign.c*__ :
- __*split.c*__ :
- __*splitenv.c*__ :
- __*struse.c*__ :
- __*super_shell.c*__ :

***

### FUNCTIONALITY

You can see below a list of all functions and system calls allowed for our project :
(We used some of them)

- ``access`` (man 2 access)
- ``chdir`` (man 2 chdir)
- ``close`` (man 2 close)
- ``closedir`` (man 3 closedir)
- ``execve`` (man 2 execve) -> (https://img.shields.io/badge/-used-red)
- ``exit`` (man 3 exit) -> (https://img.shields.io/badge/-used-red)
- ``_exit`` (man 2 _exit)
- ``fflush`` (man 3 fflush)
- ``fork`` (man 2 fork) -> (https://img.shields.io/badge/-used-red)
- ``free`` (man 3 free) -> (https://img.shields.io/badge/-used-red)
- ``getcwd`` (man 3 getcwd)
- ``getline`` (man 3 getline) -> (https://img.shields.io/badge/-used-red)
- ``getpid`` (man 2 getpid)
- ``isatty`` (man 3 isatty) -> (https://img.shields.io/badge/-used-red)
- ``kill`` (man 2 kill)
- ``malloc`` (man 3 malloc) -> (https://img.shields.io/badge/-used-red)
- ``open`` (man 2 open)
- ``opendir`` (man 3 opendir)
- ``perror`` (man 3 perror) -> (https://img.shields.io/badge/-used-red)
- ``read`` (man 2 read)
- ``readdir`` (man 3 readdir)
- ``signal`` (man 2 signal) -> (https://img.shields.io/badge/-used-red)
- ``stat`` (__xstat) (man 2 stat)
- ``lstat`` (__lxstat) (man 2 lstat)
- ``fstat`` (__fxstat) (man 2 fstat)
- ``strtok`` (man 3 strtok) -> (https://img.shields.io/badge/-used-red)
- ``wait`` (man 2 wait) -> (https://img.shields.io/badge/-used-red)
- ``waitpid`` (man 2 waitpid)
- ``wait3`` (man 2 wait3)
- ``wait4`` (man 2 wait4)
- ``write`` (man 2 write) -> (https://img.shields.io/badge/-used-red)

***

### REQUIREMENTS

simple_shell has been running with __*Ubuntu 20.04.4 LTS Linux version*__, and has been compiling with the GNU compiler collection __*gcc 9.4.0*__, with flags ``-Wall, -Werror, -Wextra, and -pedantic``.

***

### INSTALLATION, COMPILATION AND RUNNING

To get a representation of this project, you have to do these following steps :

- Clone the repository :``git clone "https://github.com/ChongLeangUENG/holbertonschool-simple_shell.git"``
- Go to the directory of this repository :``cd simple_shell``
- Compile it : ``gcc -Wall -Werror -Wextra -pedantic *.c -o hsh``
- Run this shell in interactive mode : ``prompt$ ./hsh``
- Either, run it in non-interactive mode : example -> ``echo "/bin/ls" | .hsh``

***

### SOME EXAMPLES

***

### CREDITS

#### Authors

UENG Chong Leang : *[Github](https://github.com/ChongLeangUENG)* - *[Linkedin](https://www.linkedin.com/in/chong-leang-ueng-78521b23b/)*

BENGANA Razika : *[Github](https://github.com/Razika-Bengana)* - *[Linkedin](https://www.linkedin.com/in/razika-bengana-065284243/)*

***

### LICENSE

__*simple _shell*__ is an open-source project, so the download and the usage has no restriction.
