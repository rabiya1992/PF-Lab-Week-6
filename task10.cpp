#include <iostream>
#include <cmath>
using namespace std;

float volleyBall(string year, float holidays, float weekends);

main()
{string year;
 float holidays;
 float weekends;
 float answer;

 cout << "Enter the year: ";
 cin >> year;
 cout << "Enter count of holidays in the year: ";
 cin >> holidays;
 cout << "Enter count of weekends when Vladimir visits town: ";
 cin >> weekends;
 
answer = volleyBall( year, holidays, weekends);
cout << floor(answer);



}



float volleyBall(string year, float holidays, float weekends)
{
 float traveling;
 float playing;
 float totalTime;
 float gameplay;
 


 traveling = 48 - weekends;
 playing = (3 * (traveling /4 )) + (2 * (holidays / 3));
 totalTime = playing + weekends;

 if(year == "leap")
 {
    gameplay = totalTime + ((totalTime * 15) / 100);
   
 }   

 if(year == "normal")
 {
    gameplay = totalTime;
   
 }

 return gameplay;

}