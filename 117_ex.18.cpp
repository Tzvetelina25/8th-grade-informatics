#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");

    int n,i;
    cout<<"Тази програма намира и извежда произведението и разликата на максималния и минималния елемент на масив."<<endl;
    cout<<"Моля, въведете n."<<endl;
    cin>>n;
    double arr[n],pr,razlika;
    for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    pr=max*min;
    razlika=max-min;
    cout<<"Произведението е "<<pr<<", а разликата е "<<razlika<<endl;
    return 0;
}
