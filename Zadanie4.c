#include <stdio.h>

// Pobierz od użytkownika 20 liczb całkowitych i zapisz je do tablicy. 
// Wyświetl na ekranie co trzeci element zaczynając od końca tablicy

int main(int argc, char** argv){
    int tablica[20]; //= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for(int indeks = 0; indeks < 20; indeks++){
        printf("podaj liczbe %d z 20\n", indeks + 1);
        scanf("%d", &tablica[indeks]);
    }

    for(int indeks = 20 - 1; indeks > 0; indeks = indeks - 3){
        printf("liczba %d: %d\n", indeks + 1, tablica[indeks]);
    }

    return 0;
}