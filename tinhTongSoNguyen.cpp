#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int so_nguyen, tram, chuc, dovi; 
    cin >> so_nguyen;
    if(so_nguyen > 99 && so_nguyen < 1000){
        tram = so_nguyen/100;
        chuc = (so_nguyen - tram * 100)/ 10;
        dovi = so_nguyen - tram * 100 - chuc * 10;
        cout << tram + chuc + dovi;
    }else{
        cout << "Yeu cau nhap so nguyen co 3 chu so";
    }
}
