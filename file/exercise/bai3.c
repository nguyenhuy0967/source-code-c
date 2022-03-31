//tìm số thực lớn nhất trong mảng
#include<iostream>
#include<stdio.h>

void nhapMang(float *arr,int *n)
{
    printf("Nhap so phan tu mang :");
    scanf("%d",n);
    int i;
    for (i=0;i<*n;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%f",&arr[i]);
    }
}
void ghiFile(float *arr,int n)
{
    FILE *f;
    f=fopen("sothuc.txt","w");
    int i;
    fprintf(f,"%d\n",n);
    for (i=0;i<n;i++)
    {
        fprintf(f,"%f\n",arr[i]);
    }
    fclose(f);
}
float docFile()
{
    FILE *f;
    int i,n;
    float so;
    f=fopen("sothuc.txt","r");
    float max;
    fscanf(f,"%d",&n);
    max=fscanf(f,"%f",&so);
    for(i=0;i<n;i++)
    {
        fscanf(f,"%f",&so);
        if(so>max)
            max=so;
    }
    fclose(f);
    return max;
}
main()
{
    float arr[100];
    int n;
    nhapMang(arr,&n);
    ghiFile(arr,n);
    float x= docFile();
    printf("\nSo lon nhat trong mang:%f",x);
    system("pause");
}