/*
Cho một vector số nguyên A.
Nhiệm vụ: viết hàm nhận một vector số nguyên A làm tham số, tìm và in ra tần số xuất hiện của mỗi phần tử bên trong vector.
*/

#include <iostream>
#include <vector>
using namespace std;

// Ham tinh va in tan so xuat hien cua moi phan tu
void inTanSo(const vector<int>& danh_sach) {
    vector<bool> da_xu_ly(danh_sach.size(), false); // Danh dau cac phan tu da xu ly

    for (int i = 0; i < danh_sach.size(); i++) {
        if (!da_xu_ly[i]) { // Chi xu ly phan tu chua duoc dem
            int dem = 1; // Dem lan dau xuat hien cua danh_sach[i]

            // Duyet tiep tu i + 1 de dem cac lan xuat hien khac
            for (int j = i + 1; j < danh_sach.size(); j++) {
                if (danh_sach[i] == danh_sach[j]) {
                    dem++;
                    da_xu_ly[j] = true; // Danh dau phan tu da xu ly
                }
            }

            // In phan tu va so lan xuat hien
            cout << danh_sach[i] << " " << dem << "\n";
        }
    }

    cout << endl;
}

int main() {
    vector<int> danh_sach = {1, 2, 2, 3, 1, 4, 4, 5};

    inTanSo(danh_sach);

    return 0;
}
