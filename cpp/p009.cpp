#include <iostream>
#include <math.h>

using namespace std;

#define MAXSEARCH 1000

int main()
{
	unsigned long int i_result;
	unsigned int i_a,i_b,i_c;
	const unsigned int MAX_VAL = MAXSEARCH;	
	
	i_a=MAX_VAL-2;
	i_b=MAX_VAL-1;
	i_c=MAX_VAL;

	i_result = i_a + i_b + i_c;
	
	while (((i_result != MAXSEARCH)||(i_a*i_a+i_b*i_b!=i_c*i_c))&&(i_c > MAXSEARCH/3))
	{
		if (i_a > 1)
		{
			i_a--;
		}
		else
		{
			if (i_b > 1)
			{
				i_b--;
				i_a = i_b-1;
			}
			else
			{
				if (i_c > MAXSEARCH/3)
				{
					i_b = i_c-1;
					i_a = i_b-1;
					i_c--;
				}
				else
				{
					i_c--;
				}
			}
		}
		i_result = i_a + i_b + i_c;
	}
	cout << endl << "Results: " << i_a << '+' << i_b << '+' << i_c << '=' << i_result << endl;
	cout << "Answer: " << i_a*i_a << '+' << i_b*i_b << '+' << i_c*i_c << '=' << i_a*i_a+i_b*i_b+i_c*i_c << endl;
	cout << "Answer: " << i_a << '*' << i_b << '*' << i_c << '=' << i_a*i_b*i_c << endl; 
	return 0;
}

