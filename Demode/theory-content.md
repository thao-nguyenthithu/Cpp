**File .h (header file):**
    - Là một tệp tiêu đề trong c++
    - nó chứa khai báo của các lớp, hàm, hằng số, và các cấu trúc dl mà bạn muốn chia sẻ giữa nhiều file .cpp
    - Chỉ chữa khai báo, không chứa phần triển khai. Phần triển khai được viết trong file .cpp

1. Tác dụng .h:

   + Tái sử dụng mã nguồn bằng cách **#include**
   + Tách biệt khai báo và triển khai
   + Hỗ trợ tổ chức dự án lớn: dễ quản lý (ex:Lớp Product được định nghĩa trong product.h, còn phần triển khai cụ thể nằm trong product.cpp.)
   + Giảm thời gian biên dịch
2. Cấu trúc file .h:

   + Đảm bảo rằng file chỉ được đưa vào (include) một lần trong quá trình biên dịch.
   + Sử dụng cú pháp **#ifndef, #define, #endif**.
   + Khai báo các lớp, hàm và hằng số.

     ex File product.h:

     ```
     #ifndef PRODUCT_H    // Kiểm tra nếu chưa định nghĩa PRODUCT_H
     #define PRODUCT_H    // Định nghĩa PRODUCT_H

     #include <string>    // Dùng thư viện string trong C++

     class Product {       // Khai báo lớp Product
     private:
         int productID;      // ID sản phẩm
         std::string name;   // Tên sản phẩm
         double price;       // Giá sản phẩm
         int stock;          // Số lượng trong kho

     public:
         Product(int id, const std::string& name, double price, int stock);
         virtual ~Product();
         virtual void display() const = 0; // Hàm ảo thuần túy
         int getID() const;                // Hàm trả về ID sản phẩm
         int getStock() const;             // Hàm trả về số lượng trong kho
         void reduceStock(int quantity);   // Hàm giảm số lượng trong kho
     };

     #endif // PRODUCT_H
     ```
3. Cách sử dụng file .h:  #include "product.h"  // Đưa vào file header Product
