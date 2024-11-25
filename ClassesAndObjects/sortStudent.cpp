/*
Hoàn thành phần public của lớp sau và viết một chương trình đọc và lưu dữ liệu của sinh viên trong một đối tượng vector 
chứa các phần tử thuộc kiểu Student. 
Nếu người dùng nhập -1 cho điểm số, việc nhập dữ liệu sẽ dừng lại. 
Sau đó, chương trình sẽ gọi một hàm sort() nhận vector làm tham số và sắp xếp các phần tử của nó theo thứ tự tăng dần.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Định nghĩa lớp Student
class Student {
private:
    string name; // Tên sinh viên
    float grade; // Điểm sinh viên

public:
    // Hàm tạo với tham số mặc định
    Student(const string& n = "", float g = 0) {
        name = n;
        grade = g;
    }

    // Hàm hiển thị thông tin sinh viên
    void show() const {
        cout << "Name: " << name << " | Grade: " << grade << endl;
    }

    // Hàm bạn (friend) để truy cập dữ liệu và sắp xếp vector
    friend void sort(vector<Student>& v);
};

// Hàm sắp xếp (dùng thuật toán Selection Sort)
void sort(vector<Student>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j].grade < v[minIndex].grade) {
                minIndex = j; // Tìm chỉ số có điểm thấp nhất
            }
        }
        // Hoán đổi hai phần tử
        if (minIndex != i) {
            swap(v[i], v[minIndex]);
        }
    }
}

int main() {
    vector<Student> students; // Danh sách sinh viên
    string name;
    float grade;

    // Nhập thông tin sinh viên
    cout << "Enter student data (name and grade). Enter grade -1 to stop.\n";
    while (true) {
        cout << "\nName: ";
        getline(cin, name);

        cout << "Grade: ";
        cin >> grade;
        cin.ignore(); // Loại bỏ ký tự xuống dòng còn lại trong bộ đệm

        if (grade == -1) { // Dừng nhập khi grade = -1
            break;
        }

        // Thêm sinh viên vào danh sách
        students.push_back(Student(name, grade));
    }

    // Sắp xếp danh sách sinh viên
    sort(students);

    // Hiển thị danh sách sinh viên đã sắp xếp
    cout << "\nSorted list of students:\n";
    for (const auto& student : students) {
        student.show();
    }

    return 0;
}
