    #include <iostream>
    #include <cmath> 
    using namespace std;

    float areaCuadrado(float lado);
    float volumenCilindro(float radio, float altura);
    float volumenEsfera(float radio);

    int main() {
        int opcion;

        do {
            cout << "Calculadora geometrica " << endl;
            cout << "1. Calcular el area de un cuadrado "<< endl;
            cout << "2. Calcular el volumen de un cilindro "<< endl;
            cout << "3. Calcular el volumen de una esfera "<< endl;
            cout << "4. Salir del programa "<< endl;
            cout << "Ingrese una opcion: " << endl;
            cin >> opcion;

            switch (opcion) {
                case 1:
                float lado = 0.0;
                    cout << "Area del Cuadrado ";
                    cout << "Ingrese la medida del lado: ";
                    cin >> lado;
                    if (lado < 0) 
                    {
                        cout << "Error: El lado no puede ser negativo ";
                    } 
                    else 
                    {
                        cout << "El area del cuadrado es: " << areaCuadrado(lado) << endl;
                    }
                    break;

                case 2:
                    cout << "Volumen del Cilindro ";
                    cout << "Ingrese el radio de la base: ";
                    cin >> radio;
                    cout << "Ingrese la altura del cilindro: ";
                    cin >> altura;
                    cout << "El volumen del cilindro es: " << volumenCilindro(radio, altura) << endl;
                    break;
                    }
                 

                case 3:
                    cout << "Volumen de la Esfera ";
                    cout << "Ingrese el radio de la esfera ";
                    cin >> radio;
                    if (radio < 0) 
                    {
                        cout << "Error: El radio no puede ser negativo ";
                    } 
                    else 
                    {
                        cout << "El volumen de la esfera es: " << volumenEsfera << endl;
                    }
                    break;

                case 4:
                    cout << "Saliendo del programa ";
                    break;

                default:
                    cout << "Opcion invalida. Por favor, ingrese un numero del 1 al 4 ";
            }

        } while (opcion != 4);

        return 0;
    }
