#include <stdio.h>
int main()
{
    int detik , menit , jam , hari, X;

    printf("input\n");
    scanf("%d",&detik);

    menit = (detik % 3600)/60;
    jam = (detik%(24 * 3600))/3600;
    hari = detik/(24 * 3600);
    X = detik % 60;

    if (hari>0)
    {
        printf("\nOutput \n%d hari %02d:%02d:%02d", hari, jam, menit, X);
    }
    else{
        printf("\nOutput \n %02d:%02d:%02d", jam, menit , X);
    }

    return 0;
}