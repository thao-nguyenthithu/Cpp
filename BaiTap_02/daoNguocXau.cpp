#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
int main() {
	char x[100];
	cin.get(x, 100);
	
	int length = strlen(x);
	
	for(int i = 0; i < length / 2; i++) {
		char temp = x[i];
		x[i] = x[length - i - 1];
		x[length - i - 1] = temp;
	}
	cout << x;

    return 0;
}