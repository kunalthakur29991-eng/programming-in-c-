/*4.3.3 Different type of pattern */ 
#include <stdio.h> 
int main()  
{ 
printf("Name-Kunal Thakur \nSAP ID-
590028530\ncourse-BSc CS\nBATCH-B1\n");     
printf("\n-----------------------------------------
\n");       
int i, j, num = 1; 
for(i=1; i<=5; i++) { 
for(j=1; j<=i; j++) { 
printf("%d ", num); 
num++; 
} 
printf("\n"); 
} 
getch(); 
return 0; 
} 
