/* Name: Om
UIN: 2510014
Field: Civil
Div : B*/
#include <stdio.h>
int main()
{
int num1;
int num2;
int sum=0;
printf("enter a frist number");
scanf("%d", &num1);
scanf("%d", &num2);
for(int i = num1;i<=num2;i++){
if (i%2!=0){
sum += 1;
printf ("sum is %d", sum);

}
}
return 0;
}
