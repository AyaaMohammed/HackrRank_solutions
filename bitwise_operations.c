#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
    int and , or , xor;
    int MaxAnd = 0, MaxOr = 0 , MaxXor =0;
  for(int i = 1 ;i<=k ;i++ ){
      for(int j =i+1 ;j<=n;j++){
          and = i & j;
          or  = i | j;
          xor = i ^ j;     
      
      if(and>MaxAnd && and<k){
          MaxAnd =and;
         
      }
      if(or>MaxOr && or<k){
            MaxOr =or;
           
      }
      if(xor>MaxXor && xor<k){
          MaxXor =xor;
          
      }
      }
  }
  printf("%d\n%d\n%d",MaxAnd,MaxOr,MaxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
