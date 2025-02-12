#include <iostream>
#include <string>

using namespace std;

int calc_str_sz(string nome){
    nome += '0';
    int i = 0;
    while(nome[i] != '0') ++i;
    
    return i-1;
}

bool verif_palindromo(string palavra){
	int inicio = 0;
	int fim = calc_str_sz(palavra);
	bool erro = true;
	while(inicio != fim){
	    if(palavra[inicio] != palavra[fim]){
		    erro = false;
		    break;
	    }
    	inicio++;
	    fim--;
	    if((inicio+1) == fim and palavra[inicio] == palavra[fim]) break; //par
    }
	//if(erro) cout << "\nPalindromo!" << endl;
    //else cout << "\nN palindromo" << endl;

	return erro;	

}
 
int main(){
	string palavra = "osso";
	cout << verif_palindromo(palavra);

    return 0;
}