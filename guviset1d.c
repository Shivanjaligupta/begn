#include<stdio.h>
void main()
{
	 char v;
	 printf("enter a character");
	 scanf("%c",&v);
	 if((v>='a' && v<='z') || (v>='A'&& v<='Z'))
	 {
	 	printf("alphabet %c",v);
	 }
	 else
	 {
	 	printf("not an alphabet %c",v);
	 }
}

