#include <iostream>
#include <math.h>

using namespace std;

#define MAXSEARCH 600851475143LLU

unsigned long long int get_ldv(unsigned long long int, unsigned long long int);

int main()
{
	cout << "calculating first divisor of "<< MAXSEARCH << endl << endl;
	cout <<  get_ldv(2,MAXSEARCH) << endl << endl;
	return 0;
}

unsigned long long int get_ldv(unsigned long long int i_search, unsigned long long int i_src_val)
{
	while ((i_src_val % i_search++ != 0) && (i_search < sqrt(i_src_val)));
	if (i_search < sqrt(i_src_val))
	{
		cout << --i_search << " -> ";
		return get_ldv(2,i_src_val/i_search);
	}
	else
		return i_src_val;
}
