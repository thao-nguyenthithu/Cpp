#ifndef ELECTRONIC_H
#define ELECTRONIC_H

#include "product.h"

class Electronic : public Product
{
private:
    int warranty;
public:
    Electronic(int id, string name, double price, int stock, int warranty); 
    void display() const override;
};

#endif