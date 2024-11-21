#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int chieucao[100000], sapxep[100000];
    for (int i = 0; i < n; i++) {
        cin >> *(chieucao + i); 
        *(sapxep + i) = *(chieucao + i); 
    }

    sort(sapxep, sapxep + n);

    for (int i = 0; i < n; i++) {
        int *pos = lower_bound(sapxep, sapxep + n, *(chieucao + i));
        int count = pos - sapxep;
        cout << count << " ";
    }

    return 0;
}