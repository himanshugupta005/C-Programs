#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    scanf("%c",&ch);
    int n1,n2,s=0;
    scanf("%d %d", &n1,&n2);
    switch(ch)
    {
            
        case'+':
            s=n1+n2;
            printf("%d",s);
            break;
        case'-':
            s=n1-n2;
            printf("%d",s);
            break;
        case'*':
            s=n1*n2;
            printf("%d",s);
            break;
        case'/':
            s=n1/n2;
            printf("%d",s);
            break;
        case'%':
            s=n1%n2;
            printf("%d",s);
            break;
            
    return 0;
}
}
