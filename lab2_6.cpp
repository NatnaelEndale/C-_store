# include <iostream>
# include <cmath>
using namespace std;

double power(double base, int e = 3){
    return pow(base, e);
}
 int main() {
    cout << power(4)<< endl;
    cout << power(4, 2)<< endl;
 }