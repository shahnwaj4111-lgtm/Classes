#include<stdio.h>

int main()
{
    int date = 11;
    int month = 6;
    int year = 2026;
    printf("%d/0%d/%d\n",date, month, year);
    printf("%d/0%d/%d\n", year, month, date);
}
    