#include "main.h"

/**
 * initialize_buffer - creates space in memory for a buffer
 * @bsize: size buffer struct to initialize
 * Return: Pointer to initialized struct Buffer
 */
buffer *initialize_buffer(int bsize)
{
	buffer *ptr = malloc(sizeof(buffer));

	if (ptr == NULL)
		return (0);
	ptr->pformat = malloc(sizeof(char) * bsize);
	if (ptr->pformat == NULL)
	{
		free(ptr);
		return (0);
	}
	ptr->pos = 0;

	return (ptr);
}


/**
 * write_buffer - writes string to buffer
 * @b: pointer to a struct Buffer
 * @c: char to write
 * Return: Void
 */
void write_buffer(buffer *b, char c)
{
	if (b == NULL || c == 0)
		return;

	b->pformat[b->pos++] = c;
}

/**
 * print_buffer - Prints the contents of the buffer
 * @b: buffer to print
 * Return: number of characters printed
 */
int print_buffer(buffer *b)
{
	unsigned int i;
	int t = 0;

	for (i = 0; i < b->pos; i++)
		t += _putchar(b->pformat[i]);
	return (t);
	/*return(write(1, b->pformat, (b->pos - 1)));*/
}


/**
 * free_buffer - frees space in memory for size buffer
 * @b: buffer to free
 * Return: Void
 */
void free_buffer(buffer *b)
{
	if (b == NULL)
		return;
	free(b->pformat);
	free(b);
}
