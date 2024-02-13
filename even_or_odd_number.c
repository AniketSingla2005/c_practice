#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to check:");
    scanf("%d",&n);
    if ((n%2) == 0) {
        printf("%d is an even number",n);
    }
    else {
        printf("%d is an odd number",n);
    }
}