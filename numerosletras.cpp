#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para convertir números a letras (para números del 1 al 999,999)
string NumeroALetras(int num) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    
    if(num == 0) return "cero";
    if(num < 10) return unidades[num];
    if(num < 100) return decenas[num / 10] + (num % 10 != 0 ? " y " + unidades[num % 10] : "");
    if(num < 1000) return centenas[num / 100] + (num % 100 != 0 ? " " + NumeroALetras(num % 100) : "");
    
    string miles = NumeroALetras(num / 1000) + " mil";
    string resto = NumeroALetras(num % 1000);
    if(resto != "cero") {
        miles += " " + resto;
    }
    
    return miles;
}

void GenerarNumerosAleatorios() {
    srand(time(0)); // Semilla para los números aleatorios
    
    for (int i = 0; i < 100; ++i) {
        int numero = rand() % 999999 + 1; // Genera un número entre 1 y 999999
        cout << "Número: " << numero << " - En letras: " << NumeroALetras(numero) << endl;
    }
}

int main() {
    GenerarNumerosAleatorios();
    return 0;
}
