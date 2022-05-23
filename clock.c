#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int hour, min, sec;
    int x = 1000;
    printf("Set your Clock : \n ");
    scanf(" %d%d%d", &hour, &min, &sec);
   

    if (hour >= 12 || min >= 60 || sec >= 60)
    {
        printf("error");
        exit(0);
    }

    while (1)
    {
        sec++;
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        if (min > 59)
        {
            hour++;
            min = 0;
        }
        if (hour > 12)
        {
            hour = 1;
        }
        printf("ClocK : \n");
        printf("   %02d : %02d : %02d ", hour, min, sec);
         sleep(1);
        system("cls");
    }
   // return 0;
}