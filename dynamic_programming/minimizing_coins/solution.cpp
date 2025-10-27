#include <iostream>
#include <vector>
#include <algorithm> // std::min
#include <climits> // LLONG_MAX

using ll = long long;

int main(void){
    ll n; std::cin >> n;
    ll x; std::cin >> x; // result sum
    std::vector<ll> coins; 
    ll c;
    while(n--){
        std::cin >> c;
        coins.push_back(c);
    }

    std::vector<ll> counts(x+1, LLONG_MAX);
    counts[0] = 0; // 0 ways to get change of 0.
    for(auto &coin : coins){
        for(ll i=coin; i < counts.size(); ++i){
            counts[i] = (counts[i-coin] == LLONG_MAX) ? counts[i] : std::min(counts[i-coin] + 1, counts[i]) ;
        }
    }

    if(counts[counts.size()-1] == LLONG_MAX) std::cout << -1;
    else std::cout << counts[counts.size()-1]; 

    return 0;
}