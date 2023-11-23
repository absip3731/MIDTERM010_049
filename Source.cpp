#include<iostream>
using namespace std;
int main()
{
	int quantity;
	float tax, total_price, discount, price;
	char choice;

	do {

		cout << "Enter quantity of the product= ";
		cin >> quantity;
		cout << "Enter the price of the product= ";
		cin >> price;
		cout << "Enter the tax rate (in %)= ";
		cin >> tax;

		price *= quantity;
		tax /= 100;
		tax *= price;
		total_price = price + tax;

		if (quantity >= 10)
		{
			discount = total_price * 0.1;
			cout << "Total Cost= " << total_price - discount << endl;
		}
		else
			cout << "Total cost= " << total_price << endl;

		cout << "Do You Want To Calculate More?(Y/N)" << endl;
		cin >> choice;

	} while (choice != 'N' && choice != 'n');

	return 0;
}