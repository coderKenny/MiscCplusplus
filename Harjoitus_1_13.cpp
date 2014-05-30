//
// T‰m‰ filu sis‰lt‰‰ main funktion sorsan.
//


#define _VECTOR 
#include "Kenny.h"



void main()
{
	int a, b, power;
	for (a = 0; a<10; a++)
	{
		for (b = 1; b<10; b++)
		{
			if (pow(a, b) > 32767)
			{
				cout << "\nOverflow error"; 
				getchar(); exit(EXIT_FAILURE);
			}
			power = pow(a, b);
			cout << "\n" << a << " potenssiin " << b << " on " << power;
		}
	}
//OHO:
}