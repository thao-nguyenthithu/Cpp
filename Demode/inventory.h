#ifndef INVENTORY_H
#define INVENTORY_H

#include "product.h"
#include <vector>

class Inventory
{
private:
    vector<Product*> products; 
public:
    // ~Inventory();
    void addProduct(Product* p);
    void sellProduct(int id, int quantity); 
    void displayInventory() const; 
};

#endif