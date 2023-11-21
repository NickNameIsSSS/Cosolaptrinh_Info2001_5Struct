/*1. Quản lý danh sách sinh viên
Mục tiêu: Sử dụng cấu trúc để quản lý dữ liệu phức tạp.
• Yêu cầu:
• Tạo một mảng các cấu trúc Student.
• Viết chương trình cho phép nhập, hiển thị, và cập nhật thông tin sinh viên.*/
#include <stdio.h>
struct Student
{
    int maso;
    char hovaten[30];
    float diem;
    int tuoi;
    struct Date
    {
        int ngay;
        int thang;
        int nam;
    } BirthDay;
};

void nhap(struct Student sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin cua sinh vien thu %d!\n", i + 1);
        printf("Vui long nhap maso cua sinh vien:");
        fflush(stdin);
        scanf("%d", &sv[i].maso);
        printf("Vui long nhap ho va ten cua sinh vien:");
        fflush(stdin);
        gets(sv[i].hovaten);
        printf("Vui long nhap diem cua sinh vien:");
        fflush(stdin);
        scanf("%f", &sv[i].diem);
        printf("Vui long nhap tuoi cua sinh vien:");
        fflush(stdin);
        scanf("%d", &sv[i].tuoi);
        printf("Vui llong nhap ngay thang nam sinh cua sinh vien:");
        scanf("%d %d %d", &sv[i].BirthDay.ngay, &sv[i].BirthDay.thang, &sv[i].BirthDay.nam);
    }
}

void xuat(struct Student sv[], int n)
{
    printf("\n\n-------------Thong tin cua Sinh vien---------------\n");
    printf("Maso \tHovaten \tDiem \tTuoi \tNgay/Thang/Nam Sinh\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d  \t%s\t%0.2f \t%d \t%d/%d/%d\n", sv[i].maso, sv[i].hovaten, sv[i].diem, sv[i].tuoi, sv[i].BirthDay.ngay, sv[i].BirthDay.thang, sv[i].BirthDay.nam);
    }
}
int main()
{
    struct Student sv[100];
    int n;
    do
    {
        printf("Vui long nhap n:");
        scanf("%d", &n);
        if (n < 1)
        {
            printf("Vui long nhap lai!Khong thoa man dieu kien!(N >= 1)");
        }
    } while (n < 1);
    nhap(sv, n);
    xuat(sv, n);
    return 0;
}