# include <iostream>
using namespace std;

void addTen(int&x, int&y){
    x += 10;
    y += 10;
}

int main() {
    int num1 = 4;
    int num2 = 6;
    cout << "Before adding 10"<<"\n";
    cout << num1 <<" "<<num2<<"\n";
    addTen(num1, num2);
    cout << "After adding 10"<<"\n";
    cout << num1 <<" "<<num2<<"\n";


    return 0;

}