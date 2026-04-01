#include <iostream>
using namespace std;

// Hàm kiểm tra năm nhuận
bool LaNamNhuan(int nam) {
    return (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0));
}

// Hàm trả về số ngày trong tháng
int SoNgayTrongThang(int thang, int nam) {
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
        thang == 8 || thang == 10 || thang == 12)
        return 31;

    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        return 30;

    if (thang == 2)
        return LaNamNhuan(nam) ? 29 : 28;

    return 0;
}

// Lớp NgayThangNam
class NgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;

public:
    // Nhập ngày tháng năm
    void Nhap() {
        cin >> iNgay >> iThang >> iNam;
    }

    // Xuất ngày tháng năm
    void Xuat() {
        cout << iNgay << "/" << iThang << "/" << iNam;
    }

    // Tính ngày kế tiếp
    void NgayThangNamTiepTheo() {
        iNgay++;

        if (iNgay > SoNgayTrongThang(iThang, iNam)) {
            iNgay = 1;
            iThang++;

            if (iThang > 12) {
                iThang = 1;
                iNam++;
            }
        }
    }
};

int main() {
    NgayThangNam a;

    // Nhập ngày
    a.Nhap();

    // Xuất ngày ban đầu
    cout << "Ngay ban dau: ";
    a.Xuat();
    cout << endl;

    // Tính ngày tiếp theo
    a.NgayThangNamTiepTheo();

    // Xuất kết quả
    cout << "Ngay tiep theo: ";
    a.Xuat();

    return 0;
}
