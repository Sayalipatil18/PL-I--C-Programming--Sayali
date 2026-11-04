//Program(11) Write a program to determine whether a given number is even or odd.
#include <stdio.h>
int main()
{
    int num;

    printf("Enter your number:");
    scanf("%d",&num);

    if(num%2==0)
  {
    printf("The number is Even.");
  }
    else
    {
    printf("The number is Odd.");
    }
    return 0;
}


//while doing such kind of programs always use not equal to first
#include<stdio.h>
int main(){
    int num;
printf("Enter your number: ");
scanf("%d", &num);

if(num%2!=0){
printf("%d is an odd number");
}
else if(num==0){
printf("%d is an even number");
}
else if(num==0){
printf("number is 0");
}
reutrn 0;
}



