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
#include <vector>
#include <algorithm> // Để sử dụng hàm sort()

using namespace std; 

const int MAX_CHAR = 26; // Số lượng ký tự trong bảng chữ cái tiếng Anh

// Hàm tìm và in các ký tự không chung giữa hai chuỗi
void findAndPrintUncommonChars(string str1, string str2) {
    int present[MAX_CHAR] = {0}; // Mảng đánh dấu trạng thái xuất hiện của các ký tự
    vector<char> uncommon; // Vector lưu các ký tự không chung

    // Đánh dấu các ký tự trong str1 là 1
    for (char c : str1) {
        present[c - 'a'] = 1;
    }

    // Xử lý các ký tự trong str2
    for (char c : str2) {
        if (present[c - 'a'] == 1) {
            // Nếu ký tự đã xuất hiện trong str1, đánh dấu là -1 (ký tự chung)
            present[c - 'a'] = -1;
        } else if (present[c - 'a'] == 0) {
            // Nếu ký tự chưa xuất hiện, đánh dấu là 2
            present[c - 'a'] = 2;
        }
    }

    // Thêm các ký tự không chung vào vector `uncommon`
    for (int i = 0; i < MAX_CHAR; i++) {
        if (present[i] == 1 || present[i] == 2) {
            uncommon.push_back((char)(i + 'a'));
        }
    }

    // Sắp xếp các ký tự theo thứ tự bảng chữ cái
    sort(uncommon.begin(), uncommon.end());

    // In kết quả
    for (char c : uncommon) {
        cout << c;
    }
    cout << endl;
}

int main(){
    string s1, s2; 
    cout << "A = ";
    getline(cin, s1);

    cout << "B = "; 
    getline(cin, s2);
  
    findAndPrintUncommonChars(s1, s2);
}