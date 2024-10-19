#include<stdio.h>
#include<string.h>
int main(){
	char string[15];
	char *ptr,c='r';
	strcpy(string,"This is a sting");
	ptr= strchr(string,c);
	if(ptr)
	printf("The character %c is at position %d",c,ptr-string);
	printf("The chacacter was not found");
	return 0;
}
