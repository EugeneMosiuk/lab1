#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int main()
    {

    unsigned int variant;
    unsigned int ent;
    unsigned int N;
    double x1, x2, f, delta;
    int q,w,e=1, rows=0;
    printf("Enter variant (1 or 2):\n");
    scanf("%u", &variant);

        while( variant !=1  &&   variant !=2 ){
    printf("ERROR. Invalid data\n");
    printf("Enter variant (1 or 2 ):\n");
    scanf("%u", &variant);
    }

        if(variant==1)
    {
    printf("vedit pochatkovyi argument:\n");
    scanf("%lf", &x1);
    printf("vedit kincevyi argument:\n");
    scanf("%lf", &x2);
    printf("klk tochok:\n");
    scanf("%u", &N);
    for(int i=0; i<50; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("*%4s *%10s %10s %11s %10s","N","X","*", "F(x)","*\n");
    for(int i=0; i<50; i++)
    {
        printf("*");
    }
    printf("\n");

    delta=(x2-x1)/N;
    for(e=1;e<=N;e++)
    {
        f=x1/5;
        printf("|%4d|%20.1lf |%20.4lf |\n",e,x1,f);
        x1+=delta;
        if(e%10==0 && e<N)
            {
                COORD c;
                c.X = 0;
                c.Y = e+11;
                printf("press any key to continue\n");
                getch();
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

            }
            if(e==N){
                printf("kinec tablyci\n");
                    rows = e+12;
            }

    }
        printf("hochete sbrobuvaty 2 variant?\n natysnit 2\n");
    scanf("%u", &variant); //

        while(variant !=2 ){
        return 0;
    }

    }

         if(variant==2)
    {
    printf("vedit pochatkovyi argument:\n");
    scanf("%lf", &x1);
    printf("vedit kincevyi argument:\n");
    scanf("%lf", &x2);
    printf("vkazit krok:\n");
    scanf("%lf", &delta);
    for(int i=0; i<50; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("*%4s *%10s %10s %11s %10s","N","X","*", "F(x)","*\n");
    for(int i=0; i<50; i++)
    {
        printf("*");
    }
    printf("\n");

    for(e=1;x1<=x2;e++)
    {
        f=x1/5;
        printf("|%4d|%20.1lf |%20.1lf |\n",e,x1,f);
        x1=x1+delta;
        if(e%10==0)
            {
                COORD c;
                c.X = 0;
                c.Y = e+11+rows;
                printf("press any key to continue\n");
                getch();
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

            }
    }
    printf("kinec tablyci\n");
    }


return 0;
}
