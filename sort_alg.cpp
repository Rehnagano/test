#include <iostream>

using namespace std;

int main(){
    int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int busca = 2;
    int sz = sizeof(a)/sizeof(a[0]);
    int meio = sz/2;
    int inicio = meio + 1;
    int fim = sz;
    
    if(sz%2 == 0){
        for(int i = 0;i < sz;i++){
            if(busca == a[i] or busca == a[meio]){
                cout << "par FOUND 1\n";
                break;
            }
            if(busca == a[inicio] or busca == a[fim]){
                cout << "par FOUND 2\n";
                break;
            }
            inicio++;
            meio--;
            fim--;            
            if(i == fim) break;
            if(meio == 0) break;
            if(fim == 0) break;
        }
        cout << "\nFIM\n";
    } else {
        for(int i = 0;i < sz;i++){
            if(busca == a[sz+1]){
            cout << "impar FOUND 3";
            break;
            }
            if(busca == a[i] or busca == a[meio]){
                cout << "impar FOUND 1";
                break;
            }
            if(busca == a[inicio] or busca == a[fim]){
                cout << "impar FOUND 2";
                break;
            }
            inicio++;
            meio--;
            fim--;
            if(i == fim) break;
            if(meio == 0) break;
            if(fim == 0) break;
        }
        cout << "\nFIM\n";
    }
      
    return 0;
}