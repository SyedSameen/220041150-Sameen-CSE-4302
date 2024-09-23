#include<iostream>
using namespace std;
class Flight
{
private:
    int Flightnumber;
    string Destination;
    float Distance;
    float MaxFuelCapacity;
    int CalFuel()
    {
        if(Distance<=1000)
            return 500;
        else if(Distance>1000 && Distance<=2000)
            return 1100;
        else
            return 2200;
    }
public:
    void FeedInfo()
    {   
        int n;
        float f,g;
        string s;
        cout<<"Enter flight no. : \n";
        cin>>n;
        Flightnumber=n;
        cout<<"Enter Destination: \n";
        cin.ignore();
        getline(cin,s);
        Destination = s;
        cout<<"Enter Distance : \n";
        cin>>f;
        Distance=f;
        cout<<"Enter max fuel capacity : ";
        cin>>g;
        MaxFuelCapacity=g;
    }
    void ShowInfo()
    {
        cout<<"Flight no. : "<<Flightnumber<<endl;
        cout<<"Flight Destination : "<<Destination<<endl;
        cout<<"Flight Distance : "<<Distance<<endl;
        cout<<"max fuel capacity : "<<MaxFuelCapacity<<endl;
        if(MaxFuelCapacity>=CalFuel())
            cout<<"Sufficient fuel"<<endl;
        else
            cout<<"Insufficient fuel"<<endl;
    }
};
int main()
{
    Flight f1;
    f1.FeedInfo();
    f1.ShowInfo();
    return 0;
}