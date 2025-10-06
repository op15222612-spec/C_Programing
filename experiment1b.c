1 #include<stdio.h>
2
3 int main()
4{
5
int physics;
6
printf("enter your marks");
7
scanf("%d", &physics);
8
9
int math;
10
printf("enter your marks");
11
scanf("%d",&math);
12
13
int chemistry;
14
printf("enter your marks");
15
scanf("%d", &chemistry);
16
int sum;
17
18
float avg;
19
20
sum = physics math + chemistry;
avg (float)sum/3;
21
printf("sum is %d \n avg is %f \n", sum, avg);
22
23
1f (avg >= 50) {
24
printf("\n you are eligible to admission.");
25
else {
26
printf("\n you are not eligible to admission.");
27
}
28
29
30
return 0;
31
32}
