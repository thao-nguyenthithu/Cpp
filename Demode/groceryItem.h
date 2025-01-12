#ifndef GROCERYITEM_H
#define GROCERYITEM_H

#include "product.h"

class GroceryItem : public Product
{
private:
    string expiryDate;
public:
    GroceryItem(int id, string name, double price, int stock, string expiryDate);
    void display() const override; // Ghi đè phương thức display()
};

#endif