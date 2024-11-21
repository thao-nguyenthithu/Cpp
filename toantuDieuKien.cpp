#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a, b, c, x; 
    cin >> a >> b >> c; 
    x = (a < b)? ( a < c ? a : c) : ( b < c ? b : c);
    cout << x;
}
