#include<iostream>
#include<string>
#include<vector>

using namespace std; 

class Employee
{
private:
    string name; 
    float luong;
public:
    void setName(const string& n){
        name = n;   
    }
    void setLuong(float l){
        luong = l;
    }

    string getName() const{
        return name;
    }
    float getLuong() const{
        return luong;
    }
    void show() const;
};

void Employee::show() const{
    cout << "\nTên: " << name
        << ", Lương: " << luong;
}

int main() {
    vector<Employee> employee;
    string ten; 
    float lg;
    Employee e;

    cout << "Nhập thông tin nhân viên (Nhập '-1' cho mức lương để kết thúc):\n";
    while (1)
    {
        cout << "Nhập tên: "; 
        getline(cin, ten);
        cout << "Nhập lương: ";
        cin >> lg;

        if(lg == -1) break;

        e.setName(ten);
        e.setLuong(lg);

        // Thêm các đối tượng vào vector
        employee.push_back(e);
        cin.get();
    }
    
    float input_luong_ss, luong_max = employee[0].getLuong(); 
    int i, vitri;
    cout << "Hiển thị danh sách nhân viên có mức lương lớn hơn: "; 
    cin >> input_luong_ss;
    for(i = 0; i < employee.size(); i++){
        lg = employee[i].getLuong();
        if(lg > input_luong_ss){
            employee[i].show();
        }
        if(lg > luong_max){
            vitri = i;
            luong_max = lg;
        }
    }

    cout << "\nNhân viên có mức lương cao nhất là: "; 
    employee[vitri].show();
    return 0;
}