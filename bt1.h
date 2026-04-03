#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

class NgayThangNam {
private:
    int iNgay, iThang, iNam;

public:
    // Nhập dữ liệu
    void Nhap();

    // Xuất dữ liệu
    void Xuat();

    // Kiểm tra năm nhuận
    bool LaNamNhuan(int nam);

    // Lấy số ngày trong tháng
    int SoNgayTrongThang(int thang, int nam);

    // Kiểm tra ngày hợp lệ
    bool HopLe();

    // Tính ngày tiếp theo
    NgayThangNam NgayTiepTheo();
};

#endif
