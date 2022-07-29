#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *strings[1000];
    char *queries[1000];
    int n1;
    
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
         char copy[50];
         scanf("%s",copy);
         strings[i]=malloc(30);
         strcpy(strings[i],copy);
    }
    int n2;
    scanf("%d",&n2);
     for(int i=0;i<n2;i++){
         char copy[50];
         scanf("%s",copy);
         queries[i]=malloc(30);
         strcpy(queries[i],copy);
    }
    int sum ;
    for(int i =0;i<n2;i++){
        sum=0;
        for(int j=0;j<n1;j++){
            if(!(strcmp(queries[i], strings[j]))){
                sum +=1;
            }
        }
            printf("%d \n",sum);
           
       
    }
    
}
