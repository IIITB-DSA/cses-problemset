// https://cses.fi/problemset/task/1070

#include <iostream>
#include <vector>

void solve(int n){

    // Base Cases
    if(n == 1){
        std::cout << "1";
        return;
    }

    if(n <= 3){
        std::cout <<"NO SOLUTION";
        return;
    }

    // Combine all odd and even numbers separately
    std::vector<int> v;

    // Even 
    for(int i = 2; i <= n; i+=2){
        v.push_back(i);
    }

    // Odd 
    for(int i = 1; i <= n; i+=2){
        v.push_back(i);
    }


    for(int x : v){
        std::cout << x << " ";
    }
}

int main(int argc, char const *argv[]){
    
    int n;
    std::cin >> n;
    solve(n);
    return 0;
}
