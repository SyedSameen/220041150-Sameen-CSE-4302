#include "Temperature.h"

int main()
{
    Temperature temp;
    temp.assign(20, "Celsius");
    temp.display();
    float convertedTemp = temp.convert("Kelvin");
    cout << convertedTemp << " Kelvin." << endl;
    temp.assign(300, "Kelvin");
    temp.display();
    convertedTemp = temp.convert("Celsius");
    cout << convertedTemp << " Celsius." << endl;
    temp.assign(-500, "Fahrenheit");
    temp.assign(100, "Fahrenheit");
    temp.display();
    convertedTemp = temp.convert("Celsius");
    cout << convertedTemp << " Celsius." << endl;
    return 0;
}
