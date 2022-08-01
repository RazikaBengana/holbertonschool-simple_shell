![issues](https://img.shields.io/github/issues/ChongLeangUENG/holbertonschool-simple_shell)
![forks](https://img.shields.io/github/forks/ChongLeangUENG/holbertonschool-simple_shell)
![stars](https://img.shields.io/github/stars/ChongLeangUENG/holbertonschool-simple_shell)
![license](https://img.shields.io/github/license/ChongLeangUENG/holbertonschool-simple_shell)


# simple_shell :
# a simple recreation of the command-line interpreter for the Unix-like operating system


## TABLE OF CONTENTS

- __Description__ (#description)
- __Structure of the project__ (#structure of the project)
- __Functionality__ (#functionality)
- __Requirements__ (#requirements)
- __Installation, compilation and running__ (#installation, comiplation, and running)
- __Some examples__ (#some-examples)
- __Credits__ (#credits)
- __License__ (#license)

***

### DESCRIPTION

*simple_shell is a command-line interpreter that provides a command line user interface;  The simple_shell project has been inspired by the real shell written by Ken Thompson in 1971 (the first version of it was called "the Thompson shell").  It controls the execution of the system using shell scripts, and allows users to do multiple limited tasks.  All users interact with this simple_shell by using a terminal emulator.  The goal of this project was to make us understand how the shell works by rewriting our own version.*

***

### STRUCTURE OF THE PROJECT (files)

- __*README.md*__ : Informations about this repository
- __*AUTHORS]*__ : contributors to this repository
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

``access`` (man 2 access)
``chdir`` (man 2 chdir)
``close`` (man 2 close)
``closedir`` (man 3 closedir)
``execve`` (man 2 execve)
``exit`` (man 3 exit)
``_exit`` (man 2 _exit)
``fflush`` (man 3 fflush)
``fork`` (man 2 fork)
``free`` (man 3 free)
``getcwd`` (man 3 getcwd)
``getline`` (man 3 getline)
``getpid`` (man 2 getpid)
``isatty`` (man 3 isatty)
``kill`` (man 2 kill)
``malloc`` (man 3 malloc)
``open`` (man 2 open)
``opendir`` (man 3 opendir)
``perror`` (man 3 perror)
``read`` (man 2 read)
``readdir`` (man 3 readdir)
``signal`` (man 2 signal)
``stat`` (__xstat) (man 2 stat)
``lstat`` (__lxstat) (man 2 lstat)
``fstat`` (__fxstat) (man 2 fstat)
``strtok`` (man 3 strtok)
``wait`` (man 2 wait)
``waitpid`` (man 2 waitpid)
``wait3`` (man 2 wait3)
``wait4`` (man 2 wait4)
``write`` (man 2 write)

***

### REQUIREMENTS

simple_shell has been running with __*Ubuntu 20.04.4 LTS Linux version*__, and has been compiling with the GNU compiler collection __*gcc 9.4.0*__, with flags ``-Wall, -Werror, -Wextra, and -pedantic``.

***

### INSTALLATION, COMPILATION AND RUNNING

To get a representation of this project, you have to do these following steps :

- Clone the repository :``git clone "https://github.com/ChongLeangUENG/holbertonschool-simple_shell.git"``
- Go to the directory of this repository :``cd simple_shell``
- Compile it : ``sh gcc -Wall -Werror -Wextra -pedantic *.c -o hsh``
- Run this shell in interactive mode : ``sh prompt$ ./hsh``
- Either, run it in non-interactive mode : example -> ``sh echo "/bin/ls" | .hsh``

***

### SOME EXAMPLES

***

### CREDITS

#### Authors

UENG Chong Leang : *[Github](https://github.com/ChongLeangUENG)* - *[Linkedin](https://www.linkedin.com/in/chong-leang-ueng-78521b23b/)*

BENGANA Razika : *[Github](https://github.com/Razika-Bengana)* - *[Linkedin](https://www.linkedin.com/in/razika-bengana-065284243/)*

***

### LICENSE

*simple _shell* is an open-source project, so the download and the usage has no restriction.
