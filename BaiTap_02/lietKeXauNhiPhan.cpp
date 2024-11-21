#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long soLuongBit;
    cin >> soLuongBit;
    char *nhiPhan = new char[soLuongBit + 1];
    nhiPhan[soLuongBit] = '\0';
    
    for (int i = 0; i < pow(2, soLuongBit); i++) {
        int giaTri = i;
        char *viTri = nhiPhan + soLuongBit - 1;
        
        for (int j = 0; j < soLuongBit; j++) {
            *viTri = (giaTri % 2) + '0';
            giaTri /= 2;
            viTri--;
        }
        
        cout << nhiPhan << endl;
    }
    
    delete[] nhiPhan;
    return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// void printBinary(int n, int N) {
//     string binary = "";
//     while (n > 0) {
//         binary = char(n % 2 + '0') + binary;
//         n /= 2;
//     }
//     while (binary.length() < N) {
//         binary = "0" + binary;
//     }
//     cout << binary << endl;
// }

// int main() {
//     int N;
//     cin >> N;
//     int total = pow(2, N);
//     for (int i = 0; i < total; i++) {
//         printBinary(i, N);
//     }
//     return 0;
// }
