#include <iostream>
#include <ctime>

using namespace std;

void prob_ms(){    
    int a,b;
    int contador = 0;
    int contadores[26];

    for(int i = 0;i < 26;i++) contadores[i] = 0;

    srand(time(NULL));

    for(int i = 1;i <= 10000000; i++){
        int a = rand()%2;
        int b = rand()%2;

        if(a == b){
            contador++;
        }
        if(a != b){
            if(contador == 1){
                contador = 0;
            }
            else if(contador == 2){
                contadores[0] += 1;
                contador = 0;
            }
            else if(contador == 3){
                contadores[1] += 1;
                contador = 0;
            }
            else if(contador == 4){
                contadores[2] += 1;
                contador = 0;
            }
            else if(contador == 5){
                contadores[3] += 1;
                contador = 0;
            }
            else if(contador == 6){
                contadores[4] += 1;
                contador = 0;
            }
            else if(contador == 7){
                contadores[5] += 1;
                contador = 0;
            }
            else if(contador == 8){
                contadores[6] += 1;
                contador = 0;
            }
            else if(contador == 9){
                contadores[7] += 1;
                contador = 0;
            }
            else if(contador == 10){
                contadores[8] += 1;
                contador = 0;
            }
            else if(contador == 11){
                contadores[9] += 1;
                contador = 0;
            }
            else if(contador == 12){
                contadores[10] += 1;
                contador = 0;
            }
            else if(contador == 13){
                contadores[11] += 1;
                contador = 0;
            }
            else if(contador == 14){
                contadores[12] += 1;
                contador = 0;
            }
            else if(contador == 15){
                contadores[13] += 1;
                contador = 0;
            }
            else if(contador == 16){
                contadores[14] += 1;
                contador = 0;
            }
            else if(contador == 17){
                contadores[15] += 1;
                contador = 0;
            }
            else if(contador == 18){
                contadores[16] += 1;
                contador = 0;
            }
            else if(contador == 19){
                contadores[17] += 1;
                contador = 0;
            }
            else if(contador == 20){
                contadores[18] += 1;
                contador = 0;
            }
            else if(contador == 21){
                contadores[19] += 1;
                contador = 0;
            }
            else if(contador == 22){
                contadores[20] += 1;
                contador = 0;
            }
            else if(contador == 23){
                contadores[21] += 1;
                contador = 0;
            }
            else if(contador == 24){
                contadores[22] += 1;
                contador = 0;
            }
            else if(contador == 25){
                contadores[23] += 1;
                contador = 0;
            }
            else if(contador == 26){
                contadores[24] += 1;
                contador = 0;
            }
            
        }
    }
    
    int cont = 2;
    for(int i = 0;i < 25;i++){
        cout << cont << "X: " << contadores[i] << endl;
        ++cont;
    }
}

int main()
{
    prob_ms();

    return 0;
}
