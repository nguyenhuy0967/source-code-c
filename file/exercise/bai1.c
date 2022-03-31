//tính tổng các số lưu trong mảng
#include<iostream>
#include<stdio.h>
 void nhapMang(int *arr,int *n)
 {
     printf("Nhap so phan tu mang :");
     scanf("%d",n);
     int i;
     for(i=0;i<*n;i++)
     {
         printf("arr[%d]= ",i);
         scanf("%d",&arr[i]);
     }
 }
 void ghiFile(int *arr,int n)
 {
     FILE *f;
     int i;
     f=fopen("songuyen.txt","w");
     for(i=0;i<n;i+=2)
         fprintf(f,"%d ",arr[i]);
     fclose(f);
 }
void docFile()
 {
     FILE *f;
     int sum,a,b;
     f=fopen("songuyen.txt","r");
     sum=0;
     do
     {
        a=fscanf(f,"%d",&b);
        if(a!=EOF)
            sum=sum+b;
     }
     while(a!=EOF); 
     fclose(f);
     printf("%d",sum);
 }
 main()
 {
     int arr[100],n;
     nhapMang(arr,&n);
     ghiFile(arr,n);
     docFile();
     system("pause");
 }