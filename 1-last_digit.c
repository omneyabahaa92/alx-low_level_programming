#include <stdlib.h>
#include <time.h>
#include <stdio.h>





/**
 * main -prints if number is postive, zero or negative
 * Return: Always (Sucess)
 *
 */

int main(void)
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
        {
	printf("%d is positive\n", n)
	}
        else if (n == 0)
        {    
	printf("%d is zero\n", n)
        }
        else
        {
	printf("%d is negative\n', n);
        }
        return (0);
	}
