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
    cout<<"���� �������� ������ � ������� ���� �� ������� ����� � ������ �� n �� ���� �����."<<endl;
    cout<<"����, �������� n."<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
        if(arr[i]%2==0){
            br++;
        }
    }
    cout<<"����� �� ������� ����� � �������� �: "<<br<<endl;
    return 0;
}
