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
    cout<<"���� �������� ������ � ������� ������������������� �� ������������� �������� � ������ �� n �� ���� �����."<<endl;
    cout<<"����, �������� n."<<endl;
    cin>>n;
    double arr[n],average=0,sum=0,br=0;
    for (int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
        if(arr[i]>0){
            sum=sum+arr[i];
            br++;
        }
    }
    if(br!=0){
        average=sum/br;
    }
    cout<<"������������������� �� ������������� �������� � �������� �: "<<average<<endl;
    return 0;
}
