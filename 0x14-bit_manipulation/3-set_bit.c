#include "holberton.h"

/**
 * set_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: 1 (success) or -1(faillure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	return ((*n >> index) & 1);
}