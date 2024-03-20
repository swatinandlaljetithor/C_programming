// find repitative words and count its occurance :

#include<stdio.h>
#include<string.h>
int rep_word_count(char* u_ip,char* sub_string){
	int num = 0,i = 0,j=0,sub_string_length = 0,u_ip_length = 0;
	int cmp_res=-1;
	char tempData[3];
	sub_string_length = strlen(sub_string);
	u_ip_length = strlen(u_ip);
	
	for (i = 0; i<=u_ip_length-3; i++)
	{
		strncpy(tempData,u_ip,3);
		
		cmp_res = strcmp(tempData,sub_string);
		if (cmp_res == 0)
		{
			num++;
		}
		u_ip++;
//		for (j = 0; j<=2; j++)
//		{
//			
//		}
	}
	return num;
//	return sub_string_length;
}
void main(){
	char string[3] = "lie";
	char user_input[10];
	fgets(&user_input,10,stdin);
//	rep_word_count(user_input,string);
	int result = rep_word_count(user_input,string);
	printf("%d\n",result);
} 
