#include <iostream>

using namespace std;

int main()
{
    //continue 
    // int i=0;
    // do{
    //     if (i%5==0)
    //     {
    //         i++;
    //         continue;
    //     }
    //     cout<<i<<endl;
    //     i++;

    // }while (i<10);

    //break
    // int i=0;
    // do{
    //     if (i==7)
    //     {
    //         break;
    //     }
    //     cout<<i<<endl;
    //     i++;

    // }while (i<10);

    int i=0;
    
    while (i<10)
    {
        if (i==5){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    


    return 0;
}