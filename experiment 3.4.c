/*3.4. WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are 
collinear or not.*/ 
#include <stdio.h> 
int main()  
{ 
printf("Name-Kunal Thakur \nSAP ID-590028530\ncourse-BSc
CS\nBATCH-B1\n");  
printf("\n--------------------------------\n"); 
int x1, y1, x2, y2, x3, y3; 
int area; 
printf("Enter coordinates of first point (x1 y1): "); 
scanf("%d %d", &x1, &y1); 
printf("Enter coordinates of second point (x2 y2): "); 
scanf("%d %d", &x2, &y2); 
printf("Enter coordinates of third point (x3 y3): "); 
scanf("%d %d", &x3, &y3); 
area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2); 
if (area == 0) 
printf("The points are collinear.\n"); 
else  
printf("The points are not collinear.\n"); 
getch(); 
return 0; 
} 
