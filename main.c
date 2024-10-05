#include <stdio.h>
#include <stdlib.h>
int main (){
    int n,m;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("enter the value of m :");
    scanf("%d",&m);
    if (n == 0 || m == 0){
        printf("the product is null");
    }
    if (n*m <= 0){
        printf("the product is negatif");
    }if (n*m >= 0){
    printf("the product is positif");
    }
    return 0;
}
