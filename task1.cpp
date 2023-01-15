#include <iostream>
using namespace std;

char calculateGrade(int marks);

main()
{int marks;
 char result;
 cout << "Enter your marks: ";
 cin >> marks;

result = calculateGrade( marks);
cout << "Your grade is " << result ;

}


char calculateGrade(int marks)
{char gd;
    if(marks < 50)
  {
    gd = 'F';
    return gd;
  }
  
else if(marks >= 50 && marks <= 60 )
{
    gd = 'E'; 
    return gd;
}

else if(marks >= 61 && marks <= 70 )
{
    gd = 'D';
    return gd;
}

else if(marks >= 71 && marks <= 80 )
{
    gd = 'C';
    return gd;
}

else if(marks >= 81 && marks <= 85 )
{
    gd = 'B';
    return gd;
}

else
{
    gd = 'A';
    return gd;
}

return gd;

}

