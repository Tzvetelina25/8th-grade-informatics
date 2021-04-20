#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");

    int n,br=0;
    cout<<"Тази програма намира и извежда броя на четните числа в редица от n на брой числа."<<endl;
    cout<<"Моля, въведете n."<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
        if(arr[i]%2==0){
            br++;
        }
    }
    cout<<"Броят на четните числа в редицата е: "<<br<<endl;
    return 0;
}
