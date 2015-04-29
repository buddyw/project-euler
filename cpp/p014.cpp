#include <iostream>
#include <math.h>

using namespace std;

unsigned int collatz(unsigned long int i_input);

int main()
{
	unsigned int i_seed, i_bigseed, i_tmp, i_maxitr;
	unsigned long int i_result;
	
	i_bigseed = 0;
	i_maxitr = 0;
	
	for (i_seed = 2; i_seed < 1000000;i_seed++)
	{
		i_tmp=collatz(i_seed);
		if (i_tmp > i_maxitr)
		{
			i_bigseed=i_seed;
			i_maxitr=i_tmp;
		}
	}
	cout << endl << "Seed: " << i_bigseed << " Itr: " << i_maxitr << endl;
	return 0;
}

unsigned int collatz(unsigned long int i_input)
{
	unsigned int i_loop;
	unsigned long int i_tmp;
	
	i_tmp = i_input;
	i_loop = 0;
	
	if (i_input <= 1) return 0;
	
	do
	{
		if (i_tmp % 2)
		{
			i_tmp = i_tmp * 3 + 1;
		}
		else
		{
			i_tmp = i_tmp / 2;
		}
		i_loop++;
	} while (i_tmp != 1);

	return i_loop;
}
