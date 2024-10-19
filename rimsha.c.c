#include<stdio.h>
#include<string.h>
int main(){ 
   char input[16]="abc,d";
   p= strtok(input, ",");
   if (p) printf("%s",p);
   p = strtok(NULL,",");
   if (p) printf("%s",p);
   return 0;
}
   


