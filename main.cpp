#include <iostream>
using namespace std;
//Cash register
int main()
{
	/*string garlands = "garlands",
		hanging = "hanging toys",
		candles = "candles",
		snow = "artificial snow",
		goods_user;*/
	int num_goods, num_switch;
	do {
		cout << "Enter code of goods:\n0-stop shoping"
			<< "\n1 - garlands - 100$, "
			<< "\n2- hanging toys -50$, \n3- candles -20$"
			<< "\n4- artificial snow -100$: " << endl;
		cin >> num_switch;
		if (num_switch < 0 || num_switch>4) {
			cout << "Incorrect data" << endl;
		}
	} while (num_switch < 0 || num_switch>4);

	do {
		cout << "Enter number of goods: ";
		cin >> num_goods;
	} while (num_goods < 0);

	cout << "Hello world" << endl;
	system("pause");
	return 0;
}