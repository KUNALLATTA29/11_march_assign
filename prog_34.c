#include<stdio.h>
int main(){

printf("enter two values: ");
int sta, end;
scanf("%d %d",&sta,&end);

for(int i=sta;i<=end;i++){
    for(int j=1;j<=10;j++){
        printf("%d ",i*j);
    }
    printf("\n");
}
return 0;

  
}
