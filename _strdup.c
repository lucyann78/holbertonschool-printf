#include "main.h"

/**
 * _strdup - Copyes a str into allocated memory
 * @str: String to be copied
 * Return: Pointer to copied str or null if there is an error
 */
char *_strdup(char *str)
{
	int size, i;
	char *cp;

	if (!str || str == NULL)
		return (0);

	i = 0;
	size = _strlen(str);
	cp = malloc(((size_t)size + 1) * sizeof(char));

	if (cp == NULL)
		return (0);

	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[size] = '\0';

	return (cp);
}


/**
 * _strlen - Finds the length of a str
 * @str: string to find the length
 * Return: an unsigned int with the size of the str
 */
int _strlen(char *str)
{
	unsigned int i;

	if (str)
	{
		for (i = 0; str[i] != '\0'; i++)
			;

		return (i);
	}

	return (0);
}
