#include <stdio.h>

int Purchase(int price)
{
    int cream = 500, shrimp = 700, cola = 400;
    for (int c = 1; c <= price / cream; c++)
    {
        for (int s = 1; s <= price / shrimp; s++)
        {
            for (int l = 1; l <= price / cola; l++)
            {
                int total = c * cream + s * shrimp + l * cola;
                if (total == price) {
                    printf("ũ���� %d��, ����� %d��, �ݶ� %d�� \n", c, s, l);
                }
            }
        }
    }
    printf("��� �����Ͻðڽ��ϱ�? \n");
    return 0;
}

int main(void)
{
    int price;
    printf("���� ����� �����ϰ� �ִ� �ݾ� : ");
    scanf_s("%d", &price);
    Purchase(price);
}