#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    // ���������� ������, �� ������ ����������������� � �������
    unsigned int variant; // 1 ��� 2 ��� 3 � �������� ��������, �� ���� �������� ����� variant
    int N;
    int n;
    double start, delta, x;


    // �������� �������� ����� variant
    // ��� ������ ������������ ������� ���������� �������� ��������
    // �� ��������� ����� while()
    printf("Enter variant (1 or 2 or 3): ");
    scanf("%u", &variant); //

    // �������� �������� �������, ���� ������� �������� �� ������� ���� ������ � �����
    // ���� ������� �������� ����� 3 ��� ����� 1.
    while( variant !=1  &&   variant !=2  &&   variant !=3  ){
        printf("ERROR. Invalid data\n");
        printf("Enter variant (1 or 2 or 3): ");
        scanf("%u", &variant);
    }



    printf("\n\nEnter N (N>=0): ");  // N = 0 -- exit;   N == 1 -- one row; N>1 --- ok
    scanf("%d", &N);

    while( N<0 ){
         printf("!!!!   N must be >= 0 !!!! \n");
         printf("N=");
         scanf("%d", &N);
    }


    if( N == 0 ){
         printf("\n\nBye-Bye!!!");  // ��������� �����������
         getch();                   // ������� ���������� ����-��� ������ ����� ������� �� ��������
         exit(0);                   // ���������� ��������
    }
    else{

         // �������� �������� ������� �������� ������� ��������� x
         printf("\n\nstart=");
         scanf("%lf", &start);

         // �������� �������� ���������. delta - ������ ���������
         // ���� delta=0 --> �������� �������� delta
         do{
            printf("delta=");
            scanf("%lf", &delta);
         }while( delta==0.0 && N>1  );


         if(N==1){
             // �������� ���� ����� ������� � ������ ��������
             system("cls"); // �������� ������ ���������� ���� �� ��������� ������
             printf("Only one row \n"); // ����������� �����������, �� �� ����� �������, ���� � ������� ����� ���� �����
             printf("start=%.2lf\n", start);
             printf("+-----+---------------+");
             printf("\n");
             printf("|%5d|%15.2lf|", N, start*start );
             printf("\n");
             printf("+-----+---------------+");
         }
         else{
             // �������� ������ �������
             system("cls");   // �������� ������ ���������� ���� �� ��������� ������
             printf("start=%.2lf\n", start); // �������� �������� ��� ����� ��������� �������
             printf("+-----+---------------+\n");

             x = start;

             // ��������� �������
             for( n=1; n<=N ; n++ ){
                // printf("\n");
                printf("|%5d|%15.2lf|", n, x*x );
                printf("\n");
                printf("+-----+---------------+");
                printf("\n");
                x = x + delta;

                // �������� ��������� ���� ����, �� ���� ���������� �� �����
                // ������� ������ ������� �� 11 �����. ��� ���������� ���������
                // ����� ��������� ����-��� ������ �� ��������
                if( n%11 == 0){
                    printf("Press any key\r");
                    getch();
                }
             }
         }
    }

    return 0;
}
