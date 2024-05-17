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
			cout << "Enter number of pattern (0-stop): ";
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
					(i <= j) ? cout << "* " : cout << " " << " ";
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
					(i >= j) ? cout << "* " : cout << " " << " ";
				}
				cout << endl;
			}
		}break;

		case 3:
		{
			cout << endl;
			for (int i = 0, s = 0; i < size; i += 2, s++) {
				cout << "\t\t";
				for (int j = 0; j < s; j++) {
					cout << " " << " ";
				}
				
				for (int j = 0; j < (size-i); j++)
				{
					cout << "* ";
				}
				cout << endl;
			}

			//add \n to size
			for (int i = 0; i < size / 2; i++)
			{
				cout << endl;
			}
		}break;


		case 4:
		{
			cout << endl;
			//add \n to size
			for (int i = 0; i < size / 2; i++)
			{
				cout << endl;
			}

			for (int i = 1, s = 0; i <= size; i += 2, s++) {
				cout << "\t\t";
				for (int j = (size-i); j >0; j--) {
					cout << " ";
				}

				for (int j = 0; j < i; j++)
				{
					cout << "* ";
				}
				cout << endl;
			}

			
		}break;


		case 5:
		{
			cout << endl;
			/*case 3*/
			for (int i = 0, s = 0; i < size-1; i += 2, s++) {
				cout << "\t\t";
				for (int j = 0; j < s; j++) {
					cout << " " << " ";
				}

				for (int j = 0; j < (size - i); j++)
				{
					cout << "* ";
				}
				cout << endl;
			}
			/*case 4*/
			for (int i = 1, s = 0; i <= size; i += 2, s++) {
				cout << "\t\t";
				for (int j = (size-i); j >0; j--) {
					cout << " ";
				}

				for (int j = 0; j < i; j++)
				{
					cout << "* ";
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


