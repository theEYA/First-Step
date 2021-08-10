#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"SAYI GIRINIZ."<<endl;
    cin>>sayi;

    if (sayi<0){
        cout<<"SAYI NEGATIFTIR"<<endl;
    }
    else if (sayi == 0){
        cout<<"ZERO"<<endl;
        
    }

    if (sayi>0)
        {
            cout<<"SAYI POZITIFTIR"<<endl;
        }

}