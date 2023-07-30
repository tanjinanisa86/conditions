#include<stdio.h>
int main()
{
    int a=150;
    if(a%5==0&&a%2!=0&&a!=100){
        printf("divisible by 5 but not by 2 and not 100\n");
    }
    if(a%10==0||a%3==0){
        printf("divisible by 10 or divisible by 3\n\n");
    }
     if(a%15==0){
        printf("divisible by 15\n\n");
    }

}

