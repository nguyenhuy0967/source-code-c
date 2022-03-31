//tính trung bình cộng các số trong tệp
#include<iostream>
#include<stdio.h>

void nhapMang(int *arr,int *n)
{
    printf("Nhap so phan tu mang:");
    scanf("%d",n);
    int i;
    for(i=0;i<*n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
void ghiFile(int *arr,int n)
{
    FILE *f;
    f=fopen("songuyen.txt","w");
    int i;
    fprintf(f,"%d\n",n);
    for(i=0;i<n;i++)
        fprintf(f,"   %d",arr[i]);
    fclose(f);
}
float docFile()
{
    FILE *f;
    int i,n,so,sum;
    f=fopen("songuyen.txt","r");
    fscanf(f,"%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        fscanf(f,"%d",&so);
        sum+=so;
    }
    fclose(f);
    return (float)(sum/n);
}
main()
{
    int arr[100],n;
    nhapMang(arr,&n);
    ghiFile(arr,n);
    float a=docFile();
    printf("\nTrung binh cong cua mang = %f",a);
    system("pause");
}