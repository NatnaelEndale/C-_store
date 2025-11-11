#include <iostream>
using namespace std;

int enough(int goal){ 
    int sum = 0;
    int n = 1;
    while(sum < goal){
        sum += n;
        n += 1;
    }
    return n-1;
    
}
int main (){
    int goal;
    cout << "Enter the number :";
    cin >> goal;
    int result = enough(goal);
    cout << result;

    return 0;
}