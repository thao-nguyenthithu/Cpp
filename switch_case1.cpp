#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int sex; 
    double height; 
    cin >> sex >> height; 
    switch (sex)
    {
        case 0:
            if(height < 1.70){
                cout << "Short";
            }
            else if(height >= 1.7 && height < 1.85){
                cout << "Normal";
            }else{
                cout << "Tall";
            }
            break;
        case 1: 
            if(height < 1.6 ){
                cout << "Short";
            }
            else if(height >= 1.6 && height < 1.75){
                cout << "Normal";
            }else{
                cout << "Tall";
            }
            break;
        default:
            cout << "Wrong Input";
            break;
    }
}
