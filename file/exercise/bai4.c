//kiem tra ki ti nguyen am a
#include<iostream>
#include<stdio.h>
#include<string.h>
void nhapMang(char *arr)
{
    printf("Nhap chuoi ki tu:");
    gets(arr);
}
void ghiFile(char *arr)
{
    FILE *f;
    f=fopen("nguyenam.txt","w");
    int i,s=strlen(arr);
    for(i=0;i<s;i++)
    {
        if(arr[i]=='a'||arr[i]=='u'||arr[i]=='e'||arr[i]=='o'||arr[i]=='i')
            fprintf(f,"%c ",arr[i]);
    }
    fclose(f);
}
int docFile()
{
    FILE *f;
    int dem=0,kq;
    char kt;
    f=fopen("nguyenam.txt","r");
    do
    {
        kq=fscanf(f,"%c",&kt);
        if( kt=='a')
            dem++;
    } while (kq!=EOF);
    return dem;
    fclose(f);
}
main()
{
    char arr[100];
    nhapMang(arr);
    ghiFile(arr);
    int s=docFile();
    printf("\nSo nguyen am a trong mang =%d",s);
    system("pause");
}