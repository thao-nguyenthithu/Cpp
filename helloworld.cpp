// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     double num = 123.456789;

//     cout << fixed; // Chuyển sang chế độ fixed
//     cout << "setprecision(2): " << setprecision(2) << num << endl; 
//     // Kết quả: 123.46 (2 chữ số sau dấu thập phân)

//     cout << "setprecision(4): " << setprecision(10) << num << endl; 
//     // Kết quả: 123.4568 (4 chữ số sau dấu thập phân)

//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> vec{1, 2, 3, 4, 5, 6};

//     // Khai báo iterator cho vector
//     vector<int>::iterator iter;

//     // Hiển thị các phần tử của vector bằng begin() và end()
//     cout << "The vector elements are: " << endl;
//     cout << "Using begin() and end(): " << endl;
//     for (iter = vec.begin(); iter != vec.end(); iter++) {
//         cout << *iter << " ";
//     }
//     cout << endl;

//     // Hiển thị các phần tử của vector bằng toán tử []
//     cout << "Using [] operator: " << endl;
//     for (int i = 0; i < vec.size(); i++) {
//         cout << vec[i] << " ";
//     }
//     cout << endl;

//     // Hiển thị các phần tử của vector bằng hàm at()
//     cout << "Using at() function: " << endl;
//     for (int i = 0; i < vec.size(); i++) {
//         cout << vec.at(i) << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5, 6};

//     cout << "Trước khi xóa: ";
//     for (int v : vec) cout << v << " ";
//     cout << endl;

//     // Xóa phần tử tại vị trí thứ 2 (phần tử '3')
//     vec.erase(vec.begin() + 2);

//     cout << "Sau khi xóa phần tử thứ 2: ";
//     for (int v : vec) cout << v << " ";
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// #include <cstring>
// using namespace std;

// void toUpper(string &s) {
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] >= 'a' && s[i] <= 'z'){
//             s[i] -= 32;
//         }
//     }
// }

// int main() {
// 	string s;
// 	getline(cin, s);
// 	toUpper(s);
// 	cout << s;
// 	return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    vector<Student> students = {
        Student("Alice", 20),
        Student("Bob", 22)
    };

    for (Student& student : students) {
        student.display();
    }

    return 0;
} 
