#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void primerEjercicio(){
    int saldo = 200000;
    int retiro;
    printf("Ingrese el valor a retirar, recuerde que su saldo es de $%d pesos (por favor, no incluya puntos o comas ej. 20000) \n", saldo);
    cin >> retiro;
    if((saldo - retiro) < 10000){
        cout << "No se pudo realizar el retiro ya que la cuenta debe tener un minimo de 10000 en saldo";
    }else{
        saldo = saldo - retiro;
        printf("Retiro exitoso, su nuevo saldo es de: %d", saldo);
    }
}

void segundoEjercicio(){
    char sexo;
    int edad;
    float pulsaciones;

    cout << "Por favor, ingrese su sexo. (En caso de ser femenino, ingrese la letra f, en caso de ser masculino, la letra m) \n";
    cin >> sexo;
    sexo = tolower(sexo);
    if(sexo != 'm' && sexo != 'f'){
        cout << "Sexo ingresado no es valido, vuelvalo a intentar. \n";
    }else{
        cout << "Ahora ingrese su edad \n";
        cin >> edad;
        if(sexo == 'm'){
            pulsaciones = (210 - edad)/10;
        }else{
            pulsaciones = (220 - edad)/10;
        }
        printf("El número de sus pulsaciones es de %f", pulsaciones);
    }
}

void tercerEjercicio(){
    float l1, l2, l3;

    cout << "Por favor, ingrese los tres lados del triángulo (cada lado seguido de un enter) \n";
    cin >> l1;
    cin >> l2;
    cin >> l3;
    if( l1 == l2 && l2 == l3 && l3 == l1){
        cout << "Es un triángulo equilátero";
    }else {
        if(l1 == l2 || l2 == l3 || l3 == l1){
            cout << "Es un triángulo isósceles";
        }else{
            cout << "Es un triángulo escaleno";
        }
    }
}

void cuartoEjercicio(){
    char opcion;
    int saldo, movimiento;

    cout << "Bienvenido al cajero automatico, por favor, ingrese el saldo inicial de su cuenta (sin puntos ni comas ej. 200000): \n";
    cin >> saldo;
    if(saldo > 100000){
        cout << "Ingrese la letra para la respectiva operación: \n R - Retirar \n C - Consignar \n S - Salir \n";
        cin >> opcion;
        opcion = tolower(opcion);
        switch (opcion) {
            case 'r':
                cout << "Ingrese el monto a retirar \n";
                cin >> movimiento;
                if(movimiento > saldo){
                    cout <<"Movimiento mayor al saldo. \n";
                    break;
                }
                saldo = saldo - movimiento;
                break;
            case 'c':
                cout << "Ingrese el monto a consignar \n";
                cin >> movimiento;
                if(movimiento > saldo){
                    cout <<"Movimiento mayor al saldo. \n";
                    break;
                }
                saldo = saldo - movimiento;
                break;
            case 's':
                break;
            default:
                break;
        }
        printf("Su saldo actual es de %d", saldo);
    }else{
        cout << "Error en apertura de cuenta";
    }
}

void quintoEjercicio(){

}

int main() {
    //primerEjercicio();
    //segundoEjercicio();
    //tercerEjercicio();
    //cuartoEjercicio();
    quintoEjercicio();
    return 0;
}
