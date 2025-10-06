#include <iostream>
using ll = long long;

int main(void){
    // am i stupid or is this just a simple problem? we have gaps of 2, plentifully so, for all n > 3
    ll n; std::cin>>n;
    if(n <= 3 && n!=1){
        std::cout << "NO SOLUTION";
        return 0;
    }

    ll i;
    for(i = 2; i <= n; i+=2){
        std::cout << i << ' ';
    }
    for(i = 1; i <= n; i+=2){
        std::cout << i << ' ';
    }
}