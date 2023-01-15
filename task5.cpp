#include <iostream>
using namespace std;

float totalIncome(string screening, int rows , int columns);


main()
{string screening;
 int rows;
 int columns;
 float answer;

 
 cout << "Enter the screening name: ";
 cin >> screening;
 cout << "Enter number of rows: ";
 cin >> rows;
 cout << "Enter number of columns: ";
 cin >> columns;

answer = totalIncome(screening, rows , columns);
cout << "The total income is " << answer ;

}





float totalIncome(string screening, int rows , int columns)
{float totalPrice;
 
 if(screening == "Premiere")
 {
    totalPrice = (rows * columns ) * (12.00) ; 
 }
 
else if(screening == "Normal")
{
    totalPrice = (rows * columns) * (7.50);
}

else if(screening == "Discount" )
{
    totalPrice = (rows * columns) * (5.00);
}

return totalPrice;

}