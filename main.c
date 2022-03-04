#include <stdio.h>

void functionA()
{	
<<<<<<< HEAD
	printf("Function A in mainmain.\n");
=======
	printf("Function A in test.\n");
>>>>>>> test
}

void functionB()
{
<<<<<<< HEAD
	printf("Function B in mainmain.\n");
=======
	printf("Function B in test.\n");
>>>>>>> test
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
