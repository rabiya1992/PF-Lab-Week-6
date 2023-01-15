#include <iostream>
using namespace std;


main()
{
 int number;
 string brand;
 cout << "Enter price of dress: ";
 cin >> number;
 cout << "Enter brand of dress: ";
 cin >> brand;


 if(number <= 1500 && brand == "khaddi")
 {    
         cout << "Buy the dress";
 }


 if(number > 1500)
 {
  cout << "It's expensive. Do not buy the dress. ";
 }


}
 


