#include <iostream>
using namespace std;

int main()
{
	int array[5][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9 ,10},
		{11, 12, 13, 14},
		{15, 16, 17, 18}

	};

	int sum = 0;
	int min_num = array[0][0];
	int max_num = array[0][0];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int num = array[i][j];
			sum += num;
			if (num < min_num)
			{
				min_num = num;
			}
			if (num > max_num)
			{
				max_num = num;
			}
		}
	}

	double average = static_cast<double>(sum) / 25;

	cout << "Sum: " << sum << endl;

	cout << "Average: " << average << endl;

	cout << "Min: " << min_num << endl;

	cout << "Max: " << max_num << endl;
	
	
	return 0;
}
