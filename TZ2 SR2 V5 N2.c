#include <stdio.h>

int main(){
int x,y;
printf("Input coordinates x and y\n");
scanf("%d %d",&x,&y);
if (((x*x+y*y)>160000) || ((y>=0) && (y<(x+400)) && (y<(-x+400))) ||  ((y<0) &&(y>-200) &&(x<200) && (x>-200)))
printf("Out of range\n");
else
printf("In range\n");
 fflush(stdin);
 getchar();
}

