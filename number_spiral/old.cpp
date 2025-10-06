#include <iostream>
#include <cmath>
using ll = long long;

int main(void){
    ll t; std::cin >> t;
    ll x, y;
    ll offset = 0;
    while(t--){
        std::cin >> y >> x; // get value in row y, column x (not zero indexed)
        if(y==1 && x==1){
            std::cout << "1" << '\n';
            continue;
        }

        // figure out which is smaller for counting reasons.
        if(y >= x){
            // row value is larger so do math based on row.
            // figure out if even or not.
            // what if we just do offset off previous square + new value on parity
            if(y%2==0){
                offset = y*y;
            }else{
                offset = ((y-1) * (y-1)) + 1;
            }
            std::cout << offset - (x-1) << '\n';
            offset = 0;
        }else{
            if(x%2==1){
                offset = x*x;
            }else offset=((x-1)*(x-1)) + 1;
            std::cout << offset - (y-1) << '\n';
            offset = 0;
        }
    }


    return 0;
}