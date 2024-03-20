// C strcat(first, second)  : it add two strign and sotr result in first variable.
#include<stdio.h>
#include<string.h>

void main(){
	char A[6] = {'s','w','a','t','i'};
	char B[20] = {'O','\0'};
	strcat(A,B);
	printf("%s\n",A);
}
