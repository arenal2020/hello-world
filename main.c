#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr, min, sec;

    printf("Enter the total seconds: ");
    scanf("%d", &sec);

    hr = (sec/3600);
    min = (sec - (3600*hr))/60;
    sec = (sec - (3600*hr) - (min*60));
    printf("%d, %d, %d", hr, min, sec);
    return 0;
}
