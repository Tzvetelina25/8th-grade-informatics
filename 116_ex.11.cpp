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
    cout<<"���� �������� ��������� ���� ���������� �� ����������� ���� ����� x �� ������� � ������� ������ �� ���� �����."<<endl;
    cout<<"����, �������� n."<<endl;
    cin>>n;
    int arr[n],x,br=0;
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<"����, �������� x."<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            br++;
        }
    }
    if(br>0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
