#include <iostream>
using namespace std;
//define el vector 
const string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve","diez"};
const string decenas[] = {"", "diez", "veinte ", "treinta", "cuarenta", "cincuenta", "setenta","ochenta", "noventa"};
const string centenas[] = {" ","cien","doscientos","trescientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos","novecientos"};      
string GetUnidades(int num)    
{
return unidades[num];
}


int main ()
{
 int num= 10;
 string Resultado=GetUnidades(num);
 cout<<endl<<""

}