#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main (){


    cout << endl << "===============================================================" << endl;
    cout << "============EXEMPLOS DE ARRAY BIDIMENSIONAL COM FORM===============" << endl;
    cout << "===============================================================" << endl << endl;

    double warray[5][6] = {};
    int total = 0;

    for (int x = 0; x < 5; x++){
        int contatot = 0;
        for (int y = 0; y < 6; y++){
            if (y < 5){
                warray[x][y] = (double)rand();
                contatot += warray[x][y];
            }
            else{
                warray[x][5] = contatot;
            }

            string totit = (y < 4) ? " + " :
                           (y != 5)? " = ":"\n";
            cout << setw(6) << warray[x][y] << totit;
        }
        total += contatot;
    }

    cout << "O TOTAL DA SOMA EH: " << total <<endl;

    cout << endl << "===============================================================" << endl;
    cout << "========================FIM DO PROGRAMA========================" << endl;
    cout << "===============================================================" << endl << endl;


    system("pause");
    return 0;
}
