#include <iostream>
using namespace std;

int main(){
	//Arrays
	{
		//                      0    1    2    3    4    5    6
		char myFirstName[] = { 'M', 'A', 'T', 'T', 'H', 'E', 'W' };
		int myFirstNumbers[77];
		for (int i = 0; i < 7; i++)
		{
			char letter = myFirstName[i];
			int number = letter;
			myFirstNumbers[i] = number;
			cout << myFirstName[i];
		}
	}
	cout << endl;
	//Arrays Exercise
	{
		//1. Create array of size 5 with the following values: 12, 21, 3, 7, 13
		//2. Iterate over the array
		//3. compare every value to other values to see if its greater

		int temp;
		int numbers[] = { 12, 21, 3, 7, 13 };
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (numbers[i] < numbers[j])
				{
					temp = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = temp;
				}
			}
		}
	}
	cout << endl;
	//Even Numbers
	{
		int numbers[10] = { };
		for (int i = 0; i < 20; i+=2)
		{
			
		}

	}
	cout << endl;
	//2D Array
	{
		int map[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		cout << map[0][0];
		cout << map[0][1];
		cout << map[0][2];
		cout << map[1][0];
		cout << map[1][1];
		cout << map[1][2];
		cout << map[2][0];
		cout << map[2][1];
		cout << map[2][2];

		int map[3][3] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } };
		for (int )
	}
	cout << endl;
	system("pause");
	return 0;
}