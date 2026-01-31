#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("一つ目の数字: ");
    scanf("%d", &num1);

    printf("second nummber: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n%d + %d = %d\n", num1, num2, sum);

    return 0;
}
