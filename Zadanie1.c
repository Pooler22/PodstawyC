#include <stdio.h>

// Napisz program obliczający pole trójkąta.
// Długość boku oraz wysokość pobierz od użytkownika (długośći te powinny być liczbą zmiennoprzecinkową).
// Wynik wyświetl z dokładnością do 3 liczb po przecinku.


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