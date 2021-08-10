#include <iostream>

using namespace std;

int main()
{
    float sayi1;
    float kareninCevresi;
    float kareninAlani;
    cout<<"karenin bir kenarinin uzunlugunu giriniz."<<endl;

    cin>>sayi1;

    kareninCevresi = sayi1 * 4;
    kareninAlani = sayi1 *sayi1;

    cout<<"Karenin Cevresi:"<<kareninCevresi<< endl <<"Karenin Alani:"<<kareninAlani<<endl;


    return 0;
}