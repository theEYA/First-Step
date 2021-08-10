#include <iostream>

using namespace std;

int main()
{
    float sayi1,sayi2;
    float toplama,cikarma,carpma,bolme,modAlma;
    
    cout<<"Lutfen yapmak istediğiniz islemi giriniz."<<endl;
    cout<<"1. Toplama Islemi"<<endl;
    cout<<"2. Cikarma Islemi"<<endl;
    cout<<"3. Carpma Islemi"<<endl;
    cout<<"4. Bolme Islemi"<<endl;
    cout<<"5. Mod Islemi"<<endl;

    int islem;
    cin>>islem;

    cout<<"Islem icin sayilari giriniz.";

    cin>>sayi1;
    cin>>sayi2;

    if (islem == 1){
        toplama = sayi1 + sayi2;
        cout<<toplama<<endl;
    }
    if (islem == 2)
    {
        cikarma = sayi1 - sayi2;
        cout<<cikarma<<endl;
    }
    if (islem == 3)
    {
        carpma = sayi1 * sayi2;
        cout<<carpma<<endl;
    }
    if (islem == 4)
    {
        bolme = sayi1 / sayi2;
        cout<<bolme<<endl;
    }
    if (islem == 5)
    {
        modAlma = int (sayi1) % int (sayi2);
        cout<<modAlma<<endl;
    }
    else {
        cout<<"Lutfen islem numarasini dogru giriniz."<<endl;
    }
    


    return 0;
}