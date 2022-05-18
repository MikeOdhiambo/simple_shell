# 0x16. C - Simple Shell

A simple shell program that runs basic commands and environment variables

## Table of contents

 - [Description]
 - [Installation]
 - [Usage]
 - [Contributors]

## Description
This is a shell written in [C](https://en.wikipedia.org/wiki/C_(programming_language)).
It is based on [the Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell).

## Installation
Clone the below repository and compile the files into an executable using the GCC compiler.
```
https://github.com/MikeOdhiambo/simple_shell.git

```


Our shell was built and tested on  Ubuntu 20.04 LTS.

### Basic usage
- First, [fork this repository](https://docs.github.com/en/github/getting-started-with-github/fork-a-repo).
- Then [clone it to your local machine](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/cloning-a-repository).
- Create an executable by running the following command:
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`
- From there, type in the following command and press your enter button.
- `./hsh`

## Contributors
* [**Mike Odhiambo**](https://github.com/MikeOdhiambo)
* [**Careen Naitore**](https://github.com/CareenNaitore)


## Tasks
## Mandatory:

0. Betty would be proud
mandatory
Write a beautiful code that passes the Betty checks

Repo:

GitHub repository: simple_shell


1. Simple shell 0.1
- Write a UNIX command line interpreter.
- Your Shell should:
Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)


2. Simple shell 0.2
- Handle command lines with arguments

3. Simple shell 0.3
- Handle the PATH

4. Simple shell 0.4
- Implement the exit built-in, that exits the shell
- Usage: exit
- You don’t have to handle any argument to the built-in exit

5. Simple shell 1.0
- Implement the env built-in, that prints the current environment

6. Simple shell 0.1 +
- Write your own getline function

7. Simple shell 0.2.1
- do nt write own strtok function

8. Simple shell 0.4.1
- handle arguments for the built-in exit

9. setenv, unsetenv
- Implement the setenv and unsetenv builtin commands

10. cd
- Implement the builtin command cd

11. ;
- Handle the commands separator ;

12. Simple shell 1.0 +
- Handle the && and || shell logical operators

13. alias 
- Implement the alias builtin command

14. Variables
- Handle variables replacement

15. comment
- Handle comments (#)

16. File as an input 
- Your shell should take a file as a command line argument
