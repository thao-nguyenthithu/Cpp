#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream> 
#include <string> 

using namespace std; 
class Product{
    private: 
        int productID; 
        string name;
        double price; 
        int stock; 
    public: 
        Product(int id, string name, double price, int stock);
        virtual ~Product(){}
        virtual void display() const; // Ham ao Không còn thuần ảo
        //virtual void display() const = 0; // Hàm ảo thuần túy

        // thêm getter nếu đề bài là hàm bảo thuần túy
        // int getProductID() const { return productID; }
        int getProductID() const { return productID; }
        int getStock() const { return stock; }
        string getName() const { return name; }
        void reduceStock(int quantity) { stock -= quantity; }
};

#endif 

