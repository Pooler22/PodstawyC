#include <stdio.h>

// Napisz program pobierający od użytkownika liczbe liczb, 
// które chce wprowadzić, 
// a następnie po kolei te liczby oblicz i wyświetl na ekranie średnią tych liczb.

int main(int argc, char** argv){
    int liczbaLiczb, liczba, suma; //zadeklatowanie zmiennych bez przecinka
    float srednia; //zadeklatowanie zmiennych z przecinkiem

    printf("podaj liczbe liczb\n"); // wyswietla komunikat 
    scanf("%d", &liczbaLiczb); // pobiera dane od uzytkownika i zapisuje do zmiennej liczbaLiczb

    for(int indeks = 0; indeks < liczbaLiczb; indeks++){ // pętla wykonuje sie tyle razy ile wynosi wartosc licznyLiczb
        printf("podaj liczbe\n");  // wyswietla komunikat
        scanf("%d", &liczba); // pobiera dane od uzytkownika i zapisuje do zmiennej liczba
        suma = suma + liczba; // sumuje podana liczbe w zmiennej suma 
    }

    srednia = (float) suma  / liczbaLiczb; // oblicza srednia i rzutuje na typ zmiennoprzecinkowy
    printf("suma %d\n", suma); // wyswietla komunikat
    printf("srednia %f\n", srednia); // wyswietla komunikat

    return 0;
}