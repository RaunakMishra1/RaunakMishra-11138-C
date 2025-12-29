#include<stdio.h>

int main()
{
    int n;
    int hours = 0, minutes = 0, seconds = 0;

    printf("Enter time in seconds: ");
    scanf("%d", &n);

    while(n > 0)
    {
        seconds++;

        if(seconds == 60)
        {
            minutes++;
            seconds = 0;
        }

        if(minutes == 60)
        {
            hours++;
            minutes = 0;
        }

        n--;
    }

    printf("Time = %d hours %d minutes %d seconds\n", hours, minutes, seconds);
    return 0;
}
