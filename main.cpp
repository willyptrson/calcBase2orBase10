#include <iostream>
#include <string>
#include <unordered_map>

long long calc(long long value,long long base,int exp){
    long long result=1;
    for(int i = 0; i < exp; i++){
        result*=base;
    }
    return value*result;
};

int main(){
    std::string setGrandeza;
    int base;
    long long value;
    
    std::unordered_map<std::string, int> grandeza{
    //base 2
        {"KiB",10},
        {"MiB",20},
        {"GiB",30},
        {"TiB",40},
    //base 10
        {"KB",3},
        {"MB",6},
        {"GB",9},
        {"TB",12}
    };

    std::cout << "Choose base [2] or [10]: ";
    std::cin >> base;

    if(base == 2){
        std::cout << "Choose [KiB],[MiB],[GiB],[TiB]: ";
        std::cin >> setGrandeza;
    }else if(base == 10){
        std::cout << "Choose [KB],[MB],[GB],[TB]: ";
        std::cin >> setGrandeza;
    }else{
        return 1;
    }

    std::cout << "input value for calc" << setGrandeza << std::endl;
    std::cin >> value;


    std::cout << "value: " << calc(value,base,grandeza[setGrandeza]) << std::endl;
    return 0;
};