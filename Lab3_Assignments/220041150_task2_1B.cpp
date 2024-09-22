#include<iostream>
#include<string>
using namespace std;
class Temperature
{
private:
    float value;
    string unit;
    int Valid(string u)
    {
        if(u=="Celsius" || u=="Fahrenheit" || u =="Kelvin")
            return 1;
        else
            return 0;
    }
public:
    void assign(float temp,string u)
    {
        if(!Valid(u))
        {
            cout<<"Invalid unit."<<endl;
            return;
        }
        if(u=="Celsius" && temp<-273.15)
        {
            cout<<"Temperature cannot be below absolute zero"<<endl;
            return;
        }
        else if(u=="Fahrenheit" && temp<-459.67)
        {
            cout<<"Temperature cannot be below absolute zero"<<endl;
            return;
        }
        else if(u=="Kelvin" && temp<0)
        {
            cout<<"Temperature cannot be below absolute zero"<<endl;
            return;
        }
        value=temp;
        unit=u;
    }
    float convert(string u2)
    {
        if(!Valid(u2))
        {
            cout<<"Invalid unit."<<endl;
            return 0;
        }
        double result=value;
        if(unit=="Celsius")
        {
            if(u2=="Fahrenheit")
            {
                result=value*9/5+32;
            }
            else if(u2=="Kelvin")
            {
                result=value+273.15;
            }
        }
        else if(unit=="Fahrenheit")
        {
            if(u2=="Celsius")
            {
                result=(value-32)*5/9;
            }
            else if(u2=="Kelvin")
            {
                result=(value-32)*5/9+273.15;
            }
        }
        else if(unit=="Kelvin")
        {
            if(u2=="Celsius")
            {
                result=value-273.15;
            }
            else if(u2=="Fahrenheit")
            {
                result=(value-273.15)*9/5+32;
            }
        }
        return result;
    }
    void print()
    {
        cout<<"The temperature is "<<value<<" "<<unit<<"."<<endl;
    }
};
int main()
{
    Temperature temp;
    temp.assign(20,"Celsius");
    temp.print();
    float convertedTemp=temp.convert("Kelvin");
    cout<<convertedTemp<<" Kelvin." << endl;
    temp.assign(300,"Kelvin");
    temp.print();
    convertedTemp=temp.convert("Celsius");
    cout<<convertedTemp<<" Celsius."<<endl;
    temp.assign(-500,"Fahrenheit");
    return 0;
}
