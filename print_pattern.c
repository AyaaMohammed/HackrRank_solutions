#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x = 0;  
    int n , z;
    scanf("%d",&n);   
    z=n+n-1;    
   int y = z-1; 
    int arr[z][z];
    while(n!=0){
    for(int i=x ;i<=y ;i++){
        for(int j=x;j<=y ;j++){
            if(i==x || i==y || j==x || j==y){
            arr[i][j]=n;
            }
        }
        
       
    }
     n--;
     y--;
     x++;
    }
    for(int i=0 ;i<z ;i++){
        for(int j=0;j<z ;j++){            
            printf("%d ",arr[i][j]);          
        }
        printf("\n");        
    }
    
    
    
}