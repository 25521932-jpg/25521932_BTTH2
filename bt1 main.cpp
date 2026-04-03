#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main() {
    NgayThangNam a;

    a.Nhap();

    // kiểm tra hợp lệ
    if (!a.HopLe()) {
        cout << "Ngay khong hop le!" << endl;
        return 0;
    }

    cout << "Ngay vua nhap: ";
    a.Xuat();

    NgayThangNam b = a.NgayTiepTheo();

    cout << "Ngay tiep theo: ";
    b.Xuat();

    return 0;
}
