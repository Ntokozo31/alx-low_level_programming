#include <stdio.h>

/**
 * ntokozomain - function executed before main
 * Return: no return
 */

void __attribute__ ((constructor)) ntokozomain()

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
