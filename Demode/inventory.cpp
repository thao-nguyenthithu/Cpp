#include "inventory.h"

// Bộ nhớ cấp phát động cho các sản phẩm sẽ được giải phóng tự động
// thông qua destructor của Inventory khi đối tượng inventory bị hủy
// Inventory::~Inventory(){
//     for (auto product : products)
//     {
//         delete product;
//     }  
// }

void Inventory::addProduct(Product* p){
    products.push_back(p);
}

void Inventory::sellProduct(int id, int quantity){
    for (auto product : products) {
        if (product->getProductID() == id) {
            if (product->getStock() >= quantity) {
                // Giảm số lượng sản phẩm trong kho
                product->reduceStock(quantity);
                std::cout << "Sold " << quantity << " of " << product->getName() << "." << std::endl;
            } else {
                std::cout << "Khong du so luong san pham de banban: " << product->getName() << "." << std::endl;
            }
            return; 
        }
    }
    std::cout << "Product with ID " << id << " not found." << std::endl;
    
}

void Inventory::displayInventory() const {
    for (auto product : products)
    {
        product->display();
        cout << endl;
    }
    
}