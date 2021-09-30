#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n1,n2,temp;
    scanf("%d %d", &n1,&n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("%d %d", n1,n2);
    
    return 0;
}
