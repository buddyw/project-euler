#include <iostream>

using namespace std;

#define MAXSEARCH 4000000

int main()
{
	unsigned long int i_rtotal, i_fibtotal;
	unsigned long int i_lfib, i_llfib;
	
	
		cout << "Adding even fibs < "<< MAXSEARCH << endl << endl;
		cout << "Fibs: ";
		i_rtotal = 2;
		i_fibtotal = 3;
		i_lfib = 2;
		i_llfib = 1;
				
		do
		{
			if (i_fibtotal % 2 == 0)
			{
				i_rtotal += i_fibtotal;
				cout << i_fibtotal << ", ";
			}
			i_llfib = i_lfib;
			i_lfib = i_fibtotal;
			i_fibtotal = i_lfib + i_llfib;
			
		} while(i_fibtotal <= MAXSEARCH);
		
		cout << endl << endl << "Total: " << i_rtotal << endl << endl;
			return 0;
}

