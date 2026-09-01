#include <iostream>
using namespace std;

int main() {
	const int max = 3;
	string value[max] = {"Jep", "Kontol", "Petir"};
	for (int i = 0; i < max; i++) {
		cout << value[i] << " ";
	}
	return 0;
}
