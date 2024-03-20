// program to count number of vowels :
#include<stdio.h>
int count_vowels(){
	char in[] = " This is a toy set for programming";
	int count = 0;
	int i;
	for(i = 0; in[i]!='\0';i++){
		if(in[i]=='a'||in[i]=='e'||in[i]=='i'||in[i]=='o'||in[i]=='u'){
			count++;
		}
	}
	return count;
}
int main(){
	int result = count_vowels();
	printf("%d\n",result);
	return 0;
}
