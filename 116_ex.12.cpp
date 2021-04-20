#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");

    int n;
    cout<<"Тази програма намира и извежда сумата на отрицателните числа от редица реални числа."<<endl;
    cout<<"Моля, въведете n."<<endl;
    cin>>n;
    double arr[n],sum=0;
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            sum=sum+arr[i];
        }
    }
    cout<<"Сумата на отрицателните елементи в редицата е: "<<sum;
    return 0;
}
