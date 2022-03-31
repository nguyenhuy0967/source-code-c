#include<iostream>
#include<stdio.h>
#include<string.h>

void nhapChuoi(char *s)
{
	printf("\nNHap chuoi :");
	gets(s);
}
bool checkNguyenam(char c)
{
    return c=='a'||c=='u'||c=='e'||c=='o'||c=='i'||c=='A'||c=='U'||c=='E'|c=='I'||c=='O';
}
bool checkPhuam(char *s,char a)
{
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(!checkNguyenam(s[i]) && a>='a'&&a<='z'&&a>='A'&&a<='Z')
			return true;	
	}
	return false;
}
int demPhuam(char *s)
{
	int i;
	int dem=0;
	for(i=0;i<strlen(s);i++)
	{
		if(checkPhuam(s,s[i])==true)
			dem++;
	}
	return dem;
}
void hienthi(char *s)
{
	printf("\nSo phu am trong chuoi =%d ",demPhuam(s));
}
main()
{
	char s[100];
	nhapChuoi(s);
	hienthi(s);
    system("pause");
}
