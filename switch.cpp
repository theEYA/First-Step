#include <iostream>

using namespace std;

int main()
{

    cout<<"Haftanin hangi gununu ogrenmek istersin?"<<endl;
    int gun;
    
    cin>>gun;
    switch (gun)
    {
    case 1:
        cout<<"PAZARTESI"<<endl;
        break;
    
    case 2:
        cout<<"SALI"<<endl;
        break;
    
    case 3:
        cout<<"CARSAMBA"<<endl;
        break;
    case 4:
        cout<<"PERSEMBE"<<endl;
        break;
    case 5:
        cout<<"CUMA"<<endl;
        break;
    case 6:
        cout<<"CUMARTESI"<<endl;
        break;
    case 7:
        cout<<"PAZAR"<<endl;
        break;
    default:
        cout<<"Gecersiz bir gun girdiniz.";
    }

    return 0;
}