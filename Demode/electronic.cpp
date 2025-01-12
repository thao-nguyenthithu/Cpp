#include "electronic.h"

Electronic::Electronic(int id, string name, double price, int stock, int warranty) : Product(id, name, price, stock){
    this->warranty = warranty;
}

void Electronic::display()const {
    Product::display(); 
    cout << ", Warranty: " << warranty << endl; 
}

/*
fixbug đối với Product::display là hàm thuần ảo (virtual void display() const = 0;):
    Cách 1: Trong tệp product.h, bạn thay đổi phần khai báo các thuộc tính từ privete thành protected
        để các lớp kế thừa như Electronic và GroceryItem có thể truy cập trực tiếp.
    Cách 2: Sử dụng phương thức getter Nếu bạn muốn giữ các thuộc tính ở phạm vi private để đảm bảo tính đóng gói, 
        bạn cần tạo các phương thức getter để truy cập chúng.
        int getProductID() const { return productID; }
*/