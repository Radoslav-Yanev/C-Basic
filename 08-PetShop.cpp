#include <iostream>

using namespace std;

int main() {

	int dogFoodCount;
	cin >> dogFoodCount;

	int catFoodCount;
	cin >> catFoodCount;

	double dogFoodTotalPrice = dogFoodCount * 2.50;
	double catFoodTotalPrice = catFoodCount * 4.00;
	double totalSum = dogFoodTotalPrice + catFoodTotalPrice;

	cout << totalSum << " lv." << endl;

	return 0;

}
