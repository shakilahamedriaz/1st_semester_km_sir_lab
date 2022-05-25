#include <stdio.h>
int main(){

int n;
printf("Enter a number : \n");
scanf("%d",&n);

if(n%2==0){
    printf("NUMBER IS EVEN\n",n);
}
if(n%2!=0){
    printf("NUMBER IS ODD\n",n);
}


return 0;
}
