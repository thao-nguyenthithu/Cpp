#include<iostream>

using namespace std; 

class Rect
{
private:
    float l, h;
public:
    Rect(float a, float b) { l = a; h = b;}
    float getArea() const{
        return l*h;
    }
};

class Circle
{
private:
    float r;
public:
    Circle(float bk) { r = bk;}
    float getArea() const{
        return r*r*3.14;
    }
};

template <typename T> 
float calculateArea(T t){
    return t.getArea();
}

int main(){
    Rect r(3.0,4);
    Circle c(10);
    cout << "S-Rect: " << calculateArea(r) << endl;
    cout << "S-Circle: " << calculateArea(c) << endl;
    
}