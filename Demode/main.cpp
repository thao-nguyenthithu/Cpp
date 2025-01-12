#include "inventory.h"
#include "electronic.h"
#include "groceryItem.h"

int main() {
    Inventory inven;

    // Thêm sản phẩm vào Inventory bằng cấp phát động
    Product* smartphone = new Electronic(1, "Smartphone", 500.0, 10, 24);
    Product* milk = new GroceryItem(2, "Milk", 2.5, 50, "10/01/2025");
    //Sử dụng Product* (con trỏ tới lớp cơ sở Product) là để áp dụng tính đa hình (polymorphism) trong lập trình hướng đối tượng.

    inven.addProduct(smartphone);
    inven.addProduct(milk);

    // Áp dụng tính đa hình để gọi hàm display() trên từng đối tượng
    std::cout << "Inventory before selling:" << std::endl;
    inven.displayInventory();

    // Bán sản phẩm
    inven.sellProduct(1, 2);

    // Hiển thị lại sau khi bán
    std::cout << "\nInventory after selling:" << std::endl;
    inven.displayInventory();

    // Giải phóng bộ nhớ động (không cần nếu Inventory đã xử lý)
    delete smartphone;
    delete milk;

    return 0;
}
