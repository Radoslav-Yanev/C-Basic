#include <iostream>

using namespace std;

int main() {

	double yardArea;
	cin >> yardArea;

	double price = yardArea * 7.61;
	double discount = price * 0.18;
	double totalPrice = price - discount;

	cout << "The final price is: " << totalPrice << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;

	return 0;

}
