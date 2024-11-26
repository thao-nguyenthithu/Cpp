#include<iostream>
#include<string>
#include<vector>
using namespace std; 

class Student{
private:
    string student_id;
    string name;
    double grade;
public:
    Student(){
        student_id = "";
        name = "";
        grade = 0;
    }
    Student(string id, string n, double g){
        student_id = id;
        name = n;
        grade = g;
    }
    void show() const{
        cout << "Id: " << student_id << ", Name: " << name << ", Grade: " << grade << endl;
    }

    friend void sort(vector<Student>& st);
    friend void search(const vector<Student>& st, const string& id);
};

void sort(vector<Student>& st) {
    for (int i = 0; i < st.size() - 1; ++i) {
        for (int j = 0; j < st.size() - i - 1; ++j) {
            if (st[j].grade < st[j + 1].grade) { 
                Student temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
}


void search(const vector<Student>& st, const string& id){
    bool check = false;
    for(const Student s: st){
        if(s.student_id == id){
            s.show();
            check = true;
            break;
        }
    }
    if(check == false){
        cout << "Khong tim thay sinh vien";
    }
}


int main(){
    vector<Student> student = {Student("12", "Nguyen A", 8.0),
                                Student("13", "Nguyen B", 9),
                                Student("14", "Nguyen B", 9.8),
                                Student("15", "Nguyen B", 9),
                                Student("16", "Nguyen B", 9)};

    for(const Student& s : student) {
        s.show();
    }
    sort(student);
    cout << "--------Danh sach sinh vien sau khi sap xep--------\n";
    for(const Student& s : student) {
        s.show();
    }
    string s;
    cin >> s;
    search(student, s);
}
