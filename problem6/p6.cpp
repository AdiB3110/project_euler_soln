#include<iostream>

int main(){
    long a1{0};
    long a2{0};
    for(long i =1 ;i<=100;i++){
        a1 += i*i;
        a2+= i;
    }
std::cout << (a2*a2) - a1 ;

    return 0;
}


