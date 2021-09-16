#include <stdio.h>

/*autor: Beatriz Lima
  ano: 2021
  disciplína: AlgProg2*/

/*Faça um programa que leia um vetor A[100].
No final, mostre todas as posições do vetor que armazenam
um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.*/

int main()
{
    double a[100];
    int i;

    for(i = 0; i <= 99; i++)
        scanf("%lf", &a[i]);

    for(i = 0; i <= 99; i++)
    {
        if(a[i] <= 10.0)
            printf("A[%d] = %.1lf\n", i, a[i]);
    }
    return 0;
}
