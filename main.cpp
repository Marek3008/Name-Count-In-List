#include <iostream>

using namespace std;

int main() {

	string word[] = { "marek", "marek", "peter", "adam", "adam", "adam" };
	string input;
	int size = *(&word + 1) - word;
	int countName = 0;
	
	cout << "ake meno chces spocitat? ";
	cin >> input;

	for (int i = 0; i <= size; i++) {

		if (word[i] == input) {
			countName += 1;
		}
		if (i == size) {
			cout << input << " sa v liste nachadza " << countName << " krat." << endl;
		}

	}


	return 0;
}