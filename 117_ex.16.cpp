#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");

    int n,pr=1,br=0;
    cout<<"���� �������� ������ � ������� �������������� �� �������� �� 7 ����� � ������ �� n �� ���� �����."<<endl;
    cout<<"����, �������� n."<<endl;
    cin>>n;
    int arr[n],i=0;
    for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
        if(arr[i]%7==0){
            pr=pr*arr[i];
            br++;
        }
    }
    if(br>0){
        cout<<pr<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
