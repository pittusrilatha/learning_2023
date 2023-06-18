1. Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator

    #include <stdio.h>
    int main() {
    int Num1,Num2;
    scanf("%d%d",&Num1,&Num2);
    if(Num1>Num2)
        printf("%d",Num1);
    else
        printf("%d",Num2);
    return 0;
    }


#include <stdio.h>
int main() {
  int Num1,Num2;
  scanf("%d%d",&Num1,&Num2);
   Num1>Num2? printf("%d",Num1):printf("%d",Num2);
}