#include <stdio.h>
int add(int a, int b);
int subtract(int c,int d);
int main() {
    int x, y, sum, sub;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    sum = add(x,y);
    printf("SUM: %d",sum);
    sub = subtract(x,y);
    printf("subtraction: %d",sub);
    return 0;
}

int add(int a, int b) {
    int sum = a+b;
    return sum;
}

int subtract(int c,int d) {
    int subtract = c-d;
    return subtract;
}
