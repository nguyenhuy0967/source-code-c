//in trường sinh viên 
#include<iostream>
#include<stdio.h>
struct ngay 
{
    int ngay,thang,nam;
};
struct diemTrungBinh
{
    float toan,ly,hoa,TiengAnh;
};
struct sinhVien
{
     char hoTen[100];
    struct ngay ngaySinh;
    struct diemTrungBinh dtb;
};
void Nhapngay(struct ngay *s)
{
    do
    {
        printf("Nhap lan luot ngay ,thang ,nam sinh :");
        scanf("%d%d%d", &s->ngay,&s->thang,&s->nam);
    } while (s->ngay<1||s->ngay>31||s->thang<1||s->thang>12);
}
void NhapDiem(struct diemTrungBinh *s)
{
    do
    {
        printf("\nNhap lan luot diem toan ,ly,hoa,tieng anh:");
        scanf("%f%f%f%f", &s->toan, &s->ly,&s->hoa, &s->TiengAnh);
    } while (s->toan<0||s->ly<0||s->hoa<0||s->TiengAnh<0||s->toan>10||s->ly>10||s->hoa>10||s->TiengAnh>10);
}
void NhapDuLieu(struct sinhVien *s)
{
    printf("\nNhap ho va ten: ");
    gets(s->hoTen);
    printf("Nhap ngay sinh :");
    Nhapngay(&s->ngaySinh);
    printf("\nNhap diem :");
    NhapDiem(&s->dtb);
    fflush(stdin);
}
int soNgay(struct ngay a,struct ngay b)
{
    if(a.nam!=b.nam) 
        return  a.nam-b.nam;
    else if(a.thang!=b.thang)
            return a.thang-b.thang;
        else if(a.ngay!=b.ngay)
                return a.ngay-b.ngay;
            else
                return 0;
}
float soSanhtuoi(struct sinhVien a,struct sinhVien b,int n)
{
    if(n<0)
        printf("\n%s sinh sau %s",a.hoTen,b.hoTen);
    else if(n>0)
            printf("\n%s sinh truoc %s",a.hoTen,b.hoTen);
        else 
            printf("\nCa hai sinh cung ngay");
}
int soTuoi(struct ngay a)
{
    return 2021-a.nam;
}
float tinhDtb(struct diemTrungBinh a)
{
    return (a.toan+a.ly+a.hoa+a.TiengAnh)/4;
}
main()
{
   
    struct sinhVien s1,s2;
    struct ngay s3,s4;
    struct diemTrungBinh s5,s6;
    Nhapngay(&s3);
    Nhapngay(&s4);
    NhapDiem(&s5);
    NhapDiem(&s6);
    NhapDuLieu(&s1);
    NhapDuLieu(&s2);
    float a=soNgay(s3,s4);
    soSanhtuoi(s1,s2,a);
    int x=soTuoi(s3);
    printf("So tuoi cua sv 1:%d",a);
    int y=soTuoi(s4);
    printf("So tuoi cua sv 2:%d",y);
    float p=tinhDtb(s5);
    printf("\nDtb cua sv 1:%d",p);
    float q=tinhDtb(s6);
    printf("\nDtb cua sv 2:%d",q);
    system("pause");
}