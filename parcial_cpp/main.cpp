#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int i, consumo, acumClientes, acumConsumo;
    string nombre;
    char tipoCliente;

    i = 0;
    acumClientes = 0;
    acumConsumo = 0;

    while(i < 4){
        cout << "Digite su nombre \n";
        cin.ignore();
        getline(cin, nombre);
        cout << nombre + "\n";
        cout <<"Ingrese su consumo en metros cubicos \n";
        cin >> consumo;
        if(consumo <= 0){
            cout << "Consumos de 0 o menores no son validos \n";
            continue;
        }
        cout << "Digite la letra R si es tipo de cliente Residencial o la letra C si es tipo de cliente Comercial \n";
        cin >> tipoCliente;
        tipoCliente = tolower(tipoCliente);
        switch (tipoCliente) {
            case 'r':
                consumo *= 1600;
                acumClientes++;
                cout << "Señor/a " + nombre + " dado su estatus de Cliente Residencial, el monto a pagar este mes es de: $" + to_string(consumo) + "\n";
                break;
            case 'c':
                consumo *= 4000;
                cout << "Señor/a " + nombre + " dado su estatus de Cliente Comercial, el monto a pagar este mes es de: $" + to_string(consumo) + "\n";
                break;
            default:
                cout << "Opción invalida! \n";
                continue;
        }
        acumConsumo = acumConsumo + consumo;
        i += 1;
    }
    cout <<"Se han facturado: " + to_string(acumClientes) + " de tipo residencial, en total se han pagado: $" + to_string(acumConsumo);


    return 0;
}
