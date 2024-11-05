#include <iostream>
using namespace std;

int main() {
double p, t;
cout << "Enter Purchase Amount." << endl;
cin >> p;

if(p>=0 && p<=10000)
{
   if(p<100){
       t = p;
   }
   else if(p>=100 && p<500){
       t = p*(0.9);
   }
   else if(p>=500 && p<1000){
       t= p*(0.85);
   }
   else if(p>=1000){
       t= p*(0.8);
   }
   cout << "Total amount payable is " << t << endl;
}

else
{
   cout << "Invalid input" << endl;
}
return 0;
}
