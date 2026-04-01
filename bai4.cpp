#include <iostream>
using namespace std;

// Lớp ThoiGian biểu diễn giờ:phút:giây
class ThoiGian {
private:
    int iGio;   // giờ
    int iPhut;  // phút
    int iGiay;  // giây

public:
    // Hàm nhập thời gian
    // Nhập lần lượt: giờ phút giây
    void Nhap() {
        cin >> iGio >> iPhut >> iGiay;
    }

    // Hàm xuất thời gian dạng hh:mm:ss
    void Xuat() {
        cout << iGio << ":" << iPhut << ":" << iGiay;
    }

    // Hàm cộng thêm 1 giây
    void TinhCongThemMotGiay() {
        iGiay++; // tăng 1 giây

        // Nếu giây = 60 → reset và tăng phút
        if (iGiay == 60) {
            iGiay = 0;
            iPhut++;

            // Nếu phút = 60 → reset và tăng giờ
            if (iPhut == 60) {
                iPhut = 0;
                iGio++;

                // Nếu giờ = 24 → quay về 0
                if (iGio == 24) {
                    iGio = 0;
                }
            }
        }
    }
};

int main() {
    ThoiGian t;

    // Nhập thời gian
    // Ví dụ nhập: 10 20 30
    t.Nhap();

    // Xuất thời gian ban đầu
    cout << "Thoi gian ban dau: ";
    t.Xuat();
    cout << endl;

    // Cộng thêm 1 giây
    t.TinhCongThemMotGiay();

    // Xuất thời gian sau khi cộng
    cout << "Sau khi cong 1 giay: ";
    t.Xuat();

    return 0;
}
