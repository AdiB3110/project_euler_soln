#include <iostream>
#include <vector>

int checkprime(int chk){
    for(auto i=2;i<chk;i++){
        if (chk%i == 0){
            return 0;
        }
    }
    return 1;
}

std::vector<int> find_primes_in_range(int start , int end){
    std::vector<int> result{};
    for (int i=start;i<=end;i++){
        if(checkprime(i)){
            result.push_back(i);
        }
    }
    return result;
}


int main(){

int base_num {2520};
int original_start{1};
int start_num {10};
int end_num {20};
int answer = base_num;

std::vector<int> primes{};

primes = find_primes_in_range(start_num, end_num);  


for(auto &a : primes){
    std::cout << a << ",";
    answer*=a;
}
std::cout << "\nConsidering primes -> " << answer; 
return 0;
}