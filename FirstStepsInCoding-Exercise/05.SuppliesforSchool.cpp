#include <iostream>

using namespace std;

int main()
{
    
	int penPacageCount, markersPacageCount, detergentLiters, discountPercentage;
	cin >> penPacageCount >> markersPacageCount >> detergentLiters >> discountPercentage;

	double penPrice = penPacageCount * 5.80;
	double markersPrice = markersPacageCount * 7.20;
	double detergentPrice = detergentLiters * 1.20;

	double totalPrice = penPrice + markersPrice + detergentPrice;
	
	totalPrice -= totalPrice * discountPercentage / 100;

	cout << totalPrice << endl;

	return 0;
	
}

