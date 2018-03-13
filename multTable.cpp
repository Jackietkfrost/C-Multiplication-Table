********************************
*Author:	Jackie Marcano *
********************************
#include <iostream>
#include <iomanip>


using namespace std;

//Draws the table
void table(int tableSize)
{
	const int row = 13;
	const int col = 13;
	int nums[row][col];

	for (int row = 0; row <= tableSize; row++)
	{
		for (int col = 0; col <= tableSize; col++)
		{
			nums[row][col] = row*col;
			cout << setw(4) << nums[row][col];
		}
	cout << endl << endl;
}

}

//Asks user for size of array, then validates.
void sizeDetermination()
{
	int tableSize = 0;
	cout << "Enter size of multiplication table (Max 12): ";
	cin >> tableSize;
	while (tableSize > 12)
	{
		cout << "Invalid number. Please try again: ";
		cin >> tableSize;
	}
		table(tableSize);
}

int main()
{
	sizeDetermination();
	return 0;
}
