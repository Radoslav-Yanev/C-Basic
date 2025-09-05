#include <iostream>

using namespace std;

int main() {
	
	int pageCount, pagesPerHour, daysCount;
	cin >> pageCount >> pagesPerHour >> daysCount;

	int totalHours = pageCount / pagesPerHour;
	int hoursPerDay = totalHours / daysCount;

	cout << hoursPerDay << endl;

	return 0;
}