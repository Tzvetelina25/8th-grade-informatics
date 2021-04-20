#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");

    int n;
    cout<<"Тази програма намира и извежда максималния елемент на масив и неговия индекс."<<endl;
    cout<<"Моля, въведете n."<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    int max=arr[0],index;
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    cout<<"Максималният елемент на масива е "<<max<<", а неговият индекс е "<<index<<endl;
    return 0;
}
