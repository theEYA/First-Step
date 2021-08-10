#include <iostream>

using namespace std;

int main()
{
    string isim1,isim2,isim3;
    string soyIsim1,soyIsim2,soyIsim3;
    int tcKimlikNo1,tcKimlikNo2,tcKimlikNo3;
    int urunSayisi1,urunSayisi2,urunSayisi3;
    bool cinsiyet1, cinsiyet2,cinsiyet3;

    // true -> kadın
    // false -> erkek 

    cout<<"Lutfen calisanlarin bilgilerini giriniz.";

    cin>>isim1>>soyIsim1>>tcKimlikNo1>>cinsiyet1;
    cin>>isim2>>soyIsim2>>tcKimlikNo2>>cinsiyet2;
    cin>>isim3>>soyIsim3>>tcKimlikNo3>>cinsiyet3;

    urunSayisi1 = 50;
    urunSayisi2 = 50;
    urunSayisi3 = 50;


    //cout<<isim1<<"icin satis adedi girin"<<endl;
    //cout<<isim2<<"icin satis adedi girin"<<endl;
    //cout<<isim3<<"icin satis adedi girin"<<endl;

    urunSayisi1 = urunSayisi1 - 20;
    urunSayisi2 -= 15;
    urunSayisi3 -= 30;

    if (urunSayisi1>25)
    {
        cout<<isim1 <<"BASARISIZ";
    }
    else{
        cout<<isim1<<"BASARILI"<<endl;
    }
    if (urunSayisi2>25)
    {
        cout<<isim2<< "BASARISIZ";
    }
    else{
        cout<<isim2<<"BASARILI"<<endl;
    }
    if (urunSayisi3>25)
    {
        cout<<isim3<< "BASARISIZ";
    }
    else{
        cout<<isim3<<"BASARILI"<<endl;
    }


    cout<<isim1<<" "<<soyIsim1<<" "<<tcKimlikNo1<<" "<<cinsiyet1<<endl;
    cout<<isim2<<" "<<soyIsim2<<" "<<tcKimlikNo2<<" "<<cinsiyet2<<endl;
    cout<<isim3<<" "<<soyIsim3<<" "<<tcKimlikNo3<<" "<<cinsiyet3<<endl;



    return 0;

}