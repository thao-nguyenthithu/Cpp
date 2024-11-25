#include <iostream>
#include <cstring>

using namespace std;

void noi_chuoi(char *chuoi_dich, const char *chuoi1, const char *chuoi2);

int main()
{
    char *chuoi_dich, chuoi1[100], chuoi2[100];
    int do_dai1, do_dai2;

    cin.getline(chuoi1, sizeof(chuoi1));
    do_dai1 = strlen(chuoi1);

    cin.getline(chuoi2, sizeof(chuoi2));
    do_dai2 = strlen(chuoi2);

    // Cấp phát bộ nhớ để lưu trữ cả hai chuỗi và ký tự null.
    chuoi_dich = new char[do_dai1 + do_dai2 + 1];
    noi_chuoi(chuoi_dich, chuoi1, chuoi2);

    cout << chuoi_dich << '\n';

    delete[] chuoi_dich;
    return 0;
}

void noi_chuoi(char *chuoi_dich, const char *chuoi1, const char *chuoi2)
{
    memcpy(chuoi_dich, chuoi1, strlen(chuoi1));

    memcpy(chuoi_dich + strlen(chuoi1), chuoi2, strlen(chuoi2));

    chuoi_dich[strlen(chuoi1) + strlen(chuoi2)] = '\0';
}


// #include <iostream>
// #include <cstring> // Thư viện để sử dụng strlen và strcpy
// using namespace std;

// // Hàm nối chuỗi với cấp phát bộ nhớ động cho chuỗi 3
// void noi_chuoi(const char *chuoi1, const char *chuoi2, char **chuoi3) {
//     // Tính kích thước cần thiết cho chuỗi 3
//     size_t len1 = strlen(chuoi1);
//     size_t len2 = strlen(chuoi2);
//     size_t total_len = len1 + len2 + 1; // +1 để chứa ký tự '\0'

//     // Cấp phát bộ nhớ động cho chuỗi 3
//     *chuoi3 = new char[total_len];

//     // Sao chép chuỗi 1 và nối chuỗi 2 vào chuỗi 3
//     strcpy(*chuoi3, chuoi1);  // Sao chép chuỗi 1 vào chuỗi 3
//     strcat(*chuoi3, chuoi2);  // Nối chuỗi 2 vào sau chuỗi 3
// }

// int main() {
//     char chuoi1[101], chuoi2[101]; // Chuỗi 1 và 2 với độ dài tối đa 100 ký tự
//     char *chuoi3 = nullptr;       // Chuỗi 3 sẽ được cấp phát động

//     // Đọc chuỗi 1 và chuỗi 2
//     cout << "Nhap chuoi 1 (toi da 100 ky tu): ";
//     cin.getline(chuoi1, 101);
//     cout << "Nhap chuoi 2 (toi da 100 ky tu): ";
//     cin.getline(chuoi2, 101);

//     // Gọi hàm để nối chuỗi
//     noi_chuoi(chuoi1, chuoi2, &chuoi3);

//     // In kết quả
//     cout << "Chuoi 3 sau khi noi chuoi 1 va chuoi 2: " << chuoi3 << endl;

//     // Giải phóng bộ nhớ động
//     delete[] chuoi3;

//     return 0;
// }
