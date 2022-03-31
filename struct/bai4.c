//tinh dien tich va chu vi hinh chu nhat
#include<iostream>
#include<stdio.h>

struct hinhChuNhat
{
    float chieuDai;
    float chieuRong;
};
void nhapDulieu(struct hinhChuNhat *a)
{
    printf("Nhap chieu dai :");
    scanf("%f", &a->chieuDai);
    printf("\nNhap chieu rong :");
    scanf("%f", &a->chieuRong);
}
float tinhChuVi(struct hinhChuNhat a)
{
    float x;
    return x=(a.chieuDai+a.chieuRong)*2;
}
float tinhDienTich(struct hinhChuNhat a)
{
    float x;
    return x=a.chieuDai*a.chieuRong;
}
void xacDinh(struct hinhChuNhat a)
{
    if(a.chieuDai==a.chieuRong)
        printf("\nDay la hinh vuong .");
    else
        printf("\nDay kh la hinh vuong .");
}

main()
{
    struct hinhChuNhat a;
    nhapDulieu(&a);
    xacDinh(a);
    printf("\nChu vi hinh chu nhat :%0.1f (don vi do dai)",tinhChuVi(a));
    printf("\nDien tich hinh chu nhat :%0.1f(don vi dien tich )",tinhDienTich(a));
    system("pause");
}