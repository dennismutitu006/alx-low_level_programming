#include "main.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
void _puts(char *s);
int _atoi(char *s);
char *_strpbrk(char *s, char *accept);
int _putchar(char c);
int _abs(int n);
char *_strchr(char *s, char c);
/**
 * _strlen - a function that returna the length if a string.
 * @s: A pointer to the characters string that are passed as arguments.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (len);
	for (len = 0; s[len]; len++)
		;
	return (len);
}
/**
 * _strcpy - function copies the sring pointed to by src including '\0'.
 * @dest: destination of copied string.
 * @src: ponter to source string.
 *
 * Return: pointer tio dest.
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - Concantenates two strings
 * @dest: Pointer to destination string.
 * @src: Pointer to source string
 *
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *dtmp;
	char *stmp;

	dtmp = dest;
	stmp = src;

	while (*dtmp != '\0')
		dtmp++;

	while (*stmp != '\0')
		*dtmp++ = *stmp++;
	*dtmp = '\0';
	return (dest);
}
/**
 * _strncat - function concatenates two strings.
 * @dest: destinatin string.
 * @src: source string.
 * @n: n bytes to copy from src.
 *
 * Return: a pointer to dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dlen = _strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
/**
 * _abs - computes the absolute value of an integer.
 * @c: number to b computed.
 * Return: Absolute value of no. or 0.
 */
int _abs(int c)
{
	int absVal;

	if (c < 0)
	{
		absVal = c * -1;
		return (absVal);
	}
	return (c);
}
/**
 * _strpbrk- Enty point.
 * @s: input
 * @accept: input
 * Return: 0 success.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
/**
 * _strstr- entrry point.
 * @haystack: input
 * @needle: input
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *l = haystack;
	char *p = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
/**
 * _atoi - converts string to int.
 * @s: string to be converted.
 * Return: int converted from the string.
 */
int _atoi(char *s)
{
	int j, k, n, len, f, digit;

	j = 0;
	k = 0;
	n = 0;
	len = 0;

	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++k;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (k % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}
	if (f == 0)
		return (0);
	return (n);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _memcpy - function that copies the memory ares.
 * @dest: where the memory is stored.
 * @src: where is coppied
 * @n: numbere of bytes to be copied.
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
		return (dest);
	}
	return (0);
}
