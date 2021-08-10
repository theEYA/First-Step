#include <iostream>

using namespace std;

int main()
{
    float aci1;
    float aci2;
    float aci3;
    float icAcilarToplami;

    cout<<"UCGENIN IC ACILARINI GIRINIZ."<<endl;
    cin>>aci1;
    cin>>aci2;
    cin>>aci3;

    icAcilarToplami = aci3 + aci2 + aci1;

    
    if (icAcilarToplami != 180)
    {
        cout<<"Girdiginiz degerler yanlistir."<<endl;
    }

    else{
        if (aci1<90 && aci2<90 && aci3<90)
    {
        cout<<"DAR ACILI UCGEN"<<endl;
    }
    else if (aci1 == 90 || aci2 == 90  || aci3 == 90)
    {
        cout<<"DIK ACILI UCGEN"<<endl;
    }

    if (aci1>90 || aci2>90 || aci3>90){
        cout<<"Genis Acili Ucgen"<<endl;
    }

    }

    
    return 0;

}