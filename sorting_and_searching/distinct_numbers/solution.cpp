#include <iostream>
#include <set>
using ll = long long;


int main(void){
    ll n; std::cin >> n;
    std::set <ll> s; ll c;
    while(n--){
        std::cin >> c; s.insert(c);
    }
    std::cout << s.size() << std::endl;


    return 0;
}