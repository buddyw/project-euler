#include <iostream>
#include <math.h>

using namespace std;
#define MAXPRIME 2000000

bool is_prime(unsigned long int);

int main()
{
	unsigned long int i_prime, i_loop;
	unsigned long long int i_result;
	
	cout << "calculating Nth prime number " << endl;
	
	i_result = 2;
	cout << i_result;
	i_prime = 3;
	do 
	{
		if ((is_prime(i_prime))&&(i_prime < MAXPRIME)) 
		{
			i_result += i_prime;
			cout << '+' << i_prime;
		}
		i_prime+=2;
	} while(i_prime < MAXPRIME);
	cout << "Answer: " << i_result << endl << endl;
	return 0;
}


bool is_prime(unsigned long int i_input)
{
	int i_search;
	unsigned long int i_lim;
	if (i_input<=3) return true;
	if (i_input%2==0)
		return false;
	if (i_input%3==0)
		return false;
	i_lim = sqrt(i_input);
	for(i_search=3;((i_input % i_search != 0) && (i_search < i_lim+1));i_search+=2)
	{
		//cout << i_search << ':' << i_input << ':' << i_lim << '|';
	}
	//cout << i_search << ':' << i_input << ':' << i_lim << '|';
	if (i_search < i_lim+1)
	{
		return false;
	}
	else
		return true;
}
