#include <iostream>

using namespace std;

int main()
{
    
	int neededNylon, neededPaintLiters, paintThinnerLiters, workingHours;
	cin >> neededNylon >> neededPaintLiters >> paintThinnerLiters >> workingHours;

	double nylonSum = (neededNylon + 2) * 1.50;
	double paintSum = (neededPaintLiters + (neededPaintLiters * 0.10)) * 14.50;
	double paintThinnerSum = paintThinnerLiters * 5.00;

	double matirialsSum = nylonSum + paintSum + paintThinnerSum + 0.40;
	double workersPrice = matirialsSum * 0.30;

	double totalSum = matirialsSum + (workersPrice * workingHours);

	cout << totalSum << endl;

	return 0;

}

