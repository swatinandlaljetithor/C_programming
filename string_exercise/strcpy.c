// strcpy(destination , source) : it copies source string in desination.
#include<stdio.h>
#include<string.h>
void main(){
	char a[6] = "swati";
	char b[6];
	printf("string is copying from source variable:");
	strcpy(b,a);
	printf("%s\n",b);
	return 0;
}
