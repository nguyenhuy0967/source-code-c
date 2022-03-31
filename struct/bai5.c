//tinh dien tich cua 1 tam giac
#include<iostream>
#include<stdio.h>
#include<math.h>
 struct TamGiac
 {
     float x,y,z;
 };
 void NhapDuLieu(struct TamGiac *a)
 {
     do
     {
        printf("Nhap lan luot do dai 3 canh cua tam giac :");
        scanf("%f%f%f",&a->x,&a->y,&a->z);
     } while ((a->x+a->y<=a->z) && (a->x+a->z<=a->y) && (a->y+a->z<=a->x));
 }
 int tinhNuaChuVi(struct TamGiac a)
 {
     return (a.x+a.y+a.z)/2;
 }
 int tinhDienTich(struct TamGiac a,float n)
 {
     return sqrt(n*(n-a.x)*(n-a.y)*(n-a.z));
 }
 void xacDinh(struct TamGiac a)
 {
     if(a.x==a.y||a.x==a.z||a.y==a.z)
        printf("\nDay la tam giac can.");
    else
        printf("\nDay KH la tam giac can");
 }
 main()
 {
     struct TamGiac a;
     NhapDuLieu(&a);
     xacDinh(a);
     float p=tinhNuaChuVi(a);
     float q=tinhDienTich(a,p);
     printf("\nDien tich tam giac la:%0.2f",q);
     system("pause");
 }