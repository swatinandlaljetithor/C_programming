// fgets() ;
// pros : it can read character less than specified limit.

#include<stdio.h>
void main(){
	char v[10];
	printf("enter the string eith spcae");
	fgets(v,10,stdin);
	printf("%s\n",v);
	return 0;
}
