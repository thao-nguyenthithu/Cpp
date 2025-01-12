#include "groceryItem.h"

GroceryItem::GroceryItem(int id, std::string name, double price, int stock, std::string expiryDate)
    : Product(id, name, price, stock), expiryDate(expiryDate) {}

void GroceryItem::display() const {
    Product::display();
    cout << ", Expiry Date: " << expiryDate << endl; 
}
