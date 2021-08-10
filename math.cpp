#include <iostream>

using namespace std;

int main()
{
    float sayi1;
    float sayi2;
    float toplam=0,cikarma=0,bolme=0,carpma=0;
    cout<<"2 sayi giriniz."<< endl;

    cin>>sayi1;
    cin>>sayi2;

    toplam = sayi1 + sayi2;
    cout<<toplam<<endl;

    cikarma = sayi1 - sayi2;
    cout<<cikarma<<endl;

    bolme = sayi1 / sayi2;
    cout<<bolme<<endl;

    carpma = sayi1 * sayi2;
    cout<<carpma<<endl;
    


    return 0;

}