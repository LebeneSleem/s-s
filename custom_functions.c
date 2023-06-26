#include "shell.h"

/**
  * string_len - A function that prints the length of a string
  * @string: A pointer to the function
  * Return: the length of the string
  */
int string_len(char *string)
{
	size_t length = 0;

	while (*string++)
		length++;

	return (length);
}

/**
 * string_cpy - copies a string
 * @src: source value
 * @dest: Destination value
 * Return: pointer to dest
 */
char *string_cpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}

/**
 * string_cmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: if s1 < s2,the negative difference
 * if s1 > s2, the positive difference
 * if s1 == s2, 0
 */
int string_cmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int a;
	int length = 0;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	ptr = ((char *) malloc((length * sizeof(char)) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= length; a++)
	{
		ptr[a] = str[a];
	}
	return (ptr);
}
