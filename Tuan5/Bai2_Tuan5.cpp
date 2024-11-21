#include <iostream>

template <typename T>
T ham_mau(T a, T b, T c);

template <typename T>
void ham_mau(T arr[], T& min, T& max);

int main() {
    int i = 3, j = 1, k = 2;
    double m, n;
    double a[5] = {5.1, 1.1, 2.1, 3.1, 4.1};
    
    std::cout << "Sum of the largest pair: " << ham_mau(i, j, k) << '\n';
    ham_mau(a, m, n);
    std::cout << "Min: " << m << ", Max: " << n << '\n';
    
    return 0;
}

template <typename T>
T ham_mau(T a, T b, T c) {
    T max = a + b;
    if (max < a + c)
        max = a + c;
    if (max < b + c)
        max = b + c;
    return max;
}

template <typename T>
void ham_mau(T arr[], T& min, T& max) {
    int i;
    min = max = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}
