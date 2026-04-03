#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b;

    cout << "Nhap so phuc A:\n";
    a.Nhap();

    cout << "Nhap so phuc B:\n";
    b.Nhap();

    // Tính toán
    SoPhuc tong = a.Tong(b);
    SoPhuc hieu = a.Hieu(b);
    SoPhuc tich = a.Tich(b);
    SoPhuc thuong = a.Thuong(b);

    cout << "\nTong: ";
    tong.Xuat();

    cout << "\nHieu: ";
    hieu.Xuat();

    cout << "\nTich: ";
    tich.Xuat();

    cout << "\nThuong: ";
    thuong.Xuat();

    return 0;
}

