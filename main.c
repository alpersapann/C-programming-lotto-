#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, tutturma=0, para;
    int tahmin[6];
    int loto[6];

    printf("1-30 arasinda 1 ve 30 dahil 6 farkli sayi giriniz: \n");
    for(i=0; i<6; i++){
        printf("%d. sayiyi giriniz: ", i+1);
        scanf("%d", &tahmin[i]);
        printf("\n");
        if(tahmin[i]> 30){
                printf("30'dan buyuk sayi girdin. APTAL\n");
                return 0;
                }
            for(j=0; j<i; j++){
                if(tahmin [i]==tahmin [j]){
                    printf("Ayný sayiyi girdiniz %d. sayiyi tekrar giriniz.\n", i+1);
                    scanf("%d", &tahmin[i]);
                }
            }
    }
    srand(time(0));

    for(i = 0; i < 6; i++){
        (loto[i]=rand() % 31 + 1);
        for(j=0; j<i; j++){
            if(loto[i]==loto[j]){
                (loto[i]=rand() % 31 + 1);
            }
        }
    }
    for(i=0; i<6; i++){
        printf("Sayisal loto sansli sayilarimiz : %2d \n", loto[i]);
    }
    for(i=0; i<6; i++){
        if(loto[i]==tahmin[i]){
            tutturma++;
        }
    }
    printf("%d sayi tutturdunuz. \n\n", tutturma);
    switch(tutturma){
        case 1:
            printf("Amorti 10 TL kazandiniz.\n");
            break;
        case 2:
            printf("20 TL kazandiniz.\n");
            break;
        case 3:
            printf("5000 TL kazandiniz.\n");
            break;
        case 4:
            printf("15 000 TL kazandiniz.\n");
            break;
        case 5:
            printf("250 000 TL kazandiniz.\n");
            break;
        case 6:
            printf("1 milyon TL kazandiniz.\n");
            break;
        default:
            printf("*****KAYBETTINIZ*****\n");
    }
    return 0;
}
