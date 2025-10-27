/*Experiment 1: Installation, Environment Setup and starting with C 
Language  
4.Write a C program to perform any four arithmetic operation on 
two variable*/  
#include <stdio.h>  
#include<conio.h>  
int main()  
{  
printf("Name- anand kumar \nSAP ID – 590025459\nCourse-BSc.Cs\n");  
printf("\n--------------------------------\n");  
int length,width;//declaration  
printf("enter length = ");  
scanf("%d",&length);  
printf("enter width = ");  
scanf("%d",&width);  
int parameter=0;  
parameter = 2*( length + width );  
printf("the parameter is = %d\n", parameter);  
int area;  
area = length * width;  
printf("the area is = %d",area);  
getch();  
return 0;  
} 
 
