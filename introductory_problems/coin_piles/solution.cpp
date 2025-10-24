#include <iostream>
using ll = long long;


int main(void){
    // math is obliterating me. revisit later.
    // was basic algebra. not sure why i struggled so hard on it.
    ll t; std::cin >> t;
    ll x, y;
    while(t--){
        std::cin >> x >> y;
        if( (((2*y)-x) < 0) || (((2*y)-x)%3) || (((2*x)-y) < 0) || (((2*x)-y)%3)) std::cout << "NO" << std::endl;
        else std::cout << "YES" << std::endl;
    }

    return 0;
}