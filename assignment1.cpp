#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //set up variables
    double cost = 3000.0;
    int yearsLeft = 5;
    //set up output
    cout<<fixed<<setprecision(2);
    cout<<"Projected Rates"<<endl;
    cout<<"==============="<<endl;
    while (yearsLeft > 0)
    {
        cost *= 1.03;
        cout<<cost<<endl;
        yearsLeft--;
    }

    return 0;
}