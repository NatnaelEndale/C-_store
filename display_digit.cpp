# include <iostream>
using namespace std;

int accept(){
    int num;
    cout<< "Enter a number :";
    cin >> num;

    return num;
}

void extract(int num){
    if (num==0)return;

    int digit = num % 10;
    extract(num/10);
    cout << digit <<"  ";
}

int main(){
    int number = accept();
    extract(number);

    return 0;
}