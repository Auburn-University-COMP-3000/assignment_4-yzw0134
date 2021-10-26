#include<iostream>
using namespace std;
//class Temperature
class Temperature
{
double Kelvin, Celsius,Fahrenheit;
public:
//setter function
void setKelvin(double t)
{
Kelvin=t;
}
void setCelsius()
{
Celsius=Kelvin-273.15;
}
void setFahrenheit()
{
Fahrenheit= (Celsius*9/5.0) + 32;
}
//getter function
double getCelsius()
{
return Celsius;
}
double getFahrenheit()
{
return Fahrenheit;
}
};
int main()
{
double temp;
Temperature ob;
cout<<"Enter a temperature in degress Kelvin: ";
cin>>temp;
ob.setKelvin(temp);
ob.setCelsius();
ob.setFahrenheit();
cout<<"Temperature after converting to Celcius: "<<ob.getCelsius()<<"\n";
cout<<"Temperature after converting to Fahrenheit: "<<ob.getFahrenheit()<<"\n";
}