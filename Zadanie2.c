#include <stdio.h>

// Zadeklaruj dwie zmienne typu znakowego. 
// Do pierwszej z nich przypisz dowolną wartość, do drugiej zapisz wartość pobraną od użytkownika.
// Jeśli wartość podana przez użytkownika jest taka sama jak zadeklarowana wyświetl komunikat 'BRAWO!',
// w przeciwnym wypaku wyświetl 'Nie tym razem'

int main(int argc, char** argv){
    char a = 'a', b; // deklatujemy zmienne

    printf("podawaj wartosc\n"); // wyswietla komunikat
    scanf("%c", &b); // pobiera dane i zapisuje w zmiennej b

    if(a == b) { // warunek, jezeli a jest rowne b
        printf("BRAWO!\n"); // wyswietl komunikat
    } else {
        printf("Nie tym razem\n"); // wyswietl komunikat
    }

    return 0;
}