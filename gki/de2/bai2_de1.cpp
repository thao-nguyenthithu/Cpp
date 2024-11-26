#include <iostream> 
#include <string>
#include <vector>
using namespace std; 

class Book {
    private: 
        string book_id; 
        string name; 
        double price; 
        int qtyInStock = 0;
    public: 
        Book(){
          book_id = "";
          name = ""; 
          price = 0.0; 
          qtyInStock = 0;  
        }

        Book(const string& id, const string& n, double p, int q ){
            book_id = id; 
            name = n; 
            price = p; 
            qtyInStock = q; 
        }

        void show() const{
            cout << "ID: " << book_id << " | Name: " << name << " | Price: " << price << " | Stock: " << qtyInStock << endl;
        }

        friend void filter(const vector<Book>& b);

        friend void search(const vector<Book>& b, const string& id);
};

void filter(const vector<Book>& book){
    cout << "Sach co so luong <= 5: \n"; 
    for(const Book& b: book){
        if(b.qtyInStock <= 5){
            b.show();
        }
    }
}

void search(const vector<Book>& book, const string& id){
    bool check = false;
    for(const Book& b : book){
        if(b.book_id == id){
            cout << "Tim thay sach: \n";
            b.show();
            check = true;
            break;
        }
    }
    if(!check){
        cout << "Khong tim thay sach voi Id: " << id;
    }
}

int main(){
    vector<Book> books; 

    //Nhập sách
    books.push_back(Book("101", "C++ Primer", 45.5, 10));
    books.push_back(Book("102", "Effective C++", 50.0, 3));
    books.push_back(Book("103", "Clean Code", 70.0, 5));
    books.push_back(Book("104", "Design Patterns", 90.0, 15));

    // Hiển thị tất cả sách
    cout << "Danh sach cac cuon sach:\n";
    for (const Book& book : books) {
        book.show();
    }

    // Lọc sách có số lượng <= 5 và in kết quả
    filter(books);

    // Tìm kiếm sách theo mã ID
    string search_id;
    cout << "\nNhap ID sach can tim: ";
    cin >> search_id;
    search(books, search_id);

    return 0;
}