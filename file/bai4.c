//ghi tep gom n so nguyen to
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void nhapViTriK(int *n,int *k)
{
    printf("Nhap so so nguyen to va vi tri k<n:");
    scanf("%d%d",n,k);
}
bool checkSnt(int n)
{
    if(n<2)
        return false; 
    if(n==2)
            return true;
        else
        {
            for(int i=2; i<=sqrt(n); i++)
            {
                if(n%i == 0)
                    return false;
            }
        return true;
        }
}
void ghiTep(int n)
{
    FILE *f;
    int i=2;
    int dem=0;
    f=fopen("soNT.txt", "w");
    while(dem<n)
    {
        if(checkSnt(i)==true)
        {
            fprintf(f,"%d ",i);
            dem++;
        }
        i++;
    }
    fclose(f);
}
void docTep(int n)
{
    FILE *f;
    int x=0,i,a,b;
    f=fopen("soNT.txt", "r");
    for(i=1;a!=EOF;i++)
    {
        a=fscanf(f,"%d",&b);
        if(a!=EOF)
        {
            if(i==n)
                x=b;
        }
    }
    printf("So nguyen to thu %d = %d\n",n,x);
    fclose(f);
}
main()
{
    int n,k;
    nhapViTriK(&n,&k);
    ghiTep(n);
    docTep(k);
    system("pause");
}
