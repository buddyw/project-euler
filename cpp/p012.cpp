#include <iostream>
#include <math.h>
using namespace std;

#define MAXSEARCH 500

unsigned int count_div(unsigned long int);

int main()
{
	unsigned long int i_rtotal, i_curr;
	i_rtotal = 0;
	i_curr = 1;
	
	cout << "Searching for triangle number with "<< MAXSEARCH << "divisors" << endl << endl;
		
	do
	{
		i_rtotal += i_curr++;
		cout << i_curr << ':' << count_div(i_rtotal) << '|';
	}while(count_div(i_rtotal)<MAXSEARCH);
	
	cout << "total: " << i_rtotal << " iteration: " << i_curr-1 << " divisors: " << count_div(i_rtotal) << endl;
	
	return 0;
}

unsigned int count_div(unsigned long int i_input)
{
	const unsigned long int  MAX_DIV = i_input;
	unsigned int i_div_count, i_loop;

	i_div_count = 0;
	i_loop = 1;
	
	while (i_loop<=MAX_DIV)
	{
		i_div_count+=!(i_input % i_loop);
		i_loop++;
	}
	
	return i_div_count;
}
