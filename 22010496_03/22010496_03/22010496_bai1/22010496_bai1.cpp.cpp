#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void nhapDuLieu(vector<T>& vt) {
	T value;
	while (true) {
		cin >> value;
		if (value == -1) break;
		vt.push_back(value);
	}
}

template <typename T>
void displayVector(vector<T>& vt) {
	if (vt.empty()) {
		cout << "Vector empyty" << endl;
	}
	else {
		for (int i = 0; i < vt.size(); i++) {
			cout << vt[i] << " ";
		}
		cout << "\n";
	}
}

template <typename T>
int checkX(vector<T>& vt, T x) {
	for (int i = 0; i < vt.size(); i++) {
		if (vt[i] == x) return 1;
	}
	return 0;
}

int main() {
	vector<int> vtInt;
	vector<double> vtDouble;

	nhapDuLieu(vtInt);
	displayVector(vtInt);

	nhapDuLieu(vtDouble);
	displayVector(vtDouble);

	if(checkX(vtInt, 10) == 1){ cout << "So Int thuoc mang\n";}

	if(checkX(vtDouble, 8.0) == 1){
        cout << "So double thuoc mang\n";
	}else{
	    cout << "So double khong thuoc mang\n";
	}
}
