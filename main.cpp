// Rafael Avila Hernandez, rafaelavila123, 801-24-4941

#include<iostream>
using namespace std;

int main(){
  // Desplegar el propósito del programa
    cout << "Este programa suma dos fracciones.\n";
  cout << "Pondra los numeradores y denominadores de las fracciones y se sumaran.\n";
    cout << "Los denominadores no pueden ser cero.\n\n";
  int num1, den1, num2, den2;
    
    // Pedir al usuario los numeradores y denominadores de las dos fracciones
    cout << "Introduce el numerador de la primera fracción: ";
    cin >> num1;
    cout << "Introduce el denominador de la primera fracción: ";
    cin >> den1;

    cout << "Introduce el numerador de la segunda fracción: ";
    cin >> num2;
    cout << "Introduce el denominador de la segunda fracción: ";
    cin >> den2;

    // Verificar que los denominadores no sean cero
    if (den1 == 0 || den2 == 0) {
        cout << "El denominador no puede ser cero." << endl;
        return 1;
    }

    // Calcular el denominador común (en este caso, el producto de los denominadores)
    int denominador_comun = den1 * den2;

    // Calcular los numeradores equivalentes
    int numerador_resultante = num1 * den2 + num2 * den1;

    // Mostrar el resultado
    cout << "La suma de las fracciones es: " 
         << numerador_resultante << "/" << denominador_comun << endl;

  
  return 0;
}
