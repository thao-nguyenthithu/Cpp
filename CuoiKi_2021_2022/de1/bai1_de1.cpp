/*
Cho hai chuỗi A và B. Viết hàm find tìm và in ra các ký tự không chung trong hai chuỗi.

void findAndPrintUncommonChars(string str1, string str2){
}

Input: 
A = egeksfroeegks
B = eegksquiz 
Output: fioqruz 
Giải thích: Các ký tự 'f', 'i', 'o', 'q', 'r', 'u', 'z' có mặt ở A hoặc B, nhưng không có ở cả hai
*/

#include <iostream>
#include <string>
using namespace std; 

void findAndPrintUncommonChars(string str1, string str2){
    
}

int main(){
    string s1, s2; 
    cout << "A = ";
    getline(cin, s1);

    cout << "B = "; 
    getline(cin, s2);
    
    cout << s1 << "\n" << s2;
}