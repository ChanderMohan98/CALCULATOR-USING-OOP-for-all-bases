#include<iostream>
#include<stack>
#include<sstream>
#include<string>
#include<stdlib.h>
#include"header.cpp"
int main()
{ datastack dt,dt2;
  Arith a;
  int x,u; 
do
{
 cout<<"     SELECT THE CALCULATOR MODE \n \n "
      <<" PRESS 1 TO WORK IN DECIMAL NUMBER SYSTEM \n "
      <<" PRESS 2 TO WORK IN BINARY NUMBER SYSTEM \n "
      <<" PRESS 3 TO WORK IN OCTAL NUMBER SYSTEM \n "
      <<" PRESS 4 TO WORK IN HEXADECIMAL NUMBER SYSTEM \n "
      <<" PRESS 5 TO  VIEW AND MANIPULATE THE HISTORY OF OPERATIONS \n "
      <<" PRESS 6 TO EXIT THE PROGRAM \n";
 cin>>x;
 if(x==1)
 {int in;
  cout<<" PRESS 1 FOR CONVERSIONS TO DIFFERENT BASES \n"
      <<" PRESS 2 FOR ARETHAMATIC OPERATIONS \n ";
  cin>>in;  
  

  if(in==1)
    { int in1;
      decimal d;
      cout<<" ENTER THE NUMBER TO BE CONVERTED(SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
        cin>>d.n;
      cout<<" PRESS 1 FOR CONVERSION INTO BINARY \n"
          <<" PRESS 2 FOR CONVERSION INTO OCTAL \n"
          <<" PRESS 3 FOR CONVERSION INTO HEXADECIMAL \n"
          <<" PRESS 4 FOR EXIT \n";
      cin>>in1;
      if(in1==1)
       { d.cnvt_dec_to_bin();
         dt.operand1.push(d.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert decimal to binary ");
       }
       else if(in1==2)
       { d.cnvt_dec_to_oct();
         dt.operand1.push(d.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert decimal to octal ");
       }
       else if(in1==3)
       { d.cnvt_dec_to_hex();
         dt.operand1.push(d.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert decimal to hexadecimal ");
       }
       else if(in1==4)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
  

  else if(in==2)
    {int in2;
     decimal d1,d2;
     cout<<" PRESS 1 FOR ADDITION \n"
         <<" PRESS 2 FOR SUBTRACTION \n"
         <<" PRESS 3 FOR MULTIPLICATION \n"
         <<" PRESS 4 FOR DIVISION \n"
         <<" PRESS 5 FOR EXIT \n";
     cin>>in2;
     if(in2==1)
        { cout<<"ENTER THE FIRST NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
          cin>>d1.n;
          cout<<"ENTER THE SECOND NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
          cin>>d2.n;
          a.add(d1,d2);
          dt.operand1.push(d1.n);
          dt.operand2.push(d2.n);
          dt.operation.push(" add two decimal numbers ");
        }
      else if(in2==2)
        { cout<<"ENTER THE FIRST NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
          cin>>d1.n;
          cout<<"ENTER THE SECOND NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
          cin>>d2.n;
          a.sub(d1,d2);
          dt.operand1.push(d1.n);
          dt.operand2.push(d2.n);
          dt.operation.push(" subtract two decimal numbers ");
        }
       else if(in2==3)
        { cout<<"ENTER THE FIRST NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM)\n";
          cin>>d1.n;
          cout<<"ENTER THE SECOND NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
          cin>>d2.n;
          a.mul(d1,d2);
          dt.operand1.push(d1.n);
          dt.operand2.push(d2.n);
          dt.operation.push(" multiply two decimal numbers ");
        }
       else if(in2==4)
        { cout<<"ENTER THE FIRST NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
          cin>>d1.n;
          cout<<"ENTER THE SECOND NUMBER (SHOULD BE IN DECIMAL NUMBER SYSTEM) \n";
          cin>>d2.n;
          a.div(d1,d2);
          dt.operand1.push(d1.n);
          dt.operand2.push(d2.n);
          dt.operation.push(" divide two decimal numbers ");
        }
       else if(in2==5)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
   else
      { cout<<" WRONG INPUT \n";
      }
 }
else if(x==2)
{int in;
  cout<<" PRESS 1 FOR CONVERSIONS TO DIFFERENT BASES \n"
      <<" PRESS 2 FOR ARETHAMATIC OPERATIONS \n ";
  cin>>in;  
  

  if(in==1)
    { int in1;
      binary b;
      cout<<" ENTER THE NUMBER TO BE CONVERTED(SHOULD BE IN BINARY NUMBER SYSTEM) \n";
        cin>>b.n;
      cout<<" PRESS 1 FOR CONVERSION INTO DECIMAL \n"
          <<" PRESS 2 FOR CONVERSION INTO OCTAL \n"
          <<" PRESS 3 FOR CONVERSION INTO HEXADECIMAL \n"
          <<" PRESS 4 FOR EXIT \n";
      cin>>in1;
      if(in1==1)
       { cout<<" The number in decimal number system is: "<<b.cnvt_bin_to_dec()<<"\n";
         dt.operand1.push(b.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert binary to decimal ");
       }
       else if(in1==2)
       { b.cnvt_bin_to_oct();
         dt.operand1.push(b.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert binary to octal  ");
       }
       else if(in1==3)
       { b.cnvt_bin_to_hex();
         dt.operand1.push(b.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert binary to hexadecimal ");
       }
       else if(in1==4)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
  

  else if(in==2)
    {int in2;
     binary b1,b2;
     decimal d3;
     cout<<" PRESS 1 FOR ADDITION \n"
         <<" PRESS 2 FOR SUBTRACTION \n"
         <<" PRESS 3 FOR MULTIPLICATION \n"
         <<" PRESS 4 FOR DIVISION \n"
         <<" PRESS 5 FOR EXIT \n";
     cin>>in2;
     if(in2==1)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>b1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>b2.n;
          d3.n=cnvt_int_to_string(a.add(b1,b2));
          d3.cnvt_dec_to_bin();
          
          
          dt.operand1.push(b1.n);
          dt.operand2.push(b2.n);
          dt.operation.push(" add two binary numbers ");
        }
      else if(in2==2)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>b1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>b2.n;
          d3.n=cnvt_int_to_string(a.sub(b1,b2));
          d3.cnvt_dec_to_bin();
          
          dt.operand1.push(b1.n);
          dt.operand2.push(b2.n);
          dt.operation.push(" subtract two binary numbers ");
        }
       else if(in2==3)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>b1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>b2.n;
          d3.n=cnvt_int_to_string(a.mul(b1,b2));
          d3.cnvt_dec_to_bin();
          
          dt.operand1.push(b1.n);
          dt.operand2.push(b2.n);
          dt.operation.push(" multiply two binary numbers ");
        }
       else if(in2==4)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>b1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>b2.n;
          d3.n=cnvt_int_to_string(a.div(b1,b2));
          d3.cnvt_dec_to_bin();
          dt.operand1.push(b1.n);
          dt.operand2.push(b2.n);
          dt.operation.push(" divide two binary numbers ");
        }
       else if(in2==5)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
   else
      { cout<<" WRONG INPUT \n";
      }
 }



else if(x==3)
 {int in;
  cout<<" PRESS 1 FOR CONVERSIONS TO DIFFERENT BASES \n"
      <<" PRESS 2 FOR ARETHAMATIC OPERATIONS \n";
  cin>>in;  
  

  if(in==1)
    { int in1;
      octal o;
      cout<<" ENTER THE NUMBER TO BE CONVERTED(SHOULD BE IN OCTAL NUMBER SYSTEM) \n";
        cin>>o.n;
      cout<<" PRESS 1 FOR CONVERSION INTO DECIMAL \n"
          <<" PRESS 2 FOR CONVERSION INTO BINARY \n"
          <<" PRESS 3 FOR CONVERSION INTO HEXADECIMAL \n"
          <<" PRESS 4 FOR EXIT \n";
      cin>>in1;
      if(in1==1)
       { 
         cout<<" the number in decimal number system is : "<<o.cnvt_oct_to_dec()<<"\n";
         dt.operand1.push(o.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert octal to decimal ");
       }
       else if(in1==2)
       { o.cnvt_oct_to_bin();
         dt.operand1.push(o.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert octal to binary ");
       }
       else if(in1==3)
       { o.cnvt_oct_to_hex();
         dt.operand1.push(o.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert octal to hexadecimal ");
       }
       else if(in1==4)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
  

 else if(in==2)
    {int in2;
     octal o1,o2;
     decimal d3;
     cout<<" PRESS 1 FOR ADDITION \n"
         <<" PRESS 2 FOR SUBTRACTION \n"
         <<" PRESS 3 FOR MULTIPLICATION \n"
         <<" PRESS 4 FOR DIVISION \n"
         <<" PRESS 5 FOR EXIT \n";
     cin>>in2;
     if(in2==1)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>o1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>o2.n;
          d3.n=cnvt_int_to_string(a.add(o1,o2));
          d3.cnvt_dec_to_oct();
          
          
          dt.operand1.push(o1.n);
          dt.operand2.push(o2.n);
          dt.operation.push(" add two octal numbers ");
        }
      else if(in2==2)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>o1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>o2.n;
          d3.n=cnvt_int_to_string(a.sub(o1,o2));
          d3.cnvt_dec_to_oct();
          
          dt.operand1.push(o1.n);
          dt.operand2.push(o2.n);
          dt.operation.push(" subtract two octal numbers ");
        }
       else if(in2==3)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>o1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>o2.n;
          d3.n=cnvt_int_to_string(a.mul(o1,o2));
          d3.cnvt_dec_to_oct();
          
          dt.operand1.push(o1.n);
          dt.operand2.push(o2.n);
          dt.operation.push(" multiply two octal numbers ");
        }
       else if(in2==4)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>o1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>o2.n;
          d3.n=cnvt_int_to_string(a.div(o1,o2));
          d3.cnvt_dec_to_oct();
          dt.operand1.push(o1.n);
          dt.operand2.push(o2.n);
          dt.operation.push(" divide two octal numbers ");
        }
       else if(in2==5)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
   else
      { cout<<" WRONG INPUT \n";
      }
 }



else if(x==4)
 {int in;
  cout<<" PRESS 1 FOR CONVERSIONS TO DIFFERENT BASES \n"
      <<" PRESS 2 FOR ARETHAMATIC OPERATIONS \n ";
  cin>>in;  
  

  if(in==1)
    { int in1;
      hexadecimal h;
      cout<<" ENTER THE NUMBER TO BE CONVERTED(SHOULD BE IN HEXADDECIMAL NUMBER SYSTEM) \n";
        cin>>h.n;
      cout<<" PRESS 1 FOR CONVERSION INTO DECIMAL \n"
          <<" PRESS 2 FOR CONVERSION INTO BINARY \n"
          <<" PRESS 3 FOR CONVERSION INTO OCTAL \n"
          <<" PRESS 4 FOR EXIT \n";
      cin>>in1;
      if(in1==1)
       { 
         cout<<" the number in decimal number system is : "<<h.cnvt_hex_to_dec()<<"\n";
         dt.operand1.push(h.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert hexadecimal to decimal ");
       }
       else if(in1==2)
       { h.cnvt_hex_to_bin();
         dt.operand1.push(h.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert hexadecimal to binary ");
       }
       else if(in1==3)
       { h.cnvt_hex_to_oct();
         dt.operand1.push(h.n);
         dt.operand2.push("---");
         dt.operation.push(" Convert hexadecimal to octal ");
       }
       else if(in1==4)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
  

 else if(in==2)
    {int in2;
     hexadecimal h1,h2;
     decimal d3;
     cout<<" PRESS 1 FOR ADDITION \n"
         <<" PRESS 2 FOR SUBTRACTION \n"
         <<" PRESS 3 FOR MULTIPLICATION \n"
         <<" PRESS 4 FOR DIVISION \n"
         <<" PRESS 5 FOR EXIT \n";
     cin>>in2;
     if(in2==1)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>h1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>h2.n;
          d3.n=cnvt_int_to_string(a.add(h1,h2));
          d3.cnvt_dec_to_hex();
          
          
          dt.operand1.push(h1.n);
          dt.operand2.push(h2.n);
          dt.operation.push(" add two hexadecimal numbers ");
        }
      else if(in2==2)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>h1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>h2.n;
          d3.n=cnvt_int_to_string(a.sub(h1,h2));
          d3.cnvt_dec_to_hex();
          
          dt.operand1.push(h1.n);
          dt.operand2.push(h2.n);
          dt.operation.push(" subtract two hexadecimal numbers ");
        }
       else if(in2==3)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>h1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>h2.n;
          d3.n=cnvt_int_to_string(a.mul(h1,h2));
          d3.cnvt_dec_to_hex();
          
          dt.operand1.push(h1.n);
          dt.operand2.push(h2.n);
          dt.operation.push(" multiply two hexadecimal numbers ");
        }
       else if(in2==4)
        { cout<<"ENTER THE FIRST NUMBER \n ";
          cin>>h1.n;
          cout<<"ENTER THE SECOND NUMBER \n ";
          cin>>h2.n;
          d3.n=cnvt_int_to_string(a.div(h1,h2));
          d3.cnvt_dec_to_hex();
          dt.operand1.push(h1.n);
          dt.operand2.push(h2.n);
          dt.operation.push(" divide two hexadecimal numbers ");
        }
       else if(in2==5)
       { cout<<" exit program \n ";
         exit(0);
       }
       else
       { cout<<" WRONG INPUT \n";
       }
     }
   else
      { cout<<" WRONG INPUT \n";
      }
 }
else if(x==5)
{int i; 
 cout<<" PRESS 1 TO VIEW THE LAST OPERATION \n"
      <<" PRESS 2 TO VIEW THE WHOLE LIST OF OPERATIONS \n"
      <<" PRESS 3 TO DELETE THE LAST OPERATION  \n"
      <<" PRESS 4 TO RESET THE DATASTACK AND DELETE ALL THE HISTORY \n";
  cin>>i;
 if(i==1)
 {if(dt.operand1.size()!=0)
   {
    cout<<" OPERAND 1 : "<<dt.operand1.top() <<"     OPERAND 2 : "<<dt.operand2.top()<<"\n \t       OPERATION : "<< dt.operation.top() <<"\n\n"; 
   }
  else
   { 
    cout<<" THERE IS NO HISTORY OF OPERATIONS \n\n";
   }
  }
 else if(i==2)
 {if(dt.operand1.size()==0)
  { cout<<" THERE IS NO HISTORY OF OPERATIONS \n\n";
  }
  else
  {
   while(dt.operand1.size()!=0)
   {
     cout<<" OPERAND 1 : "<<dt.operand1.top() <<"     OPERAND 2 : "<<dt.operand2.top()<<"\n \t       OPERATION : "<< dt.operation.top() <<"\n\n"; 
     dt2.operand1.push(dt.operand1.top());
     dt2.operand2.push(dt.operand2.top());
     dt2.operation.push(dt.operation.top());
     
     dt.operand1.pop();
     dt.operand2.pop();
     dt.operation.pop();
   }
   while(dt2.operand1.size()!=0)
   { dt.operand1.push(dt2.operand1.top());
     dt.operand2.push(dt2.operand2.top());
     dt.operation.push(dt2.operation.top());
     
     dt2.operand1.pop();
     dt2.operand2.pop();
     dt2.operation.pop();
  
   }
  }
 }
 else if(i==3)
{ if(dt.operand1.size()!=0)
   {
    cout<<" OPERAND 1 : "<<dt.operand1.top() <<"     OPERAND 2 : "<<dt.operand2.top()<<"\n \t       OPERATION : "<< dt.operation.top() <<"\n\n"; 
    cout<<" DELETING THE ABOVE OPERATION \n \n";
    dt.operand1.pop();
    dt.operand2.pop();
    dt.operation.pop();
    
   }
  else
   { 
    cout<<" THERE IS NO HISTORY OF OPERATIONS \n\n";
   }
}
 else if(i==4)
 { cout<<" RESETTING THE DATASTACK \n ";
   while(dt2.operand1.size()!=0)
   {  
     dt2.operand1.pop();
     dt2.operand2.pop();
     dt2.operation.pop();
  
   }
   while(dt.operand1.size()!=0)
   {  
     dt.operand1.pop();
     dt.operand2.pop();
     dt.operation.pop();
  
   }
   
 }
 else
 { cout<<" WRONG INPUT \n ";

 }
}
else if(x==6)
{cout<<" exit program \n ";
         exit(0);
}

else
{ cout<<" INVALID INPUT ";
}


cout<<" PRESS 1 FOR MAIN MENU OR ANY OTHER INTEGER TO EXIT \n ";
cin>>u;
}while(u==1);

return 0;
} 
 
     


