#include <iostream>
using namespace std;


float ticketPrice(int budget, string category, int people);



main()
{int budget;
 string category;
 int people;
 float answer;


 cout << "Enter the budget in integers: ";
 cin >> budget;
 cout << "Enter the category: ";
 cin >> category;
 cout << "Enter the no of people: ";
 cin >> people;

 answer = ticketPrice( budget, category, people);

if(answer > 0)
{
   cout << "Yes! You have " << answer << "QR left" <<endl;
}

if(answer < 0)
{
   float ans = -(answer);
   cout << "Not enough money! You need " << ans << "QR"; 
}

}



float ticketPrice(int budget, string category, int people)
{float percent;
 float price;
 float remaining;

 if(people >= 1 && people <= 4 && category == "normal")
 {
   percent = (budget) - ((budget * 75 )/100);
   price = people * 249.99;
 }

if(people >=5 && people <= 9 && category == "normal")
 {
   percent = (budget) - ((budget * 60 )/100);
   price = people * 249.99;
 }

if(people >= 10 && people <= 24 && category == "normal")
 {
   percent = (budget) - ((budget * 50 )/100);
   price = people * 249.99;
 }

 if(people >= 25 && people <= 49 && category == "normal")
 {
   percent = (budget) - ((budget * 40 )/100);
   price = people * 249.99;
 }

 if(people >= 50 && category == "normal")
 {
   percent = (budget) - ((budget * 25 )/100);
   price = people * 249.99;
 }



 if(people >= 1 && people <= 4 && category == "vip")
 {
   percent = (budget) - ((budget * 75 )/100);
   price = people * 499.99;
 }

if(people >=5 && people <= 9 && category == "vip")
 {
   percent = (budget) - ((budget * 60 )/100);
   price = people * 499.99;
 }

if(people >= 10 && people <= 24 && category == "vip")
 {
   percent = (budget) - ((budget * 50 )/100);
   price = people * 499.99;
 }

 if(people >= 25 && people <= 49 && category == "vip")
 {
   percent = (budget) - ((budget * 40 )/100);
   price = people * 499.99;
 }

 if(people >= 50 && category == "vip")
 {
   percent = (budget) - ((budget * 25 )/100);
   price = people * 499.99;
 }

remaining = percent - price;
return remaining;


}
