// use gets() for user input :
/*  pros: it can take spcae also as a input. 
cons : it keep reading the characters untile new line encounter therfore it cause overflow
		it never conside the size of array */
#include<stdio.h>
void main(){
	char s[5];
	printf("Enter a string:");
	gets(s);
	printf("%s\n",s);
}

