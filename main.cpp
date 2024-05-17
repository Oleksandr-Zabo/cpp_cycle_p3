#include <iostream>
using namespace std;
//figures
int main()
{
	int size, choice;
	while (1) {

		do {
			cout << "Enter size of square: ";
			cin >> size;
		} while (size < 0);

		do {
			cout << "Enter number of pattern: ";
			cin >> choice;
		} while (choice < 0 || choice > 5);

		if (choice == 0)
		{
			break;
		}

		switch (choice)
		{
		
		

		case 1:
		{
			cout << endl;
			for (int i = 0; i < size; i++) {
				cout << "\t\t";
				for (int j = 0; j < size; j++)
				{
					(i <= j) ? cout << "* " : cout << "  ";
				}
				cout << endl;
			}
		}break;

		case 2:
		{
			cout << endl;
			for (int i = 0; i < size; i++) {
				cout << "\t\t";
				for (int j = 0; j < size; j++)
				{
					(i >= j) ? cout << "* " : cout << "  ";
				}
				cout << endl;
			}
		}break;

		case 3:
		{
			cout << endl;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < i; ++j) {
					cout << " ";
				}
				
				for (int j = 0; j < 2 * (size - i) - 1; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}break;

		}


	}
	cout << "The end..." << endl;
	system("pause");
	return 0;
}


