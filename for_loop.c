#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.  
     char n;
     char *aya[50] ={"one","two","three","four","five","six","seven","eight","nine"};
     for(n=a;n<=b;n++){
         if(n<=9){
             printf("%s\n",aya[n-1]);
         }
         if(n>9 && n%2==0){
             printf("even\n");
         }
         else if(n>9 && n%2!=0){
             printf("odd\n");
         }
     }
    return 0;
}

