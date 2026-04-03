#include <iostream>
#include "NgayThangNam.h"
using namespace std;

// ================= NHẬP =================
void NgayThangNam::Nhap() {
    cout << "Nhap ngay thang nam (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;
}

// ================= XUẤT =================
void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam << endl;
}

// ================= KIỂM TRA NĂM NHUẬN =================
bool NgayThangNam::LaNamNhuan(int nam) {
    return (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0));
}

// ================= SỐ NGÀY TRONG THÁNG =================
int NgayThangNam::SoNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return LaNamNhuan(nam) ? 29 : 28;
        default:
            return 0; // tháng không hợp lệ
    }
}

// ================= KIỂM TRA HỢP LỆ =================
bool NgayThangNam::HopLe() {
    // kiểm tra năm
    if (iNam <= 0) return false;

    // kiểm tra tháng
    if (iThang < 1 || iThang > 12) return false;

    // kiểm tra ngày
    if (iNgay < 1 || iNgay > SoNgayTrongThang(iThang, iNam))
        return false;

    return true;
}

// ================= NGÀY TIẾP THEO =================
NgayThangNam NgayThangNam::NgayTiepTheo() {
    NgayThangNam next = *this;

    next.iNgay++;

    if (next.iNgay > SoNgayTrongThang(next.iThang, next.iNam)) {
        next.iNgay = 1;
        next.iThang++;

        if (next.iThang > 12) {
            next.iThang = 1;
            next.iNam++;
        }
    }

    return next;
}

