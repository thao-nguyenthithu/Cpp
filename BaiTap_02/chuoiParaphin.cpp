// #include <iostream>
// #include <string>
// using namespace std;

// bool isPalindrome(string str) {
//     int n = str.length();
//     for (int i = 0; i < n / 2; i++) {
//         if (str[i] != str[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     string s;
//     cin >> s;

//     if (isPalindrome(s)) {
//         cout << "Chuỗi là palindrome" << endl;
//     } else {
//         cout <<"Chuỗi không phải là palindrome" << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <cstring>
using namespace std;

bool isAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;  
    }
    return c;
}
void check(char *str) {
    int n = strlen(str);
    int left = 0;
    int right = n - 1;
    bool isPalindrome = true;
    
    while (left < right) {
        
        while (left < right && !isAlpha(str[left])) {
            left++;
        }
      
        while (left < right && !isAlpha(str[right])) {
            right--;
        }
        
     
        if (toLower(str[left]) != toLower(str[right])) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    if (isPalindrome) {
        cout << "Chuỗi là palindrome";
    } else {
        cout << "Chuỗi không phải là palindrome";
    }
}
int main() {
    char str[101];
    cin.getline(str, 101);  
    check(str);
    cout << endl;
    return 0;
}