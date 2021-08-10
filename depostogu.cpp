#include <iostream>

using namespace std;

int main()
{
    int stokAdedi;
    char islem;
    int degisimMiktari;

    cout<<"Lutfen depodaki stok miktarini giriniz."<<endl;
    cin>>stokAdedi;


    cout<<"Depoya urun eklemek icin + , Cikarmak icin - yaziniz."<<endl;
    cin>>islem;

    cout<<"Eklenecek veya cikarilacak urun miktarini giriniz."<<endl;
    cin>>degisimMiktari;

    switch (islem)
    {
    case '+':
        cout<<"Guncel stok adedi:"<<" "<<stokAdedi + degisimMiktari<<endl;
        break;
    
    case '-':
        cout<<"Guncel stok adedi:"<<" "<<stokAdedi - degisimMiktari<<endl;
        break;
    default :
         cout<<"GECERSİZ KARAKTER GIRDINIZ."<<endl;
    }

    
    return 0;

}