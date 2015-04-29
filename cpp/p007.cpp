#include <iostream>
#include <math.h>

using namespace std;


bool is_prime(unsigned long int);

int main()
{
	int i_prime, i_loop;
	unsigned long int i_result;
	
	cout << "calculating Nth prime number " << endl;
	cout << "N=";
	cin >> i_prime;
	i_prime++;
	if (i_prime>3)
	{
		for(i_loop=3,i_result=3;i_loop<=i_prime;i_result+=2)
		{
			if (is_prime(i_result))
			{
					//cout << '?' << i_loop << ':' << i_result << ':' << is_prime(i_result)<<'?';
					//cout << '|' << i_result;
					i_loop++;
			}
		}
		i_result -=2;
	}
	else
		i_result = i_prime;
	cout <<   endl << "Result: " << i_result << endl;
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
