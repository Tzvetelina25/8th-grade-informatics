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
    cout<<"���� �������� ������ � ������� ���� �� ���������� �� ��������� �����, ����� �� ��-������ �� ������������������� �������� �� �������� �� ��������."<<endl;
    cout<<"����, �������� n."<<endl;
    cin>>n;
    int arr[n],average,sum=0,br=0;
    for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    average=sum/n;
    for (int i=0;i<n;i++){
        if(arr[i]>average){
            br++;
        }
    }
    cout<<"����� �� ����������, ����� �� ��-������ �� ������������������� �������� �� �������� �������� �� ������, �: "<<br<<endl;
    return 0;
}
