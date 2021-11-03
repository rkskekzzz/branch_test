#include <stdio.h>

void functionA()
{	
	printf("Function A in main2.\n");
}

void functionB()
{
	printf("Function B in main2.\n");
}

/**
 * functionA isfunctionA
 * functionAisfunctionA
 *
 * @return int 
 */
int main(void)
{
    functionA();
    functionB();
    return (0);
}
