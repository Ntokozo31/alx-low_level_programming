#include <stdio.h>

/**
 * myStartupFun - apply the construtor attribute to myStartupFun() so that it is executed before main()
 */
void myStartupFun(void)
__attribute__((constructor));

/**
 * myStartupFun - implimentation of myStartupFun
 */
void myStartupFun(void)
{
	printf("you are best! and you must allow.\n");
	printf("i bore my room upon my back!\n");
}
