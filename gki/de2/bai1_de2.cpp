#include <iostream>
#include <vector>
#include <string>

using namespace std; 

//Khuôn mẫu hàm 
template <typename T> void nhapDuLieu(vector<T>& vec);
template <typename T1, typename T2> void nhapDuLieu(T1& a, T2& b);
template <typename T> T tinhTong(const vector<T>& vec);
template <typename T1, typename T2> auto tinhTong(T1& a, T2& b);

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

template <typename T1, typename T2>
void nhapDuLieu(T1& a, T2& b){ 
    cout << "Nhap 2 so bat ki: "; 
    cin >> a >> b; 
}

template <typename T>
void tinhTong(const vector<T>& vec){
    if(vec.empty()){
        cout << "Vector rong\n";
    }else{
        T sum = 0;
        for(const T& value : vec){
            sum += value;
        }
        cout << sum << "\n";
    }
}

template <typename T1, typename T2> 
void tinhTong(T1& a, T2& b){
    cout << a + b << endl;
}

int main(){
    vector<int> vecInt; 
    vector<double> vecDouble; 
    int i1, i2; 
    double d1, d2; 
    string s1, s2;

    nhapDuLieu(vecInt);
    nhapDuLieu(vecDouble);

    nhapDuLieu(i1,i2);
    nhapDuLieu(d1, d2);
    nhapDuLieu(s1,s2);

    tinhTong(vecInt);
    tinhTong(vecDouble);
    tinhTong(i1, i2);
    tinhTong(d1, d2);
    tinhTong(s1, s2);
}