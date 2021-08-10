#include <iostream>

using namespace std;

int main()
{
    int sinir;
    int toplam = 0;
    cout<<"Ekranda 0'a kadar olan yazılacak sayıyı girin.";
    cin>>sinir;

    while (sinir>0)
    {
        cout<<sinir<<endl;
        toplam += sinir;
        sinir--;
    }
    cout<<"girilen sayıdan 0'a kadar olan sayilarin toplami:"<<toplam<<endl;

    return 0;
}