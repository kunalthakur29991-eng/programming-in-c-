/* Experiment 2: operators 
4. ? Write a program to find the roots of the 
quadratic equations. */ 
#include<stdio.h> 
#include<math.h> 
int main() 
{ 
printf("Name-KUNAL THAKUR\nSAP ID
590028530\ncourse-BSC-CS\nBATCH-B1\n"); 
printf("\n---------------------------------------\n"); 
double a,b,c,x1,x2; 
printf("Enter the value for a and b and c"); 
scanf("%lf%lf%lf", &a,&b,&c); 
double t1=((b*b)-(4*a*c)); 
double s= sqrt(t1); 
x1=(-b+s)/(2*a); 
x2=(-b-s)/(2*a); 
printf("Root1:%lf",x1); 
printf("\nRoot2:%lf",x2) ; 
getch(); 
return 0; 
} 
