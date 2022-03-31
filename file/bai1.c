//lưu các số chẵn từ mảng vào tệp
#include<iostream>
#include<stdio.h>

void ghiTep(int *a, int n)
{
    FILE *f ;
    int i;
    f=fopen("sochan.txt", "w");
    for(i=0; i<=n; i++)
        if(a[i]%2==0)
            fprintf(f, "%d", a[i]);
    fclose(f);
}
void docTep()
{
    FILE *f ;
    int kq,tg;
    f=fopen("sochan.txt", "r");
    do
    {
        kq=fscanf(f,"%d",&tg);
        if(kq!=EOF)
           printf("%3d",tg);     
    } while (kq!=EOF);
    fclose(f);
    
}
main()
{
    int x[6]={1,2,3,4,5,6};
    ghiTep(x,6);
    docTep();
    system("pause");
}