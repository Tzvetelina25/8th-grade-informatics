#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");

    int n,br=0;
    cout<<"Тази програма извежда колко пъти символът 'a' се среща във въведен от потребителя масив от символи."<<endl;
    cout<<"Моля, въведете n."<<endl;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='a'){
            br++;
        }
    }
    cout<<"Символът 'a' се среща "<<br<<" пъти в масива от символи.";
    return 0;
}
