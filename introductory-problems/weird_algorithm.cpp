// https://cses.fi/problemset/task/1068/

#include<iostream>

void solve(int n){

    // Validate inputs
    if(n < 0){
        return;
    }

    long long int s = (long long int)n;

    while(s != 1){
        std::cout<<s<<" ";
        // Even 
        if(s%2 == 0){
            s /= 2;
        }
        // Odd
        else{
            s = 3*s + 1;
        }
    }

    std::cout<<s;
}


int main(int argc, char const *argv[]){

    int n;
    std::cin >> n;
    solve(n);
    return 0;
}
