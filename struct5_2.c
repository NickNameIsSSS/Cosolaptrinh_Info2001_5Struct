/*2. Sắp xếp và tìm kiếm sinh viên
Mục tiêu: Áp dụng thuật toán sắp xếp và tìm kiếm trên cấu trúc.
• Yêu cầu:
• Viết chương trình sắp xếp danh sách sinh viên theo tên hoặc điểm số.
• Tìm kiếm sinh viên theo tên hoặc id.*/
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
}sv[100];

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

void timkiem(struct Student sv[], int t, int n){
    for(int i = 0; i < n; i++){
        if(sv[i].maso == t){
            printf("Nguoi can tim theo dia chi ma so!");
            printf("\nMaso:%d", sv[i].maso);
            printf("\nHovaten:%s", sv[i].hovaten);
            printf("\nDiem:%0.2f", sv[i].diem);
            printf("\nNgay sinh la:%d/%d/%d", sv[i].BirthDay.ngay, sv[i].BirthDay.thang, sv[i].BirthDay.nam);
        }
    }
    
}
int main()
{
    int n, t;
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
    printf("\nNhap so can tim:");
    scanf("%d", &t);
    printf("\n");
    timkiem(sv, t, n);
    return 0;
}