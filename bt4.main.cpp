#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main() {
    ThoiGian t;

    // Nhập thời gian ban đầu
    t.Nhap();

    // Xuất thời gian ban đầu
    cout << "Thoi gian ban dau: ";
    t.Xuat();
    cout << endl;

    // Cộng thêm 1 giây
    t.TinhCongThemMotGiay();

    // Xuất kết quả sau khi cộng
    cout << "Sau khi cong 1 giay: ";
    t.Xuat();

    return 0;
}
