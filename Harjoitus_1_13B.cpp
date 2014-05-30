
#include <iostream>

using namespace std;

void main()
{
	int a, b;
	double power;
	bool errorOccurred=false;
	for (a = 0; a<10; a++)
	{
		for (b = 1; b<10; b++)
		{
			if (pow(a, b) > 32767)
			{
				cout << "\nOverflow error"; 
				errorOccurred=!errorOccurred;
				break;
			}
			power = pow(a, b); // Conversion from double to int fixed
			cout << "\n" << a << " potenssiin " << b << " on " << power;
		}

		if(errorOccurred)
			break;
	}
	getchar();
//OHO:
}