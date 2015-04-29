#include <iostream>

using namespace std;

int main ()
{
	unsigned long int i_sum_squares, i_square_sums;
	unsigned short int i_count_max, i_loop;
	i_sum_squares = 0;
	i_square_sums = 0;

	cout << endl << "Enter numbers to add 1 - : ";
	cin >> i_count_max;
	for (i_loop=1;i_loop<=i_count_max;i_loop++)
	{
		i_sum_squares+=i_loop*i_loop;
		i_square_sums+=i_loop;
	}
	i_square_sums*=i_square_sums;
	cout << endl << i_square_sums << " - " << i_sum_squares << " = " << i_square_sums - i_sum_squares << endl;
	return 0;
}

