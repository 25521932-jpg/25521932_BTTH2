#ifndef THOIGIAN_H
#define THOIGIAN_H

// Khai báo lớp ThoiGian biểu diễn giờ:phút:giây
class ThoiGian {
private:
    int iGio;   // giờ
    int iPhut;  // phút
    int iGiay;  // giây

public:
    // Nhập thời gian từ bàn phím
    void Nhap();

    // Xuất thời gian ra màn hình
    void Xuat();

    // Cộng thêm 1 giây vào thời gian hiện tại
    void TinhCongThemMotGiay();
};

#endif
