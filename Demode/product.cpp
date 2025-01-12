#include "product.h"

Product::Product(int id, string n, double p, int s){
    this->productID = id; 
    this->name = n; 
    this->price = p; 
    this->stock = s;
}

void Product::display() const{
    cout << "ID: " << productID << ", Name: " << name
    << ", Price: " << price << ", Stock: " << stock; 
}