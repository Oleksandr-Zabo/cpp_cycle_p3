#include <iostream>
using namespace std;

int main()
{
	int start_range, end_range, num, temp;
	cout << "Enter start of range: ";
	cin >> start_range;
	cout << "Enter start of range: ";
	cin >> end_range;

	if (start_range > end_range)
	{
		temp = start_range;
		start_range = end_range;
		end_range = temp;
	}

	do 
	{
		cout << "Enter number (in your range): ";
		cin >> num;
		if (num < start_range || num > end_range) {
			cout << "Incorect data" << endl;
		}
	} while (num < start_range || num > end_range);

	cout << endl;
	system("pause");
	return 0;
}