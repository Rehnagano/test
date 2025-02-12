#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::string list[] = {"aaa","BBB","ccc","ddd"};
    std::string palavra = "bbb";
    bool verifi = false;

    std::transform(palavra.begin(),palavra.end(),palavra.begin(),::tolower);//toupper
    std::cout << palavra << std::endl;

    for(int i = 0;i < sizeof(list)/sizeof(list[0]);i++){
        std::transform(list[i].begin(),list[i].end(),list[i].begin(),::tolower);//toupper
    }
    for(int i = 0;i < sizeof(list)/sizeof(list[0]);i++){
        if(palavra == list[i]){
            verifi = true;
            break;
        }
    }
    if(verifi) std::cout << "true";

    return 0;
}
   
