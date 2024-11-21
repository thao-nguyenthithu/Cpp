#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double epsilon; 
    cin >> epsilon; 
    if(0 <epsilon && epsilon < 1){
        double e = 1.0; 
        double x = 1.0; 
        int n = 1; 
        while (x >= epsilon) {
            x /= n; 
            e += x; 
            n++; 
        }
        // cout << fixed << setprecision(5) << e;
        printf("%.5f", e);
    }
    else{
        cout << "Yeu cau nhap 0< epsilon <1";
    }
}
