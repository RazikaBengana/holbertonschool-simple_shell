![issues](https://img.shields.io/github/issues/ChongLeangUENG/holbertonschool-simple_shell)
![forks](https://img.shields.io/github/forks/ChongLeangUENG/holbertonschool-simple_shell)
![stars](https://img.shields.io/github/stars/ChongLeangUENG/holbertonschool-simple_shell)
![license](https://img.shields.io/github/license/ChongLeangUENG/holbertonschool-simple_shell)


# simple_shell :
# a simple recreation of the command-line interpreter for the Unix-like operating system


## TABLE OF CONTENTS

- *[Description] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#description)*
- *[Structure of the project] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#structure-of-the-project)*
- *[Functionality] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#functionality)*
- *[Requirements] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#requirements)*
- *[Installation, compilation and running] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#installation-compilation-and-running)*
- *[Some examples] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#some-examples)*
- *[Credits] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#credits)*
- *[License] (https://github.com/ChongLeangUENG/holbertonschool-simple_shell#license)*

***

### DESCRIPTION

*simple_shell is a command-line interpreter that provides a command line user interface;
The simple_shell project has been inspired by the real shell written by Ken Thompson in 1971 (the first version of it was called "the Thompson shell").
It controls the execution of the system using shell scripts, and allows users to do multiple limited tasks.
All users interact with this simple_shell by using a terminal emulator.

The goal of this project was to make us understand how the shell works by rewriting our own version.*

***

### STRUCTURE OF THE PROJECT (files)

- *[README.md]* : Informations about this repository
- *[AUTHORS]* : contributors to this repository
- *[man_1_simple_shell]* : Manual page for the simple_shell
- *[shell.h]* : header file including all the prototypes functions used
- *[execve.c]* :
- *[freegrid.c]* :
- *[getenv.c]* :
- *[getpath.c]* :
- *[pidmax.sh]* :
- *[printenv.c]* :
- *[readcmd.c]* :
- *[sign.c]* :
- *[split.c]* :
- *[splitenv.c]* :
- *[struse.c]* :
- *[super_shell.c]* :

***

### FUNCTIONALITY

You can see below a list of all functions and system calls allowed for our project :
(We used some of them)


(https://intranet.hbtn.io/projects/2174#:~:text=access%20(man%202,man%202%20write))

***

### REQUIREMENTS

simple_shell has been running with **Ubuntu 20.04.4 LTS** Linux version, and has been compiling with the GNU compiler collection **gcc 9.4.0**, with flags '''-Wall, -Werror, -Wextra, and -pedantic'''.

***

### INSTALLATION, COMPILATION AND RUNNING

To get a representation of this project, you have to do these following steps :

- Clone the repository :'''git clone "https://github.com/ChongLeangUENG/holbertonschool-simple_shell.git"'''
- Go to the directory of this repository :'''cd simple_shell'''
- Compile it : '''gcc -Wall -Werror -Wextra -pedantic *.c -o hsh'''
- Run this shell in interactive mode : '''prompt$ ./hsh'''
- Either, run it in non-interactive mode : example -> '''echo "/bin/ls" | .hsh'''

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
