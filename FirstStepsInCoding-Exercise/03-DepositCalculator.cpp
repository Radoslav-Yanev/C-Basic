#include <iostream>

using namespace std;

int main() {

	double deposidSum;
	cin >> deposidSum;

	int desposidTerm;
	cin >> desposidTerm;

	double annualInterestRate;
	cin >> annualInterestRate;

	annualInterestRate = annualInterestRate / 100;

	double finalSum = deposidSum + desposidTerm * ((deposidSum * annualInterestRate) / 12);

	cout << finalSum << endl;

	return 0;

}