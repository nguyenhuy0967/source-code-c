#include<iostream>
#include<stdio.h>
#include<string.h>

void nhapchuoi(char *s)
{
    printf("Nhap chuoi :");
    gets(s);
}
int demnguyenam(char *s)
{
    int dem=0;
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='e')
            dem++;
    }
    return dem;
}
main()
{
    char s[100];
    nhapchuoi(s);
    printf("\nSo nguyen am trong chuoi:%d",demnguyenam(s));
    system("pause");    
}