#include <stdio.h>
#define p printf
#define PI 3.1415

void get_sum(int a, int b);
int get_sum_v2(int a, int b);

int main(void)
{
    int x, y;

    x = 10;
    y = 5;

    get_sum(x, y);

    int result;

    result = get_sum_v2(x, y);
    printf("%d + %d = %d\n", x, y, result);
    printf("The sum is %d.\n", get_sum_v2(get_sum_v2(12, 6), get_sum_v2(x, y)));

    return 0;
}

void get_sum(int a, int b) {
    int sum;

    sum = a + b;

    printf("The sum is %d.\n", sum);
}

int get_sum_v2(int a, int b) {
    int sum;

    sum = a + b;

    return sum;
}
