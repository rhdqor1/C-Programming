#include <stdio.h>

int main() {

    //���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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