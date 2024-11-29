 
//PROGRAM TO COMPUTE THE SQUARE ROOT OF A COMPLEX NUMBER a + bi
//by solving the equations a=x^2-y^2 and b=2xyi 
#include <iostream>
#include <math.h>
using namespace std;

void wait()
{
  cout << "\nPress Enter to continue..." << endl;
  cin.ignore(10, '\n');
  cin.get();
}

int main()
{
    double a, b; //real and complex parts of the complex number respectively
    double x, y; //the real and complex parts of the root respectively
    double D, k;  //Intermediate variables used in computing the solution

  //PROMPTING USER TO INPUT THE COMPLEX NUMBER
    cout<<"Input the complex number in the form a+bi \n";
    cout<<" a b = ";
    cin>>a>>b;
    
    
  
  if(b != 0 )     //Checking if the number is a complex number, i.e. b is not zero
  {
      D = a * a + b * b;
      k=(a+sqrt(D))/2;
      x=sqrt(k);
      y=b/(2*x);

      if (y>0)     //if y is positive
        cout<<"The roots are ("<<x<<"+"<<y<<"i) or -("<<x<<"+"<<y<<"i)";
      else //y is negative
        cout<<"The roots are ("<<x<<y<<"i) or -("<<x<<y<<"i)";
  }
   else cout<<"The number is not a complex number"<<"Its root is "<<sqrt(a);

   cout<<"\n BACK CHECK ANSWER: a = "<<x*x-y*y<<"   b= "<<2*x*y;

   wait();
   return 0;

}
