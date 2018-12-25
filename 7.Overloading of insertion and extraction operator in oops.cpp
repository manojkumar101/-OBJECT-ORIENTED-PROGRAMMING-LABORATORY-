#include<iostream>
using namespace std;
class tv
{
    int model,size,money;
public:
    friend istream& operator >>(istream& input,tv & s);
    friend ostream& operator <<(ostream& input,tv & s);
};
istream & operator >>(istream &input,tv & s)
{
    while(1)
    {try{
          cout<<"Enter the Model No ::\n";
          cin>>s.model;//look at lower while there ia another way of accepting input
          if(s.model<0||s.model>10000)
            throw(s.model);
          else
            break;
         }
         catch(int)
         {
          cout<<"Enter the valid model no\n";
         }
         return input;

    }
    while(1)
    {try{
          cout<<"Enter the size ::\n";
          input>>s.size;
          if(s.size<12||s.size>70)
            throw(s.size);
          else
            break;
         }
         catch(int)
         {
          cout<<"Enter the valid size\n";
         }

    }
    while(1)
    {try{
          cout<<"Enter the Model Price::\n";
          input>>s.money;
          if(s.money<0||s.money>10000)
            throw(s.money);
          else
            break;
         }
         catch(int)
         {
          cout<<"Enter the valid price\n";
         }

    }
}
ostream & operator <<(ostream& input,tv & s)
{cout<<"\n\n OUTPUT \n\n";
    cout<<"Model no:: ";
    input<<s.model;
    cout<<"\nSize   :: ";
    input<<s.size;
    cout<<"\nPrice    : ";
    input<<s.money;
}

int main()
{
    tv t;
    cin>>t;
    cout<<t;
    return 0;
}
