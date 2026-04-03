#include <iostream>
#include "SoPhuc.h"
using namespace std;

// Nhập số phức
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

// Xuất số phức dạng a + bi
void SoPhuc::Xuat() {
    cout << iThuc;
    if (iAo >= 0)
        cout << "+" << iAo << "i";
    else
        cout << iAo << "i";
}

// Tính tổng hai số phức
// (a + bi) + (c + di) = (a + c) + (b + d)i
SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc + b.iThuc;
    kq.iAo = iAo + b.iAo;
    return kq;
}

// Tính hiệu hai số phức
// (a + bi) - (c + di) = (a - c) + (b - d)i
SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc - b.iThuc;
    kq.iAo = iAo - b.iAo;
    return kq;
}

// Tính tích hai số phức
// (a + bi)(c + di) = (ac - bd) + (ad + bc)i
SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    kq.iAo = iThuc * b.iAo + iAo * b.iThuc;
    return kq;
}

// Tính thương hai số phức
// (a + bi) / (c + di)
SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc kq;

    // Mẫu số = c^2 + d^2
    int mau = b.iThuc * b.iThuc + b.iAo * b.iAo;

    // Công thức chia số phức
    kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    kq.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;

    return kq;
}
