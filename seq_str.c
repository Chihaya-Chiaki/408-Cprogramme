#include <stdio.h>

int main(){
    int a,b;
    float c;
    a=b=c=5.2;

//printf("%d\t%d\t%d\n",a,b,c);
printf("%d\t%d\t%d\n",a,b,(int)c);
//printf("%f\t%f\t%f\n",a,b,c);
printf("%f\t%f\t%f\n",(float)a,(float)b,c);

    return 0;
}