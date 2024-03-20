// Declare_string_variable :
// string is one diamensional array of character that are capable of holding string at a time.
// always make the array one character longer. make extra room for null character.

                // Here string is declare using characters;
#include<stdio.h>
int main(){
	char s[4] = {'s','w','a','t','i','j'};
	char t[4] ;
	int i;
	for(i = 0; s[i]!='\0';i++){
		t[i] = s[i];
	}
	printf("%s\n",t);
	return 0;
}                

				// Here string is declare using string: 
//#include<stdio.h>
//int main(){
//	char s[5] = "swats";
//	char t[5] ;
//	int i;
//	for(i = 0; s[i]!= '\0';i++){
//		t[i] = s[i];
//	}
//	t[i] = '\0';
//	printf("%s",t);
//	return 0;
//}
