#include "main.h"
int _islower(int c);
int _isalpha(int c);
int _isupper(int c);
int _isdigit(int c);
void _puts(char *s);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
/**
 * _isupper- prints upper case characters.
 * @c: if c is upper case
 * Return: 1 if c is upper case
 * 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
/**
 * _islower- prints lower case letters.
 * @c: the character to be checked .
 * Return: 1 for lowercase carter else 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
/**
 * _isalpha - checks for alphabetic iorder.
 * @c: the alphabet to check.
 * Return: 1 if a letter else 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 * _isdigit - to check if a character is adigit.
 * @c:charcter to be checked.
 * Return: 1 succeess else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/**
 * _memset- fill a block of memeory with specfic vales.
 * @s: starting addreess of the memory tio be fiklled.
 * @b: value desired.
 * @n: the no. of bytes to be changed.
 * Return: the chnaged array with the new values of n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
/**
 * _strchr -it  Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: If c is found - a pointer to its first occurence.
 * if c is not found -NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 */
unsigned int _strspn(char *s, char *accept)
{
	int b = 0;/*bytes*/
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
		}
		s++;
	}
	return (b);
}
/**
 * _strcmp - a function that Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Positive byte difference if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
		return (*s1 - *s2);

	return (0);
}
/**
 * _strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: integer.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
