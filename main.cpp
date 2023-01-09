#include <iostream>

using namespace std;

int main() {
do{
    /* code */
    char respuesta;
    cout << "Deseas terminar : " << endl;
    cin >> respuesta;
    if (respuesta == 'y'){
        cout << "bye bye";
        break;
    }
} while (true);

}
