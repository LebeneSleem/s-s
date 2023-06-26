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
#define PATH_MAX 1024

void swap_int(int *a, int *b);
void bubble_sort(int *array, size_t size);
void prompt_command(char **av, char **env);
int string_len(char *string);
char *string_cpy(char *dest, char *src);
int string_cmp(char *s1, char *s2);
char *_strdup(char *str);
void _env(char **env);
char* handle_path(char* command);


#endif
