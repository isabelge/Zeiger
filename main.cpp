#include <iostream>

void aufgabe1();
void aufgabe2();
void aufgabe3();

void changeByPointer(int* x) {
    // TODO: Aufgabe 2
    // x auf 99 setzen

}

void changeByReference(int& x) {
    // TODO: Aufgabe 2
    // x auf 77 setzen
}

void printArrayWithPointer(int* arr, int size) {
    // TODO: Aufgabe 3
    // Array-Elemente mit Pointerzugriff ausgeben
}

void printArrayWithReference(int (&arr)[5]) {
    // TODO: Aufgabe 3
    // Array-Elemente mit Referenzzugriff ausgeben
}

int main() {
    int auswahl;

    std::cout <<  "Bitte Aufgabe mit Nummer waehlen:";
    std::cin >> auswahl;

    if (auswahl == 1) {
        aufgabe1();
    }else if (auswahl == 2) {
        aufgabe2();
    } else if (auswahl == 3) {
        aufgabe3;
    }

    return 0;
 }

void aufgabe1() {
    int a = 10;
    int* p = &a;
    int& r = a;

    std::cout << "Start: a = " << a << std::endl;

    // TODO: a verändern und alles ausgeben
    // TODO: *p verändern und alles ausgeben
    // TODO: r verändern und alles ausgeben

}

void aufgabe2() {
    int a = 10;

    std::cout << "Start: " << a << std::endl;

    // TODO: changeByPointer aufrufen
    // TODO: changeByReference aufrufen
}

void aufgabe3() {
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "Mit Pointer:" << std::endl;
    printArrayWithPointer(arr, 5);

    std::cout << "Mit Referenz:" << std::endl;
    printArrayWithReference(arr);

    // TODO: einen Wert im Array über Pointer ändern
    // TODO: erneut mit Referenz ausgeben
}
