/*
Viết hàm nhận một chuỗi S gồm nhiều ký tự bất kỳ, 
xóa tất cả các ký tự không phải chữ, 
biến tất cả chữ hoa thành chữ thường và in ra chuỗi kết quả.
*/

#include <iostream> 
#include <string> 
#include <cctype>

using namespace std; 

void findLower(string s){
    string kqua = "";

    for(char c: s){
        if(isalpha(c)){
            kqua += tolower(c); 
        } else if (isspace(c)){
            kqua += c;
        }
    }
    cout << kqua;
}

int main(){
    string s; 
    getline(cin, s);
    findLower(s);
}