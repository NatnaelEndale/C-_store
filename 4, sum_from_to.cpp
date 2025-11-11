#include <iostream>
using namespace std;

int sum_from_to(int num1, int num2){
    int n;
    if (num1 > num2){n = (num1 - num2) + 1;}
    else{n = (num2 - num1) + 1;}
    return (n*(num1 + num2)) / 2;
    
}
int main(){
    int num1, num2;
    cout << "Enter the lowest bound : "<<endl;
    cin >> num1;
    cout << "Enter the upper bound : "<<endl;
    cin >> num2;
    int sum = sum_from_to(num1, num2);
    cout << sum;

    return 0;
}
