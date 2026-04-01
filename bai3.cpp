#include <iostream>
using namespace std;

// Lớp SoPhuc biểu diễn số phức dạng a + bi
class SoPhuc {
private:
    int iThuc; // phần thực (a)
    int iAo;   // phần ảo (b)

public:
    // Hàm nhập số phức từ bàn phím
    // Nhập lần lượt phần thực và phần ảo
    void Nhap() {
        cin >> iThuc >> iAo;
    }

    // Hàm xuất số phức ra màn hình dạng a+bi hoặc a-bi
    void Xuat() {
        cout << iThuc;
        if (iAo >= 0) cout << "+" << iAo << "i";
        else cout << iAo << "i";
    }

    // Hàm tính tổng hai số phức
    // (a + bi) + (c + di) = (a + c) + (b + d)i
    SoPhuc Tong(SoPhuc b) {
        SoPhuc kq;
        kq.iThuc = iThuc + b.iThuc; // cộng phần thực
        kq.iAo = iAo + b.iAo;       // cộng phần ảo
        return kq;
    }

    // Hàm tính hiệu hai số phức
    // (a + bi) - (c + di) = (a - c) + (b - d)i
    SoPhuc Hieu(SoPhuc b) {
        SoPhuc kq;
        kq.iThuc = iThuc - b.iThuc; // trừ phần thực
        kq.iAo = iAo - b.iAo;       // trừ phần ảo
        return kq;
    }

    // Hàm tính tích hai số phức
    // (a + bi)(c + di) = (ac - bd) + (ad + bc)i
    SoPhuc Tich(SoPhuc b) {
        SoPhuc kq;
        kq.iThuc = iThuc * b.iThuc - iAo * b.iAo; // phần thực
        kq.iAo = iThuc * b.iAo + iAo * b.iThuc;   // phần ảo
        return kq;
    }

    // Hàm tính thương hai số phức
    // (a + bi) / (c + di)
    // = [(ac + bd) / (c² + d²)] + [(bc - ad) / (c² + d²)]i
    SoPhuc Thuong(SoPhuc b) {
        SoPhuc kq;

        // mẫu số = c^2 + d^2
        int mau = b.iThuc * b.iThuc + b.iAo * b.iAo;

        // kiểm tra chia cho 0
        if (mau == 0) {
            kq.iThuc = kq.iAo = 0; // gán 0 nếu không chia được
            return kq;
        }

        // áp dụng công thức chia
        kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
        kq.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;

        return kq;
    }
};

int main() {
    SoPhuc a, b;

    // Nhập 2 số phức
    a.Nhap();
    b.Nhap();

    // Thực hiện các phép toán
    SoPhuc tong = a.Tong(b);
    SoPhuc hieu = a.Hieu(b);
    SoPhuc tich = a.Tich(b);
    SoPhuc thuong = a.Thuong(b);

    // Xuất kết quả
    tong.Xuat(); cout << endl;
    hieu.Xuat(); cout << endl;
    tich.Xuat(); cout << endl;
    thuong.Xuat();

    return 0;
}
