/*3. Bài toán thực tế: Quản lý nhân sự
Mục tiêu: Áp dụng cấu trúc vào một ứng dụng thực tế.
• Yêu cầu:
• Tạo cấu trúc Employee với các thông tin như mã nhân viên, tên, chức vụ,
lương.
• Viết chương trình để quản lý nhân sự, bao gồm các chức năng như thêm,
xóa, hiển thị, và sắp xếp nhân viên*/

// Chuc nang sapxep(da co), xoa, them, hienthi(da co)
#include <stdio.h>

struct Employee
{
    int Manhanvien;
    char ten[30];
    char chucvu[30];
    struct luong
    {
        int nghindong;
        int trieu;
    } l;
} dt[100], temp;

void nhap(struct Employee dt[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Vui long nhap doi tuong %d!", i + 1);
        printf("\nVui long nhap Ma Doi tuong:");
        fflush(stdin);
        scanf("%d", &dt[i].Manhanvien);
        printf("\nVui long nhap ten cua doi tuong:");
        fflush(stdin);
        gets(dt[i].ten);
        printf("Vui long nhap chuc vu cua doi tuong:");
        fflush(stdin);
        gets(dt[i].chucvu);
        printf("\nVui long nhap luong cua doi tuong:");
        scanf("%d %d", &dt[i].l.nghindong, &dt[i].l.trieu);
    }
}

void xuat(struct Employee dt[], int n)
{
    printf("\n\n-------Ma thong tin doi tuong---------\n\n");
    printf("MaNhanVien\tTen         \tChucvu    \tLuong\n");
    for (int i = 0; i < n; i++)
    {
            printf("  %d  \t%s       \t%s   \t%d Trieu %d Nghin Dong", dt[i].Manhanvien, dt[i].ten, dt[i].chucvu, dt[i].l.trieu, dt[i].l.nghindong);
    }
}

void sapxep(struct Employee dt[], int n){
    for( int i = 1; i < n; i++){
        for(int j = 0; i < n - i; j++){
            if(dt[j].Manhanvien > dt[j + 1].Manhanvien){
                temp = dt[j];
                dt[j] = dt[j + 1];
                dt[j + 1] = temp;
            }
        }
    }
    xuat(dt, n);
}
int main()
{
    int n; 
    int c[4] = {1, 2, 3, 4};
    printf("Vui long nhap so luong doi tuong:");
    scanf("%d", &n);
    nhap(dt, n);
    xuat(dt, n);
    printf("Chon mot chac nang muon:");
    printf("1 la xoa!    2 la them!    3 la sap xep!");
    switch (c)
    {
    case '1':
        
        break;
    case '2':
        break;
    case '3':
        sapxep(dt, n);
        break; 
    case '4':
        break;
    default:
        break;
    }
    return 0;
}