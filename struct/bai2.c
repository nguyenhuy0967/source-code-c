//tính khoảng cách của 2 điểm trong không gian 2 chiều
#include<iostream>
#include<stdio.h>
#include<math.h>
struct Diem2D
{
    float x,y;
};
void nhapDiem2D(struct Diem2D *d)
{
    printf("Nhap hoanh do:");
    scanf("%f",&d->x);
    printf("\nNhap tung do:");
    scanf("%f",&d->y);
}
int tinhKhoangcach(struct Diem2D d1,struct Diem2D d2)
{
    return sqrt((d1.x-d2.x)*(d1.x-d2.x)+(d1.y-d2.y)*(d1.y-d2.y));
}
void inDiem2D(struct Diem2D d1)
{
    if(d1.x==0 && d1.y!=0) 
        printf("\nDiem A nam tren tung do .");
    else if(d1.x!=0 && d1.y==0) 
            printf("\nDiem A nam tren hoang do.");
        else
            printf("\nDiem A khong nam tren hoanh do va tung do.");
}
main()
{
    struct Diem2D a,b;
    nhapDiem2D(&a);
    nhapDiem2D(&b);
    inDiem2D(a);
    float x=tinhKhoangcach(a,b);
    printf("\nKhoang cach giua 2 diem :%0.2f",x);
    system("pause");
}