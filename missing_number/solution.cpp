#include <iostream>

int main(void){
    long long sum = 0;
    long long n; std::cin >> n;

    int i = 0;
    while(std::cin >> i){sum+=i;}

    std::cout << ( (n*(n+1)) / 2 ) - sum << std::endl;

    return 0;
}