/*4.3.12 Different type of pattern */ 
#include <stdio.h> 
int main()  
{ 
printf("Name-Kunal Thakur \nSAP ID-
590028530\ncourse-BSc CS\nBATCH-B1\n");     
printf("\n------------------------------------------\n");  
int i, j; 
for(i=1; i<=5; i++) { 
for(j=i; j<=5; j++) { 
printf("%d", j); 
} 
printf("\n"); 
} 
getch(); 
return 0; 
} 
