#include<stdio.h>
#include<string.h>
int main(){ 
   char *buf1="aaa",*buf2="bbb",*buf3="ccc";
   int ptr;
   ptr=strcmp(buf1,buf2);
   if(ptr>0)
   printf("buffer 2 is greater than buffer 1");
   else
   printf("buffer 2 is less than buffer 1");
   ptr=strcmp(buf2,buf3);
   if (ptr>0)
   printf("buffer 2 is greater than buffer 3");
   else
   printf("buffer 2 is less than buffer 3");
   return 0;
}
   


