
#include<iostream>
#include<string>
#include<vector>
#include<cstring>

using namespace std;

template <typename T> void nhapDuLieu(vector<T>& vec);
template <typename T1, typename T2> void nhapDuLieu(T1& a, T2 &b);
template <typename T> void tinhTB(vector<T>& vec);
template <typename T1, typename T2> void tinhTB(T1& a, T2& b , double *tb);

template <typename T>
void nhapDuLieu(vector<T>& vec){
    T value;
    while(true){
        cin >> value;
        if(value == -1) break;
        vec.push_back(value);
    }
}

template <typename T1, typename T2>
void nhapDuLieu(T1& a, T2 &b){
    cin >> a >> b;
}

template <typename T>
void tinhTB(vector<T>& vec){
    if(vec.empty()){
        cout << "Vector rong\n";
    }else{
        T sum = 0;
        for(const T& v: vec){
            sum += v;
        }
        T tb = 0;
        tb = sum/size(vec);
        cout << tb << "\n";
    }
}

template <typename T1, typename T2>
void tinhTB(T1& a, T2& b , double *tb){
    *tb = (a + b)/2;
    cout << *tb << "\n";
}


int main(){
	vector<int> vecInt;
	vector<double>vecDouble;
	int i1, i2;
	double d1, d2;
    double tb1, tb2;

	nhapDuLieu(vecInt);
	nhapDuLieu(vecDouble);
	nhapDuLieu(i1, i2);
	nhapDuLieu(d1, d2);

	tinhTB(vecInt);
	tinhTB(vecDouble);
    tinhTB(i1,i2, &tb1);
    tinhTB(d1,d2, &tb2);
}