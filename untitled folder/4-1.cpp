
#include <iostream>
#include<stdlib.h>
#include<string>
#include<iomanip>

using namespace std;

class GasPump
{
    public:
        void behaviour(double liter, double capacity);
        void amountcharged( double dis, double liter, double capacity);
        void reset(double dis);
        void charge(double dis, double liter, double capacity);
        void amount(double lit, double capacity);

};

void GasPump::behaviour(double liter, double capacity){
    cout<<"Charge per Liter is :" << liter << endl;
    cout<<"Capacity of the GasPump tank is :" << capacity << endl;
    cout<<endl;

}
void GasPump::amountcharged(double dis, double liter, double capacity){

    if(capacity >=dis){
        cout<<"Amount of Gas Dispenced: " << dis << endl;
        cout << "Amount charged for the amount dispenced :" << dis*liter << endl;
        cout << "Charge per liter :" << liter << endl;
        cout << endl;
    }
    else{
        cout << "Capacity of the GasPump tank is low: " << capacity << endl;
        cout << endl;
    }

} 
void GasPump::reset(double dis){
    dis = 0;
    cout<< " Reset : " <<dis << endl;
    cout << endl;
}
void GasPump::charge(double dis, double liter, double capacity){
    if(capacity >=dis){
        cout << "AMount charged for the amount dispenced" << dis*liter << endl;
        cout << endl;

    }
    else{
        cout <<"Capacity of the GasPump tank is low:"<<capacity << endl;
        cout<< endl;
    }
}
void GasPump::amount(double lit, double capacity){
    double liter = 70;
    double total = (double) (1000*lit/liter)/1000;
    if(total>capacity){
        cout<<"Capacity of the GasPump tank is low: " << capacity << endl;
        cout << "GasPump Overload" << endl;
        cout<<endl;

    }
    else{
        cout<<"AMount of gas for "<<lit<<" is :" << total <<"lt" << endl;
        cout<< endl;
    }
}
int main(){
    GasPump p;
    double liter = 70;
    for (double capacity = 50; capacity >=0;){
        p.behaviour(liter,capacity);
        cout<<"Enter amount of gas dispenced in liters: ";
        double dis;
        cin >> dis;
        p.amountcharged(dis,liter,capacity);
        capacity = capacity - dis;
        p.reset(dis);
        cout<<"Enter amount of gas dispenced in liters: ";
        double disp;
        cin>>disp;
        p.amountcharged(disp,liter,capacity);
        capacity = capacity - dis;
        p.reset(dis);

        while(capacity > 0){
            cout <<"Enter amount in Rs: ";
            double lit;
            cin >> lit;
            p.amount(lit,capacity);
            double total = (double)(1000*lit/liter) / 1000;
            capacity = capacity - total;
        }
    }
    system("PAUSE");
    return 0;
    }