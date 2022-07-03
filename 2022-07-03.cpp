#include <stdio.h>

int main() {

    //시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
    int a;
    scanf("%d", &a);
    if (100 >= a && a >= 90)
    {
        printf("A");
    }
    else if (89 >= a && a >= 80)
    {
        printf("B");
    }
    else if (79 >= a && a >= 70)
    {
        printf("C");
    }
    else if (69 >= a && a >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }







    return 0;
}