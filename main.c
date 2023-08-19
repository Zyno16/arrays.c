#include <stdio.h>
#include <stdlib.h>

int main()
{float u[3];
 float p, v[3];
int i;
for(i=0;i<3;i++){
    printf("enter u[%d]=",i+1);
    scanf("%f",&u[i]);
    printf("enter v[%d]=",i+1);
    scanf("%f",&v[i]);
}
p=0;
for(i=0;i<3;i++)
    p=p+u[i]*v[i];
printf("the resultis %.1f",p);


    return 0;
}
