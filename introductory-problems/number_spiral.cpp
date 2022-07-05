// https://cses.fi/problemset/task/1071

#include <iostream>
#include <algorithm>

long long int solve(long long int x, long long int y){

    // Case 1
    if (x < y){
        if (y % 2 == 1){
            long long int r = y * y;
            return (r - x + 1);
        }
        else{
            long long int r = (y - 1) * (y - 1) + 1;
            return (r + x - 1);
        }
    }

    // Case 2
    else{
        if (x % 2 == 0){
            long long int r = x * x;
            return (r - y + 1);
        }
        else{
            long long int r = (x - 1) * (x - 1) + 1;
            return (r + y - 1);
        }
    }
}

int main()
{
    int t;
    long long int x, y;
    std::cin >> t;
    while (t--){
        std::cin >> x >> y;
        std::cout << solve(x,y) << "\n";
    }
    
    return 0;
}