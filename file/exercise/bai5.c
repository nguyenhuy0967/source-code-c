//luu thong tin sinh vien
#include<iostream>
#include<stdio.h>
#include<string.h>

struct thongTinSv
{
    char hoTen[30];
    int namSinh;
    float dtb;
};
void nhapThongTinSV(struct thongTinSv *s)
{
    fflush(stdin);
    printf("Nhap ho va ten:");
    gets(s->hoTen);
    printf("\nNam sinh:");
    scanf("%d",&s->namSinh);
    printf("\nDiem trung binh :");
    scanf("%f",&s->dtb);
}
void inSinhVien(struct thongTinSv s)
{
    printf("\nHo va ten:%s \n nam sinh:%d \n diem trung binh:%f",s.hoTen,s.namSinh,s.dtb);   
}
main()
{
    struct thongTinSv s1,s2,x1,x2;
    FILE *f;
    char ht[30];
    int kq;
    nhapThongTinSV(&s1);
    nhapThongTinSV(&s2);
    
    f=fopen("sinhvien.dat","wb");
    fwrite(&s1,1,sizeof(struct thongTinSv),f);
    fwrite(&s2,1,sizeof(struct thongTinSv),f);
    fclose(f);

     f=fopen("sinhvien.dat","rb");
    fread(&x1,1,sizeof(struct thongTinSv),f);
    fread(&x2,1,sizeof(struct thongTinSv),f);
    inSinhVien(x1);
    inSinhVien(x2);
    fclose(f);

    fflush(stdin);
    printf("\nNhap ho ten Sinh Vien can tim:");
    gets(ht);
    f=fopen("sinhvien.dat","rb");
    do
    {
        kq=fread(&x1,1,sizeof(struct thongTinSv),f);
        if(kq!=EOF)
            if(strcmp(x1.hoTen,ht)==0)
            {
                inSinhVien(x1);
                break;
            }
    }while(kq!=EOF);
    fclose(f);

    system("pause");
}