#include <iostream>
#include "ThoiGian.h"
using namespace std;

// Hàm nhập giờ, phút, giây
void ThoiGian::Nhap() {
    cin >> iGio >> iPhut >> iGiay;
}

// Hàm xuất thời gian dạng hh:mm:ss
void ThoiGian::Xuat() {
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

// Hàm cộng thêm 1 giây
void ThoiGian::TinhCongThemMotGiay() {
    iGiay++; // tăng 1 giây

    // Nếu giây đạt 60 thì reset và tăng phút
    if (iGiay == 60) {
        iGiay = 0;
        iPhut++;

        // Nếu phút đạt 60 thì reset và tăng giờ
        if (iPhut == 60) {
            iPhut = 0;
            iGio++;

            // Nếu giờ đạt 24 thì quay về 0 (qua ngày mới)
            if (iGio == 24) {
                iGio = 0;
            }
        }
    }
}
