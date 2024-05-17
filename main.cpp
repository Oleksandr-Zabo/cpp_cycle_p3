#include <iostream>
using namespace std;
//Cash register
int main()
{
	int num_goods, num_switch, goods_1_num = 10,
		goods_2_num = 20, goods_3_num = 30,
		goods_4_num = 5;
	double	sum_goods = 0, sum_shop = 0;
	bool is_any_person = 1;

	while (is_any_person) {//goods for all people
		cout << "\There are more buyers(write 1- yes, write 0- no): ";
		cin >> is_any_person;
		if (is_any_person == 0)
		{
			break;
		}



		do {//goods for 1 customer


			do {
				cout << "\nEnter code of goods:\n0-stop shoping"
					<< "\n1 - garlands - 100$  discount-20%, "
					<< "\n2- hanging toys -50$ discount-10%, \n3- candles -20$"
					<< "\n4- artificial snow -100$: " << endl;
				cin >> num_switch;
				if (num_switch < 0 || num_switch>4) {
					cout << "Incorrect data\n" << endl;
				}
			} while (num_switch < 0 || num_switch>4);

			if (num_switch == 0)break;

			do {
				cout << "\nEnter number of goods: ";
				cin >> num_goods;
			} while (num_goods < 0);
			switch (num_switch)
			{
			case 1:
			{
				if (goods_1_num >= num_goods) {
					sum_goods += num_goods * (100 - 100 * 0.2);
					goods_1_num -= num_goods;
				}
				else {
					cout << "\nThis product is not available in this quantity";
				}
			}break;

			case 2:
			{

				if (goods_2_num >= num_goods) {
					sum_goods += num_goods * (50 - 50 * 0.1);
					goods_2_num -= num_goods;
				}
				else {
					cout << "\nThis product is not available in this quantity";
				}
				


			}break;

			case 3:
			{
				if (goods_3_num >= num_goods) {
					sum_goods += num_goods * 20;
					goods_3_num -= num_goods;
				}
				else {
					cout << "\nThis product is not available in this quantity";
				}
				

			}break;

			case 4:
			{
				if (goods_4_num >= num_goods) {
					sum_goods += num_goods * 100;
					goods_4_num -= num_goods;
				}
				else {
					cout << "\nThis product is not available in this quantity";
				}
				sum_goods += num_goods * 100;

			}break;
			}

		} while (num_switch != 0);

		cout << "To be paid: " << sum_goods << "$" << endl;
		sum_shop += sum_goods;
		sum_goods = 0;
	}
	cout << "Today we managed to earn: " << sum_shop << "$" << endl;
	system("pause");
	return 0;
}