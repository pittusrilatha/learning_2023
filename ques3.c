3. Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators

#include <stdio.h>

int sum(int a[],int size)
{
   int i,sum=0;
   for(i=0;i<size;i+=2)
   sum+=a[i];
   return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   int res=sum(arr,n);
   printf("res=%d",res);
}