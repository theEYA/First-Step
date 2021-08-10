#include <iostream>

using namespace std;

int main()
{
    string isim1 ="kaan"; //0
    string isim2 ="mert" ;//1
    string isim3 ="burcu" ;//2
    
    int ogrenciVize1Sonuclari [3];
    int ogrenciVize2Sonuclari [3];
    int ogrencifinal1Sonuclari [3];
    float notOrtalamalari [3];

    // vize1 %20 vize2 %30 final %50

    cout<<"Ogrencilerinin birinci vizesinin sonuclarini giriniz"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>ogrenciVize1Sonuclari[i];
    }

    cout<<"Ogrencilerinin ikinci vizesinin sonuclarini giriniz"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>ogrenciVize2Sonuclari[i];
    }
    cout<<"Ogrencilerinin final sinavinin sonuclarini giriniz"<<endl;
    for (int i = 0; i < 3; i++){
        cin>>ogrencifinal1Sonuclari [i];
    }
    for (int i = 0; i < 3; i++)
    {
        notOrtalamalari [i] = (ogrenciVize1Sonuclari[i] * 2 / 10) + (ogrenciVize2Sonuclari[i] * 3 / 10) + (ogrencifinal1Sonuclari[i] * 6 / 10);
    }
    for (int i = 0; i < 3; i++)
    {
        if (85<= notOrtalamalari [i])
        {
            cout<<"Ogrenci pekiyi ile gecmistir.";
        }
        
    }
    

    cout<<"Kaan'nin Yil Sonu Not Ortalamasi:"<<notOrtalamalari[0]<<endl;
    cout<<"Mert'in Yil Sonu Not Ortalamasi:"<<notOrtalamalari[1]<<endl;
    cout<<"Burcu'nun Yil Sonu Not Ortalamasi:"<<notOrtalamalari[2]<<endl;
    
    





    // cout<<"kaan'nin yil sonu not ortalamasi: "<< (ogrenciVize1Sonuclari[0] * 2 / 10) + (ogrenciVize2Sonuclari[0] * 3 / 10) + (ogrencifinal1Sonuclari[0] * 6 / 10 )<<endl;
    // cout<<"mert'in yil sonu not ortalamasi: "<< (ogrenciVize1Sonuclari[1] * 2 / 10) + (ogrenciVize2Sonuclari[1] * 3 / 10) + (ogrencifinal1Sonuclari[1] * 6 / 10 )<<endl;
    // cout<<"burcu'nun yil sonu not ortalamasi: "<< (ogrenciVize1Sonuclari[2] * 2 / 10) + (ogrenciVize2Sonuclari[2] * 3 / 10) + (ogrencifinal1Sonuclari[2] * 6 / 10 )<<endl;





    return 0;
}