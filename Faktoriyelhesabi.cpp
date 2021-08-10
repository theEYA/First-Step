#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int faktoryel=1;

    cout<<"Faktoryelini almak istediginiz sayiyi giriniz."<<endl;
    cin>>sayi;

    while (sayi>0)
    {
        faktoryel *= sayi;   // sonuç = sonuç * sayi
        sayi--;
    }
    cout<<"girilen sayinin faktöryeli:"<<faktoryel<<endl;
    


    return 0;

}