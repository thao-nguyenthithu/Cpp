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
