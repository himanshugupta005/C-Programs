#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
