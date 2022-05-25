#include <Stdio.h>
int main(){

int marks;
printf("Enter a marks of a Course :  \n");
scanf("%d",&marks);

if(marks >=0 && marks <=100){

    if(marks>=80 && marks <=100){
        printf("Grade A+\n");
        printf("Grade point 4.00\n");
    }
    else if(marks>=75 && marks <=79){
        printf("Grade A\n");
        printf("Grade point 3.75\n");
    }
    else if(marks >=70 && marks <=74){
        printf("Grade A-\n");
        printf("Grade point 3.50\n");
    }
    else if(marks >=65 && marks <=69){
        printf("Grade B+\n");
        printf("Grade point 3.25\n");
    }
    else if(marks >=60 && marks <=64){
        printf("Grade B\n");
        printf("Grade point 3.00\n");
    }
    else if(marks >=55 && marks <=59){
        printf("Grade B-\n");
        printf("Grade point 2.75\n");
    }
    else if(marks >=50 && marks <=54){
        printf("Grade C+\n");
        printf("Grade point 2.50\n");
    }
    else if(marks >=45 && marks <=49){
        printf("Grade C\n");
        printf("Grade point 2.25\n");
    }
}
else
    printf("Enter a valid marks.\n");

return 0;
}
