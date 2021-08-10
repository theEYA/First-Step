#include <iostream>

using namespace std;

int main()
{
    int yuzbinler,onbinler,binler,yuzler,onlar,birler;
    int sayi;
    cout<<"alti basamakli bir sayi giriniz."<<endl;
    cin>>sayi;

    yuzbinler = sayi / 100000;
    onbinler = (sayi % 100000) / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = sayi % 10;
    
    int toplam;
    toplam = yuzbinler + onbinler + binler + yuzler + onlar + birler;

    cout<<"Alti Basamakli Sayinin Basamak Degerleri Toplami:"<<toplam<<endl;


    return 0;
}