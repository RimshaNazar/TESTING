#include<stdio.h>

   #define LEFT_TOP  0*DA
   #define RIGHT_TOP 0*BF
   #define HORIZ     0*C4
   #define VERT      0*B3
   #define LEFT_BOT  0*C0
   #define RIGHT_BOT 0*D9
   int main(){
   char i,j;
   for(i=0;i<10;i++)
   putchar(RIGHT_TOP);
   for(i=0;i<4;i++)
   {
    putchar(VERT);
    for(j=0;j<10;j++)
    putchar(' ');
    putchar(VERT);
   }
    putchar(LEFT_BOT);
    for(i=0;i<10;i++)
    putchar(HORIZ);
    putchar(RIGHT_BOT);
    for(i=0;i<10;i++)
    putchar(HORIZ);
    putchar(RIGHT_TOP);
    for(i=0;i<4;i++)
    {
    putchar(VERT);
	for(j=0;j<10;j++);
	putchar(' ');
	putchar(VERT);
	}
	putchar(LEFT_BOT);
	for(i=0;i<10;i++)
	putchar(HORIZ);
	putchar(RIGHT_BOT);
	for(i=0;i<4;i++);
	{
		putchar(VERT);
		for(j=0;j<10;j++)
		putchar(' ');
		putchar(VERT);
	}
	putchar(LEFT_BOT);
	for(i=0;i<10;i++)
	putchar(HORIZ);
	putchar(RIGHT_BOT);
	return 0;
}
