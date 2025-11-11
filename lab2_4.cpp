# include <iostream>
using namespace std;

void print(int a) {
    cout << "integer" << a << endl;
}
void print(double a) {
    cout << "double" << a << endl;
}
void print(char a) {
    cout << "character" << a << endl;
}

int add(int a, int b){
    return (a + b);
}
int add(int a, int b, int c){
    return (a + b + c);
}

int main () {
    print(5);
    print(2.5);
    print('A');
    cout << "sum: "<< add(2, 3)<< endl;
    cout << "sum: "<< add(2, 3, 4)<< endl;
    

}