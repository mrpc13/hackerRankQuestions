#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<=1){
        printf("Shape Not Possible");
    }
    if(n>=2){
        for(int i = 1; i<=n ; i++ ){
            for(int j = 1 ; j<=i ; j++){
                if(j==1 || j==i || i==1)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
            
        }
        for(int i = 2; i<=n ; i++ ){
            for(int j = 1 ; j<=n-i+1 ; j++){
               if(j==1 || j==n-i+1)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
            
        }
    }
    

 return 0;
}
