#include<stdio.h>

int max(int x, int y)
{
if(x>y)
    return x;
else
    return y;
}

int main(void)
{
int a, b, m;
printf("Masukkan nilai A :"); scanf("%d", &a);
printf("Masukkan nilai B :"); scanf("%d", &b);
m=max(a,b);
printf("Nilai tertinggi: %d", m);
return 0;

}

