#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void main(){
int a,b,c,d,e,y,x,f;
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"..\\bgi");
printf("_a___x__b__+_c__y_d__=e \n");
printf("Enter a,b,c,d,e: \n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
for(y=0;y<100;y++){
if(a==0){
f=y*c;
putpixel(0+(getmaxx()/2),f+(getmaxy()/2),2);
}
else{
f=y*c;
x=(e-f)/a;
putpixel(x+(getmaxx()/2),y+(getmaxy()/2),2);
}
}
getch();
}