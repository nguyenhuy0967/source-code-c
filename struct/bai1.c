//Nhập vào 2 sinh viên xuất ra tên sinh viên lon tuoi hơn
#include<iostream>
#include<stdio.h>
#include<string.h>

struct sinhVien
{
    char hoTen[100];
    int namSinh;
    float dtb;
};
void nhapDuieu(struct sinhVien &s)
{
    printf("\nHo va ten hoc sinh :");
    gets(s.hoTen);
    printf("\nNhap nam sinh :");
    scanf("%d",&s.namSinh);
    printf("\nNhap diem trung binh:");
    scanf("%f",&s.dtb);
    fflush(stdin);
}

void inSv(struct sinhVien s)
{
    printf("\nHo va Ten :%s",s.hoTen);
    printf("\nNam sinh :%d",s.namSinh);
    printf("\nDiem trung binh :%0.1f",s.dtb);
}
main()
{
    struct sinhVien s1, s2;
    nhapDuieu(s1);
    nhapDuieu(s2);
    printf("\nSinh vien lon tuoi hon:");
    if(s1.namSinh<=s2.namSinh)
        inSv(s1);
    else
        inSv(s2);
    system("pause");
}
