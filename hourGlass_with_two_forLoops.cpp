#include <iostream>

using namespace std;

int main()
{
	int size = 5;
	int spaces = 0;
	int lower(0);
	int higher(0);
	int count(0);
	bool low(0);
	bool high(1);
	int tempsize(size);

	for(int i=0; i<size; i++)
	{
		if(high && i == 0)
		{
			tempsize--;
			continue;
		}

		lower = i*2 + spaces;
		higher = tempsize*2 + spaces;
		if(low)
		{
			count = lower;
		}
		if(high)
		{
			count = higher;
		}
		
		//---------------------------//
		for(int j=0; j<=count; j++)
		{
			if(j < spaces)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
		//----------------------------//
		if( i == size - 1 && high)
		{
			i = -1;
			high = false;
			low = true;
			spaces = size - 1;
			continue;
		}


		if(low)
			spaces--;
		else
		{	
			spaces++;
			tempsize--;
		}

	}
}
