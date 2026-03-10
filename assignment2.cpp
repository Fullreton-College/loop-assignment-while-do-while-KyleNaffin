#include <iostream>

using namespace std;

int main(){
    int in;
    int max = -99999;
    int min = 99999;

    cout<<"Enter the first integer in the list: ";
    cin>>in;
    do{
        if (in > max)
            max = in;
        if (in < min)
            min = in;
        cout<<"Enter the next integer (-99 to terminate): ";
        cin>>in;
    }
    while (in != -99);

    cout<<"The largest number is "<<max<<"."<<endl;
    cout<<"The smallest number is "<<min<<"."<<endl;

    return 0;
}