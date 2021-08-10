#include <iostream>

using namespace std;

int main()
{
    string eMail;
    string parola;

    string kontrolEmail = "admin@admin.com";
    string kontrolParola = "admin";

    cout<<"E-mail adresinizi giriniz.";
    cin>>eMail;
    cout<<"parolayi giriniz.";
    cin>>parola;

    if (eMail == kontrolEmail && kontrolParola == parola){
        cout<<"Giris Basarili";
    }


    else if (kontrolEmail == eMail || kontrolParola == parola )
    {
        if (kontrolEmail != eMail){
            cout<<"E-maili yanlis girdiniz.";
        }
        else{
            cout<<"parolaniz yanlis.";;
        }
    }
    

    else{
        cout<<"E-mail ve parolaniz yanlis.";
    }



    return 0;
}