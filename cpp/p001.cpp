#include <iostream>

using namespace std;

#define MAXSEARCH 1000

int main()
{
	unsigned long int i_rtotal;
	unsigned int i_curr;
	
	
		cout << "Adding 3's and 5's to "<< MAXSEARCH << endl << endl;
		cout << "5: ";
		i_rtotal = 0;
		i_curr = 5;
		
		do
		{
			i_rtotal+=i_curr;
			cout << i_curr << ", ";
		        i_curr+=5;
		} while(i_curr < MAXSEARCH);
		cout << endl << endl << "3: ";
		i_curr = 3;
		
		do
		{
			if (i_curr%5!=0)
			{
				i_rtotal+=i_curr;
				cout << i_curr << ", ";
			}
			i_curr += 3;
		} while(i_curr < 1000);
		cout << endl << endl << "Total: " << i_rtotal << endl << endl;
			return 0;
}

