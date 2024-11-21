#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n, m;
    
   
    cin >> n;
    int a[200005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    
    cin >> m;
    int b[200005];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
   
    sort(a, a + n);
    sort(b, b + m);
    
    
    int c[400005], k = 0;
    int i = 0, j = 0;
    
   
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
   
    while (i < n) {
        c[k++] = a[i++];
    }
    
    
    while (j < m) {
        c[k++] = b[j++];
    }
    
    // In kết quả
    for (int i = 0; i < k; i++) {
        cout << c[i] << " ";
    }
    
    return 0;
}