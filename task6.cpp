#include <iostream>
using namespace std;


float lowestPrice(int kilometers , string period);


main()
{int kilometers;
 string period;
 float answer;

 cout << "Enter number of kilometers: ";
 cin >> kilometers;

 cout << "Enter time period: ";
 cin >> period;

answer =  lowestPrice(kilometers, period);
cout << answer;

}



float lowestPrice(int kilometers , string period)

{ float cheap;
 
 if(kilometers > 20 && kilometers <= 100)
 {  
    cheap = (kilometers * 0.09);
 }

 else if(kilometers > 100)
 {
    cheap = (kilometers * 0.06);
 }
 
 else if(kilometers < 20 && period == "day")
 {
    cheap = (kilometers * 0.79) + 0.70;
 }

 else if(kilometers < 20 && period == "night")
 {
    cheap = (kilometers * 0.90) + 0.70;
 }


return cheap; 

}