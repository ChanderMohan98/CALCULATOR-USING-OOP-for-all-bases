#include<iostream>
#include<stack>
#include<sstream>
#include<string>
#include<stdlib.h>


using namespace std;


class Number
{ public:
  string n;
  ~Number()   // for memory deallocation
   {}
};

class decimal:public Number
{ public:
  long  cnvt_dec_to_dec()
  { long  c;
    istringstream(n) >> dec >> c;
   // cout<<" the number in decimal number system is : "<<c <<"\n"; 
    return c;
  }
  void cnvt_dec_to_bin()
   {  
      long  dec,rem,i=1,sum=0;
      dec=cnvt_dec_to_dec() ;
 
      do
      {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
      }while(dec>0);
       cout<<"The binary of the given number is:"<<sum<<endl;
    
     
   }   
  void cnvt_dec_to_hex()
   {  cout << "The number in hexadecimal number system is:   " << hex << cnvt_dec_to_dec()<< '\n';
   }   
  

   void cnvt_dec_to_oct()
   {  cout << "The number in octal number system is:   " << oct << cnvt_dec_to_dec()<< '\n';
   }

 ~decimal()
   {}
   
 } ;


class binary:public Number
{ public:
  long  cnvt_dec_to_dec()
  { long  c;
    istringstream(n) >> dec >> c;
   // cout<<" the number in decimal number system is : "<<c <<"\n"; 
    return c;
  }
  
  long  cnvt_bin_to_dec()
  { long bin, dec = 0, rem, base = 1;
    bin=cnvt_dec_to_dec();
   
    while (bin > 0)
   {

        rem = bin % 10;

        dec = dec + rem * base;

        base = base * 2;

        bin = bin / 10;

    }
   return dec;
   }
   
   void cnvt_bin_to_hex()
   {  cout << "The number in hexadecimal number system is: " << hex << cnvt_bin_to_dec()<< '\n';
   }   
 
  void cnvt_bin_to_oct()
   {  cout << "The number in octal number system is: " << oct << cnvt_bin_to_dec()<< '\n';
   }
   
  ~binary()    // for memory deallocation
    {} 
 } ;

class octal:public Number
{ public:
  long cnvt_oct_to_dec()
  { long c;
    istringstream(n) >> oct >> c;
   // cout<<" the number in decimal number system is : "<<c <<"\n"; 
    return c;
  }


  void cnvt_oct_to_bin()
   {  
      long  dec,rem,i=1,sum=0;
      dec=cnvt_oct_to_dec() ;
 

      do
      {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
      }while(dec>0);
       cout<<"The binary of the given number is:"<<sum<<endl;

     
   }   
 
  void cnvt_oct_to_hex()
   {  cout << "The number in hexadecimal number system is:   " << hex << cnvt_oct_to_dec()<< '\n';
   } 
   

  ~octal(){}   // for memory deallocation
   
 } ;
class hexadecimal:public Number
{ public:
  long  cnvt_hex_to_dec()
  { long  c;
    istringstream(n) >> hex >> c;
   // cout<<" the number in decimal number system is : "<<c <<"\n"; 
    return c;
  }
   

  void cnvt_hex_to_bin()
   {  
      long  dec,rem,i=1,sum=0;
      dec=cnvt_hex_to_dec() ;
 

      do
      {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
      }while(dec>0);
       cout<<"The binary of the given number is:"<<sum<<endl;

     
   }   
  
  void cnvt_hex_to_oct()
   {  cout << "The number in hexadecimal number system is:   " << oct << cnvt_hex_to_dec()<< '\n';
   }   
  
  ~hexadecimal(){}    // for memory deallocation
   
 } ;

class Arith
{
  
    public:
        long add(decimal d1,decimal d2);   // function overloading
        long add(binary b1,binary b2);
        long add(octal o1,octal o2);
        long add(hexadecimal h1,hexadecimal h2);

        long sub(decimal d1,decimal d2);   // function overloading
        long sub(binary b1,binary b2);
        long sub(octal o1,octal o2);
        long sub(hexadecimal h1,hexadecimal h2);


        long mul(decimal d1,decimal d2);   // function overloading
        long mul(binary b1,binary b2);
        long mul(octal o1,octal o2);
        long mul(hexadecimal h1,hexadecimal h2);


        long div(decimal d1,decimal d2);   // function overloading
        long div(binary b1,binary b2);
        long div(octal o1,octal o2);
        long div(hexadecimal h1,hexadecimal h2);
    ~Arith(){}    // destructor for data deallocation

};
 // for decimals
 long Arith::add(decimal d1,decimal d2)
        {  long x=d1.cnvt_dec_to_dec();
           long y=d2.cnvt_dec_to_dec();
           cout<<" The sum of the numbers is : "<<x+y<<" in base 10 \n";
           return(x+y);
        }
 long Arith::sub(decimal d1,decimal d2)
        {  long x=d1.cnvt_dec_to_dec();
           long y=d2.cnvt_dec_to_dec();
           cout<<" The difference of the numbers is : "<<x-y<<" in base 10 \n";
           return(x-y);
        }
 long Arith::mul(decimal d1,decimal d2)
        {  long x=d1.cnvt_dec_to_dec();
           long y=d2.cnvt_dec_to_dec();
           cout<<" The product of the numbers is : "<<x*y<<" in base 10 \n";
           return(x*y);
        }
 long Arith::div(decimal d1,decimal d2)
        {  long x=d1.cnvt_dec_to_dec();
           long y=d2.cnvt_dec_to_dec();
           cout<<" The division of the numbers is : "<<x*1.0/y<<" in base 10 \n";
          return(x*1.0/y);
        } 

 // for binary

long Arith::add(binary b1,binary b2)
        {  long x=b1.cnvt_bin_to_dec();
           long y=b2.cnvt_bin_to_dec();
           cout<<" The sum of the numbers is : "<<x+y<<" in base 10 \n";
           return(x+y);
        }
 long Arith::sub(binary b1,binary b2)
        {  long x=b1.cnvt_bin_to_dec();
           long y=b2.cnvt_bin_to_dec();
           cout<<" The difference of the numbers is : "<<x-y<<" in base 10 \n";
           return(x-y);
        }
 long Arith::mul(binary b1,binary b2)
        {  long x=b1.cnvt_bin_to_dec();
           long y=b2.cnvt_bin_to_dec();
           cout<<" The product of the numbers is : "<<x*y<<" in base 10 \n";
           return(x*y);
        }
 long Arith::div(binary b1,binary b2)
        {  long x=b1.cnvt_bin_to_dec();
           long y=b2.cnvt_bin_to_dec();
           cout<<" The division of the numbers is : "<<x*1.0/y<<" in base 10 \n";
           return(x*1.0/y);
        }



// for octal


long Arith::add(octal o1,octal o2)
        {  long x=o1.cnvt_oct_to_dec();
           long y=o2.cnvt_oct_to_dec();
           cout<<" The sum of the numbers is : "<<x+y<<" in base 10 \n";
           return(x+y);
        }
 long Arith::sub(octal o1,octal o2)
        {  long x=o1.cnvt_oct_to_dec();
           long y=o2.cnvt_oct_to_dec();
           cout<<" The difference of the numbers is : "<<x-y<<" in base 10 \n";
           return(x-y);
        }
 long Arith::mul(octal o1,octal o2)
        {  long x=o1.cnvt_oct_to_dec();
           long y=o2.cnvt_oct_to_dec();
           cout<<" The product of the numbers is : "<<x*y<<" in base 10 \n";
           return(x*y);
        }
 long Arith::div(octal o1,octal o2)
        {  long x=o1.cnvt_oct_to_dec();
           long y=o2.cnvt_oct_to_dec();
           cout<<" The division of the numbers is : "<<x*1.0/y<<" in base 10 \n";
           return(x*1.0/y);
        }

// for hexadecimal


long Arith::add(hexadecimal h1,hexadecimal h2)
        {  long x=h1.cnvt_hex_to_dec();
           long y=h2.cnvt_hex_to_dec();
           cout<<" The sum of the numbers is : "<<x+y<<" in base 10 \n";
           return(x+y);
        }
 long Arith::sub(hexadecimal h1,hexadecimal h2)
        {  long x=h1.cnvt_hex_to_dec();
           long y=h2.cnvt_hex_to_dec();
           cout<<" The difference of the numbers is : "<<x-y<<" in base 10 \n";
           return(x-y);
        }
 long Arith::mul(hexadecimal h1,hexadecimal h2)
        {  long x=h1.cnvt_hex_to_dec();
           long y=h2.cnvt_hex_to_dec();
           cout<<" The product of the numbers is : "<<x*y<<" in base 10 \n";
           return(x*y);
        }
 long Arith::div(hexadecimal h1,hexadecimal h2)
        {  long x=h1.cnvt_hex_to_dec();
           long y=h2.cnvt_hex_to_dec();
           cout<<" The division of the numbers is : "<<x*1.0/y<<" in base 10 \n";
           return(x*1.0/y);
        }


string cnvt_int_to_string(long x)
    {
     string result;
     ostringstream convert;
     convert<<x;
     result = convert.str();
     return result;
     }

class datastack
{ public:
  stack<string> operand1;
  stack<string> operand2;
  stack<string> operation;
  ~datastack(){} // destructor for data deallocation
   
};
