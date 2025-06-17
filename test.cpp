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
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", c, s, l);
                }
            }
        }
    }
    printf("어떻게 구입하시겠습니까? \n");
    return 0;
}

int main(void)
{
    int price;
    printf("현재 당신이 소유하고 있는 금액 : ");
    scanf_s("%d", &price);
    Purchase(price);
}