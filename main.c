#include <stdio.h>

void functionA()
{	
	printf("Function A in main.\n");
}

void functionB()
{
	printf("Function B in main.\n");
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
