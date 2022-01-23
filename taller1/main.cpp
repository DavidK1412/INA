#include <iostream>
#include <string>

using namespace  std;

void primerEjercicio(){
    string nombre, estatura;
    int edad;

    cout << "Ingrese su nombre: \n";
    getline(cin, nombre);
    cout << "Ahora, ingrese su edad: \n";
    cin >> edad;
    cout << "Finalmente, ingrese su estatura: \n";
    getline(cin, estatura);

    cout << nombre + " " + to_string(edad) + " " + estatura;
}

void segundoEjercicio(){
    string nombre;
    char categoria;
    int sueldo;

    cout << "Ingrese el nombre: \n";
    getline(cin, nombre);
    cout << "Ahora, ingrese la categoria: \n";
    cin >> categoria;
    cout << "Finalmente, ingrese el sueldo: \n";
    cin >> sueldo;

    cout << "El empleado: " + nombre + " con categoría " + categoria + " tiene un sueldo de: $" + to_string(sueldo) + " Pesos";
}

void tercerEjercicio(){
    string placa;
    int modelo, valor;

    cout << "Ingrese la placa del vehiculo \n";
    getline(cin, placa);
    cout << "Ingrese el modelo \n";
    cin >> modelo;
    cout << "Ingrese el valor, sin puntos ni comas (ej. 10000) \n";
    cin >> valor;
    valor = valor*0.10;

    cout << "El vehículo de placas " + placa + " de modelo: " + to_string(modelo) + " tiene un impuesto vehicular de: $" + to_string(valor);
}

void cuartoEjercicio(){
    string cliente;
    int plazo, valor, cuota;

    cout << "Ingrese su nombre por favor \n";
    getline(cin, cliente);
    cout << "Ingrese el numero de meses del plazo de su credito a 2% mensual \n";
    cin >> plazo;
    cout << "Ingrese el valor, sin puntos ni comas (ej. 10000) \n";
    cin >> valor;
    cuota = (valor/plazo) + (valor * 0.02);

    cout << "El cliente " + cliente + " tiene un crédito de: $" + to_string(valor) + " diferido a un plazo de " +
            to_string(plazo) + " meses" + " pagando una cuota mensual de: $" + to_string(cuota);
}

int main() {
    //primerEjercicio();
    //segundoEjercicio();
    //tercerEjercicio();
    //cuartoEjercicio()
    return 0;
}
