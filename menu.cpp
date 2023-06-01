#include <iostream>

using namespace std;

int main()
{
    int a, b, r, op;
    cout << "Opción: 1 resta\n";
    cout << "Opción: 2 suma\n";
    cout << "Opción: 3 división\n";
    cout << "Opción: 4 salir\n";
    cout << "Ingrese el número de opción: ";
    cin >> op;

    switch (op) {
        case 1:
            cout << "Ha elegido resta\n";
            cout << "Ingrese el valor de a: ";
            cin >> a;
            cout << "Ingrese el valor de b: ";
            cin >> b;
            r = a - b;
            cout << "El resultado es: " << r << endl;
            break;

        case 2:
            cout << "Ha elegido suma\n";
            cout << "Ingrese el valor de a: ";
            cin >> a;
            cout << "Ingrese el valor de b: ";
            cin >> b;
            r = a + b;
            cout << "El resultado es: " << r << endl;
            break;

        case 3:
            cout << "Ha elegido división\n";
            cout << "Ingrese el valor de a: ";
            cin >> a;
            cout << "Ingrese el valor de b: ";
            cin >> b;

            if (b >= 1 || a >=1) {/* si no es cerro entonces se ejecutara la divicion*/
                r = a / b;
                cout << "El resultado es: " << r << endl;
            } else {
                cout << "No se puede dividir entre cero, intente de nuevo.\n";
            }
            break;
        case 4:
             cout << "saliendo del progrma......\n";
            break;

        default:
            cout << "Opción inválida\n";
            break;
    }

    return 0;
}

