// take string as input from user:
#include<stdio.h>
int main(){
	char v[100];
	printf("enter string as input:");
//	scanf("%s\n",v);	// scanf not work for space seprated string for that puts function used
	scanf("%[^\n]s\n",v); // it instruct compiler to store string until new line encounter
	printf("%s",v);
	return 0;
	
}
