#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

int main(){
     int n , d ;
    scanf("%d",&n);
    scanf("%d",&d);
    int * ptr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    
    while(d>0){
        int i;
        int x=ptr[0];
        for( i=0 ;i<n-1;i++){
            ptr[i]=ptr[i+1];
        }
        ptr[i]=x;
        d--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}