#include <iostream>

using namespace std;

int main() {

	int chickenMenuCount, fishMenuCount, vegetarianMenuCount;
	cin >> chickenMenuCount >> fishMenuCount >> vegetarianMenuCount;

	double chickenMenuPrice = chickenMenuCount * 10.35;
	double fishMenuPrice = fishMenuCount * 12.40;
	double vegetaruanMenuPrice = vegetarianMenuCount * 8.15;

	double totalMenuPrice = chickenMenuPrice + fishMenuPrice + vegetaruanMenuPrice;
	double dessertPrice = totalMenuPrice * 0.20;

	double totalPrice = totalMenuPrice + dessertPrice + 2.50;

	cout << totalPrice << endl;

	return 0;

}
