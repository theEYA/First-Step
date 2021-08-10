#include <iostream>

using namespace std;

int main()
{
    int sayi1;
    float daireninAlani;
    float daireninCevresi;
    cout<<"dairenin yari capini giriniz."<<endl;

    cin>>sayi1;

    daireninCevresi = 2 * 3.14 * sayi1;
    daireninAlani = 3.14 * sayi1 * sayi1;

    
    cout<<"Dairenin Cevresi:"<<daireninCevresi<<endl<<"Dairenin Alani:"<<daireninAlani<<endl;


    return 0;
}