#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
	
    int n;
    scanf("%d", &n);
    int z=0 ;
    //Complete the code to calculate the sum of the five digits on n.
    for( ;n>0;n/=10){
       z=z+n%10;
    }
	printf("%d",z);
    return 0;
}