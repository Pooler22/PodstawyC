#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    float wysokosc, dlugoscPodstawy, pole; // deklatujemy zmienne

    printf("podaj wysokosc\n"); // wyswietla komunikat
    scanf("%f", &wysokosc); // pobiera dane i zapisuje w zmiennej wysokosc

    printf("podaj długość podstawy\n"); // wyswietla komunikat
    scanf("%f", &dlugoscPodstawy); // pobiera dane i zapisuje w zmiennej dlugoscPodstawy

    pole = 0.5 * dlugoscPodstawy * wysokosc; // zapis do zmiennej pole wybiku ze wzoru pola trojkata

    printf("pole %.3f\n", pole); // wyswietla komunikat
    return 0;
}