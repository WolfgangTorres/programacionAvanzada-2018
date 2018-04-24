#include <stdio.h>

typedef struct d{
    unsigned day:5;
    unsigned moth:4;
    unsigned year;
    unsigned flag:5;
} Date;

#define LEAP_MASK 0b100000
#define PRIME_MASK 0b00100


int main()
{
    Date today = {23,4,2018};

    printf("Size of date %d\n",sizeof(today));
    printf("date: %d %d %d\n",today.day,today.moth,today.year);
    printf("Check today is 23\n");
    if(today.day ^23)
    {
        printf("no, today is not 23\n");
    }
    else
    {
        printf("yes, today is 23\n");
    }

    today.flag = 0b11010;
    if((today.flag & (LEAP_MASK | PRIME_MASK)) != 0)
    {
        printf("Year is leap or is prime\n");
    }

    return 0;
}