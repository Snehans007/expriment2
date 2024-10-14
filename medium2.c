#include <stdio.h>


void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b||a==c||b==c){
        printf("this an isosceles triangle");
    }
    else{
        printf("this not  an isosceles triangle");
    }

}

