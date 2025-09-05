#include <iostream>

using namespace std;

int main() {
	
	int yearlyTax;
	cin >> yearlyTax;

	double snikersPrice = yearlyTax * 0.60;
	double basketballTeamPrice = snikersPrice * 0.80;
	double basketballBallPrice = basketballTeamPrice / 4;
	double basketballAccessoriesPrice = basketballBallPrice / 5;

	double totalPrice = yearlyTax + snikersPrice + basketballTeamPrice + basketballBallPrice + basketballAccessoriesPrice;

	cout << totalPrice << endl;

	return 0;

}
