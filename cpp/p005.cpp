#include <iostream>
#include <math.h>

using namespace std;

#define MAXSEARCH 20


bool check_div(unsigned long int);

int main()
{
	int i_big;
	i_big = 1;
	cout << "Searching for a number evenly divisable by 1 through "<< MAXSEARCH << endl << endl;
	while(check_div(i_big)==0)
		i_big++;
	cout << endl << "Smallest: " << i_big << endl;
	return 0;
}

bool check_div(unsigned long int i_val)
{
	int i_idx;
	for (i_idx = 2;i_idx<=MAXSEARCH;i_idx++)
		if (i_val % i_idx != 0) return false;	
	return true;
}


	
	
