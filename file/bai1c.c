//luu tep ,đọc tệp và tính trung bình cộng các số chẵn trong tệp
#include<iostream>
#include<stdio.h>

void nhapMang(int *arr,int *n)
{
    printf("Nhap so luong mang :");
    scanf("%d",n);
    int i;
    for(i=0;i<*n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void ghiTep(int *arr,int n)
{
    FILE *f;
    int i;
    f=fopen("sovtchan.txt","w");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            fprintf(f,"   %d",arr[i]);
        }
    }
    fclose(f);
}
int docTep()
{
    FILE *f;
    int sum,dem,a,b;
    f=fopen("sovtchan.txt","r");
    sum=0;
    dem=0;
    do
    {
        a=fscanf(f,"%d",&b);
        if(a!=EOF)
        {
            sum+=b;
            dem++;
        }
    }while(a!=EOF);
    return (float)(sum/dem);
    fclose(f);
}
main()
{
    int arr[100],n;
    nhapMang(arr,&n);
    ghiTep(arr,n);
    float a=docTep();
    printf("Trung binh cong cac so trong tep la: %0.3f\n",a);
    system("pause");
}