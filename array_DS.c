#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;    
    scanf("%d",&n);
    int*ptr=malloc(n*sizeof(int));    
    
    for (int i=0;i<n;i++)
	{
        scanf("%d",ptr+i);  
	}
   for (int i=n-1;i >=0;i--)
   {
        printf("%d",*(ptr+i));  
   }
   free(ptr);
   ptr=NULL;
}

/*#include <stdio.h>
  
int main() {
    int n;
    int a[50];
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&a[i]);
    }
    for (int i=n-1;i>=0;i--){
        printf ("%d ",a[i]);
    }
      
    return 0;
}*/
