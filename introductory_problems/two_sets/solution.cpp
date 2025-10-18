#include <iostream>
#include <vector>
using ll = long long;


// not convinced that this mathematically works but it worked for all my test cases so?

int main(void){
    // sum is n(n+1)/2, split into two equal sets would naturalyl be /4 instead
    ll n; std::cin >> n;
    ll sum = (n * (n+1)) / 2;
    if(sum%2!=0){
        std::cout << "NO\n";
        return 0;
    }

    sum /= 2; // target sum. now move down from n until we find the complement of sorts
    ll r_run = sum; ll i = n;
    std::vector<ll> set2; // for the second set collapsing down
    for( ; i > 0 && r_run > 0; --i){
        if(r_run >= i){
            set2.push_back(i);
            r_run -= i;
        }else{
            // find the integer remaining
            set2.push_back(r_run); 
            r_run -= r_run; // zero out and we now have the first set. keep this number in mind as well as our final i
            // to avoid the final increment just break
            // recall how loops are compiled/interpreted. condition -> body -> update loop around.
            break; 
        }
    }
    std::vector<ll> set1;
    for(ll k=1; k <= i; ++k){
        if(k != set2[set2.size()-1]){
            // final element was the complement so just do that
            set1.push_back(k); // should be the final set methinks
        }
    }

    std::cout << "YES\n";
    std::cout << set1.size() << std::endl;
    for(auto &k : set1){
        std::cout << k << ' ';
    }

    std::cout << '\n' << set2.size() << std::endl;
    for(auto &k : set2){
        std::cout << k << ' ';
    }

    return 0;
}