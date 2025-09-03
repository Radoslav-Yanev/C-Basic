#include <iostream>
#include <string>

using namespace std;

int main() {

	string architectName;
	cin >> architectName;

	int projectsCount;
	cin >> projectsCount;
	
	int hoursNeeded = projectsCount * 3;

	cout << "The architect " << architectName << " will need " << hoursNeeded << " hours to complete " << projectsCount << " project/s.";

	return 0;


}
