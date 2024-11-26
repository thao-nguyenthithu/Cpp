#include <iostream>
#include <vector>
#include <string>

using namespace std; 

//Khuôn mẫu hàm 
template <typename T> void nhapDuLieu(vector<T>& vec);
template <typename T1, typename T2> void nhapDuLieu(T1& a, T2& b);
template <typename T> T tinhTong(const vector<T>& vec);
template <typename T1, typename T2> auto tinhTong(T1& a, T2& b);

//a.Khuôn mẫu hàm nhập dữ liệu vào vector 
template <typename T> 
void nhapDuLieu(vector<T>& vec){
    cout << "Nhap cac phan tu (Nhap -1 de ket thuc): "; 
    T value; 
    while(true){
        cin >> value; 
        if(value == -1) break;
        vec.push_back(value);
    }
}

//b. Nạp chồng hàm nhapDuLieu để nhập vào 2 tham số có dl khác nhau
template <typename T1, typename T2>
void nhapDuLieu(T1& a, T2& b){ 
    cout << "Nhap 2 so bat ki: "; 
    cin >> a >> b; 
}

//c. Khuôn mẫu hàm tính tổng các phần tử trong vector
template <typename T>
T tinhTong(const vector<T>& vec){
    T sum = 0; 
    if(vec.empty()){
        cout << "Vector rong\n";
    }else{
        for(const T& value : vec){
            sum += value;
        }
    }
    return sum;
}

//d. Nạp chồng tinhTong() để tính tổng cho 2 tham số 
template <typename T1, typename T2> 
auto tinhTong(T1& a, T2& b){
    return a + b;
}

int main(){
    vector<int> vecInt; 
    vector<double> vecDouble; 
    int i1, i2; 
    double d1, d2; 
    string s1, s2;

    cout << "Nhap vector int:\n";
    nhapDuLieu(vecInt);

    cout << "Nhap vector double:\n";
    nhapDuLieu(vecDouble);

    nhapDuLieu(i1,i2);
    nhapDuLieu(d1, d2);
    nhapDuLieu(s1,s2);

    cout << "Tong cac phan tu cua vector int: " << tinhTong(vecInt) << endl;

    cout << "Tong cac phan tu cua vector double: " << tinhTong(vecDouble) << endl;

    cout << "Tong 2 so nguyen: " << tinhTong(i1, i2) << endl;

    cout << "Tong 2 so thuc: " << tinhTong(d1, d2) << endl;

    cout << "Tong 2 chuoi: " << tinhTong(s1, s2) << endl;
}