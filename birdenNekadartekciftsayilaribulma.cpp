#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int tekSayilarinToplami = 0;
    int ciftSayilarinToplami = 0;

    cout<<"sayi giriniz.";
    cin>>sayi;

    do{
        if (sayi % 2 == 0){
            ciftSayilarinToplami += sayi;
        }
        else if (sayi % 2 != 0){
            tekSayilarinToplami += sayi;
        }
        sayi--;
    }while (sayi>0);
    
    cout<<"tek sayilarin toplami:"<<tekSayilarinToplami<<endl;
    cout<<"cift sayilarin toplami:"<<ciftSayilarinToplami<<endl;
   

    return 0;
}