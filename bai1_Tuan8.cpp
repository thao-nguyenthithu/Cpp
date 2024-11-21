#include <iostream>
#include <vector>

using namespace std;

void thongKe(const vector<float>& danhSachGia, float *giaThapNhat, float *giaCaoNhat, float *giaTrungBinh);

int main() {
    int i;
    float giaThapNhat, giaCaoNhat, giaTrungBinh, giaTri;
    vector<float> danhSachGia;

    while (1) {
        cin >> giaTri;
        if (giaTri <= 0) break;
        danhSachGia.push_back(giaTri);
    }

    if (danhSachGia.size() == 0){
        cout << "Không có giá nào được nhập." << endl;
        return 0; 
    }

    thongKe(danhSachGia, &giaThapNhat, &giaCaoNhat, &giaTrungBinh);

    cout << "Max = " << giaCaoNhat << "\nMin = " << giaThapNhat << "\nAvg = " << giaTrungBinh << '\n';
    return 0;
}

void thongKe(const vector<float>& danhSachGia, float *giaThapNhat, float *giaCaoNhat, float *giaTrungBinh) {
    *giaThapNhat = danhSachGia[0];
    *giaCaoNhat = danhSachGia[0];
    float tongGia = 0;

    for (float gia : danhSachGia) {
        if (gia < *giaThapNhat) {
            *giaThapNhat = gia;
        }
        if (gia > *giaCaoNhat) {
            *giaCaoNhat = gia;
        }
        tongGia += gia;
    }

    *giaTrungBinh = tongGia / danhSachGia.size();
}
