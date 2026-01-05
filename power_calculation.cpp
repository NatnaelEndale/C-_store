# include <iostream>
using namespace std;

template <typename T>

T power(T base, T exponet)
{
    if (exponet == 0 ) return 1;
    return base * power(base, exponet-1);
}

int main()
{
    int base_num, ex_num;
    cout << "Enter the base: ";
    cin >> base_num;
    cout << "Enter the exponet: ";
    cin >> ex_num;

    cout<<base_num<<" the power of "<<ex_num<<" is "<<power(base_num, ex_num);

    
    return 0;
}