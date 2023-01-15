#include <iostream>
using namespace std;

float discountAmount(float purchaseAmount, string day, string month);

main()
{
 float purchaseAmount;
 string day;
 string month;
 int result;

 cout << "Enter purchasing amount: ";
 cin >> purchaseAmount;
 cout << "Enter day: ";
 cin >> day;
 cout << "Enter month: ";
 cin >> month;

result = discountAmount(purchaseAmount, day, month);
cout << "The payable amount is " << result;

}


float discountAmount(float purchaseAmount, string day, string month)
{int total;
 float discount;
  
 
   if(day == "Sunday" ||  month == "October")
 {
    discount = (purchaseAmount * 10) / 100;
    total = purchaseAmount - discount;
 }



  
 else
 {
    total = purchaseAmount;
 }

 return total;


}

