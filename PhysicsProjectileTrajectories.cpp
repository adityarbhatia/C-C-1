#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double initialHeight, angleLaunched, speedOfProjectile, productOne, productTwo, result;

    for(int xValue = 0; xValue < 10; xValue++)
    {
        cout << "Enter Initial Height: ";
        cin >> initialHeight;
        cout << "Enter Angle Launched: ";
        cin >> angleLaunched;
        cout << "Enter Speed: ";
        cin >> speedOfProjectile;
        
        productOne = tan(angleLaunched);
        productOne *= xValue;
        
        productTwo = 9.81 * pow(xValue, 2);
        speedOfProjectile *= cos(angleLaunched);
        speedOfProjectile *= speedOfProjectile;
        speedOfProjectile *= 2;
        
        productTwo /= speedOfProjectile;
        
        result = initialHeight + productOne;
        result -= productTwo;
        
        cout << "[" << xValue << ", " << result << "]" << endl;
    }
    
    return  0;
}

/*
//Using While Loops

 #include <iostream>
 #include <cmath>
 
 using namespace std;
 
 int main()
 {
 double initialHeight, angleLaunched, speedOfProjectile, productOne, productTwo, result;
 
 xValue = 0;
 while(xValue < 10)
 {
 cout << "Enter Initial Height: ";
 cin >> initialHeight;
 cout << "Enter Angle Launched: ";
 cin >> angleLaunched;
 cout << "Enter Speed: ";
 cin >> speedOfProjectile;
 
 productOne = tan(angleLaunched);
 productOne *= xValue;
 
 productTwo = 9.81 * pow(xValue, 2);
 speedOfProjectile *= cos(angleLaunched);
 speedOfProjectile *= speedOfProjectile;
 speedOfProjectile *= 2;
 
 productTwo /= speedOfProjectile;
 
 result = initialHeight + productOne;
 result -= productTwo;
 
 cout << "[" << xValue << ", " << result << "]" << endl;
 
 xValue++;
 }
 
 return  0;
 }

*/

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double initialHeight, angleLaunched, speedOfProjectile, productOne, productTwo, result = 0;
    xValue = 0;
    while(xValue > result)
    {
        cout << "Enter Initial Height: ";
        cin >> initialHeight;
        cout << "Enter Angle Launched: ";
        cin >> angleLaunched;
        cout << "Enter Speed: ";
        cin >> speedOfProjectile;
        
        productOne = tan(angleLaunched);
        productOne *= xValue;
        
        productTwo = 9.81 * pow(xValue, 2);
        speedOfProjectile *= cos(angleLaunched);
        speedOfProjectile *= speedOfProjectile;
        speedOfProjectile *= 2;
        
        productTwo /= speedOfProjectile;
        
        result = initialHeight + productOne;
        result -= productTwo;
        
        cout << "[" << xValue << ", " << result << "]" << endl;
        
        xValue++;
    }
    
    return  0;
}
*/
