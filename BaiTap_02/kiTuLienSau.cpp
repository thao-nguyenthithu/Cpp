#include <iostream>

using namespace std;
int main() {
	char kitu;
	cin >> kitu;
	if (kitu == 'z') {
		cout << 'a';
	}
	else {
		cout << (char)(kitu + 1);
	}
}