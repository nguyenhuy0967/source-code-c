//tính tiền điện tiêu thụ của khách hàng
#include<iostream>
#include<stdio.h>

struct tienDien
{
    int chiSoCu;
    int chiSoMoi;
};
void nhapDuLieu(struct tienDien *a)
{
    printf("Nhap chi so cu:");
    scanf("%d",&a->chiSoCu);
    printf("\nNhap chi so moi: ");
    scanf("%d", &a->chiSoMoi);
}
int tienDien(struct tienDien a)
{
    float x=0;
    float y=a.chiSoMoi-a.chiSoCu;
    if(y<=100)
        x=y*1000;
    else
        x=100*1000+(y-100)*1500;
    return x;
}

main()
{
    struct tienDien a;
    nhapDuLieu(&a);
    tienDien(a);
    float b=tienDien(a);
    printf("\nHoa don tieu thu dien cua khach hang :%0.3f (dong)",b);
    system("pause");
}