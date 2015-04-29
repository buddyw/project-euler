#include <iostream>
#include <math.h>

using namespace std;

#define MAXSEARCH 999

int get_n(unsigned long int, int);

bool check_pal(unsigned long int);

int main()
{
	int i_mx,i_my;
	int i_big;
	i_big = 0;
	cout << "checking palendromes as multipls of 3 digit #'s up to"<< MAXSEARCH << endl << endl;
	cout <<  endl << 1234321 << check_pal(1234321) << endl;
	for (i_mx=MAXSEARCH;i_mx>1;i_mx--)
		for (i_my=MAXSEARCH;i_my>1;i_my--)
			if (check_pal(i_mx*i_my))
					if (i_big < i_mx*i_my)
						i_big = i_mx*i_my;
	cout << endl << "Biggest: " << i_big << endl;
	return 0;
}
int get_n(unsigned long int i_val, int i_pos)
{
	unsigned long int i_tmp;
	i_tmp = i_val;
	i_tmp/=pow10(i_pos);
	return i_tmp%10;
}

bool check_pal(unsigned long int i_val)
{
	int i_val_len, i_idx;
	unsigned long int i_tmp_val;
	bool b_pflag;
	
	//get the length of the number
	i_tmp_val = i_val;
	for(i_val_len=1;i_tmp_val>=10;i_tmp_val/=10) i_val_len++;
	//cout << endl << "len=" << i_val_len << endl;	
	for (i_idx=1;i_idx<=i_val_len/2;i_idx++)
	{
		if (get_n(i_val,i_idx-1) != get_n(i_val,i_val_len-i_idx))
		{
			//cout << i_idx << ':' << get_n(i_val,i_idx-1) << "!=" << get_n(i_val,i_val_len-i_idx) << '|';
			return false;
		}
		//else
			//cout << get_n(i_val,i_idx-1) << "==" << get_n(i_val,i_val_len-i_idx) << '|'; 
	}
	return true;
}


	
	
