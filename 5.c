#include <stdio.h>
int main() {
    int num, count=0,i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: \n%d", num,count);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
            count++;
            //printf("%d",count);
        }
    }
    return 0;
}
