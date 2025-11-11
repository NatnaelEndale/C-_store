# include <iostream>
using namespace std;

inline double cube(double x){ 
    return x * x * x;
}

int main() {
    for(int i=1; i <= 10; i++){
        cout << i << " cubed: " << cube(i)<<endl;
    }
}