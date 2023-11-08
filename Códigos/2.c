#include <stdio.h>
#include <string.h>
    int main(int argc, char const *argv[])
    {

    char time1 [30];
    char time2 [30];
    float forca, forca1;
    char time [12][30];
    char time_a [12][30];
    char posicao [11];
    char posicao1 [11];
    float calculo = 0, calculo1 = 0;

    scanf("%29[^\n]%*c", time1);

    for(int i = 0;i<11;i++){
    scanf("%29[^;]; %c; %f%*c", time[i], &posicao[i], &forca);
    calculo += 8 * (posicao[i] == 'G' ? forca : 0) + 10 * (posicao[i] == 'L' ? forca : 0) + 5 * (posicao[i] == 'Z' ? forca : 0) + 8 * (posicao[i] == 'V' ? forca : 0) + 11 * (posicao[i] == 'M' ? forca : 0) + 12 * (posicao[i] == 'A' ? forca : 0);
    }

    scanf("%29[^\n]%*c", time2);

    for(int i = 0;i<11;i++){
    scanf("%29[^;]; %c; %f%*c", time_a[i], &posicao1[i], &forca1);
    calculo1 += 8 * (posicao[i] == 'G' ? forca1 : 0) + 10 * (posicao[i] == 'L' ? forca1 : 0) + 5 * (posicao[i] == 'Z' ? forca1 : 0) + 8 * (posicao[i] == 'V' ? forca1 : 0) + 11 * (posicao[i] == 'M' ? forca1 : 0) + 12 * (posicao[i] == 'A' ? forca1 : 0);
    }

forca = calculo/100;
forca1 = calculo1/100;

    printf("%s: %.2f de forca\n", time1, forca);
    printf("%s: %.2f de forca\n", time2, forca1);

    if(forca > forca1){
    printf("%s eh mais forte\n", time1);
    }

    else if(forca1 > forca){
    printf("%s eh mais forte\n", time2);
    }
    
        return 0;
    }