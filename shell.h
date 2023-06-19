#ifndef SHELL_H_
#define SHELL_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>


#define BUFFER_SIZE 1024
#define Max_Command 20

void swap_int(int *a, int *b);
void bubble_sort(int *array, size_t size);
void prompt_command(char **av, char **env);


#endif
