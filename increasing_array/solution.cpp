#include <iostream>    
using ll = long long;


int main(void){
    ll changes = 0;
    ll n; std::cin >> n;
    ll prev; std::cin >> prev;
    n--;
    ll curr;

    while(n--){
        std::cin >> curr;
        if(curr < prev){
            changes+=prev-curr;
        }else{
            prev=curr;
        }
    }

    std::cout << changes;
    

    return 0;
}