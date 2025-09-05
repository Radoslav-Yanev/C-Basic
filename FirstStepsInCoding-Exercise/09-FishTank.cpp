#include <iostream>

using namespace std;

int main()
{
	int length, width, height;
	cin >> length >> width >> height;

	double percent;
	cin >> percent;

	double volumeInSm = length * width * height;
	double volumeInLiters = volumeInSm / 1000;

	percent = percent / 100;

	double totalLiters = volumeInLiters * (1 - percent);

	cout << totalLiters << endl;

	return 0;
}

