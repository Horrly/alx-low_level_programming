#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char* strcat(char *a, char *b) {
    while (*a++);
    a--;
    while (*a++ = *b++);
    return a;
}

char *str_a = "a string";
char *str_b = "a long long long string";
char *str_c = "yet another string";
char *result;

result = strcat(str_a, str_b);
result = strcat(result, str_c);

