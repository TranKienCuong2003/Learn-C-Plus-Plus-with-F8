#include <iostream>

class TinhThue {
public:
    void nhapDuLieu() {
        std::cout << "Nhap tong tien: ";
        std::cin >> tong_tien;

        std::cout << "Nhap luong co ban: ";
        std::cin >> luong_co_ban;
    }

    void tinhThue() {
        float thue = 0;
        
        if (tong_tien <= luong_co_ban) {
            so_tien_thuc_linh = tong_tien - thue;
        } else { 
            thue = (tong_tien - luong_co_ban) * 0.1;
            so_tien_thuc_linh = tong_tien - thue;
        }
    }

    void hienThi() {
        std::cout << "Thuc linh: " << so_tien_thuc_linh << std::endl;
    }

private:
    float tong_tien, luong_co_ban, so_tien_thuc_linh;
};

int main() {
    TinhThue tinhThue;
    tinhThue.nhapDuLieu();
    tinhThue.tinhThue();
    tinhThue.hienThi();

    return 0;
}
