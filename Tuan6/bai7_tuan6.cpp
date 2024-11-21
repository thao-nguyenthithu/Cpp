#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Circle
{
private:
    double radius = 1.0; 
    string color = "red";
public:
    Circle();
    Circle(double r){
        radius = r;
    }
    Circle(double r, string c){
        radius = r; 
        color = c;
    }
    double getRadius(){
        return radius;
    }
    string getColor(){
        return color;
    }
    double getArea() const{
        return 3.14 * radius * radius;
    }
};

int main(){
    const int NUM_ITEM = 3; 
    Circle c[NUM_ITEM] = {
        Circle(2.0,"blue"), 
        Circle(2.0, "red"), 
        Circle(1.0, "red")
    }; 

    for(int i = 0; i < NUM_ITEM; i++){
        cout << setw(10) << c[i].getRadius();
        cout << setw(10) << c[i].getColor();
        cout << setw(10) << c[i].getArea() << endl;
    }
    return 0;
}
