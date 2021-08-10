#include <iostream>

using namespace std;

int main()
{
    float a,b,c,x;
    float birinciDerecedenDenklem;
    float ikinciDerecedenDenklem;
    cout<<"a b c ve x degerlerini giriniz."<<endl;

    cin>> a >> b >> c >> x;

    birinciDerecedenDenklem = a * x + b;
    ikinciDerecedenDenklem = a * x * x + b * x + c;

    cout<<birinciDerecedenDenklem<<endl<<ikinciDerecedenDenklem<<endl;

    



    return 0;
}