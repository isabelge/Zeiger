## Zeiger

Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;   // Pointer
    int& r = x;    // Referenz

    cout << "x   = " << x << endl;
    cout << "&x  = " << &x << endl;

    cout << "p   = " << p << " (Adresse von x)" << endl;
    cout << "*p  = " << *p << " (Wert an Adresse)" << endl;

    cout << "r   = " << r << " (Alias von x)" << endl;
    cout << "&r  = " << &r << " (Adresse von x, identisch!)" << endl;

    return 0;
}
```
### Aufgabe 1

1. Erstelle eine int-Variable mit dem Wert 10. 
2. Erstelle einen Pointer, der auf diese Variable zeigt. 
3. Erstelle eine Referenz auf die gleiche Variable. 
4. Ändere den Wert mit: 
   - der normalen Variable, 
   - dem Pointer (mit *), 
   - und der Referenz. 
5. Gib nach jedem Schritt den Wert der Variable, der Referenz und die Adresse des Pointers aus.

### Aufgabe 2
Schreibe zwei Funktionen:
```cpp
// setze den Wert auf 99 über einen Zeiger
void changeByPointer(int* x)
```
 
```cpp
// setze den Wert auf 77 über eine Referenz
void changeByReference(int& x) 
```

Teste die beiden Funktionen in aufgabe2() mit einer Variable und gib nach jedem Funktionsaufruf den Wert aus.

### Aufgabe 3

1. Erstelle ein Array int arr[5] = {1, 2, 3, 4, 5}; 
2. Schreibe eine Funktion printArrayWithPointer(int* arr, int size), die das Array über einen Zeiger ausgibt. 
3. Schreibe eine Funktion printArrayWithReference(int (&arr)[5]), die das Array über eine Referenz ausgibt. 
4. Rufe beide Funktionen in aufgabe3() auf. 
5. Verändere in aufgabe3() einen Wert im Array über den Pointer und zeige, dass die Änderung auch bei der Referenz sichtbar ist.