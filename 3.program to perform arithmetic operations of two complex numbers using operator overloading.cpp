#include<iostream>
using namespace std;
class complex1
{
    float a,b;
public :
    complex1()
    {
        a=0;
        b=0;
    }
    complex1(float x, float y)
    {
        a=x;
        b=y;
    }
    void display(void);
    complex1 operator+(complex1);
    complex1 operator-(complex1);
    friend complex1 operator *(complex1 one, complex1 two)
{
    complex1 temp;
    temp.a=one.a*one.b-two.a*two.b;
    temp.b=one.b*two.a+two.b*one.a;
    return temp;
}
    complex1 operator /(complex1 c2)
 {
 complex1 c3;
 c3.a=((a*c2.a)+(b*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
 c3.b=((b*c2.a)-(a*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
 return c3;
 }
};
void complex1 :: display(void)
{
    cout<<"\nreal part is "<<a<<" and imaginary part is "<<b<<"i";
}
complex1 complex1 :: operator+(complex1 c)
{
    complex1 temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
complex1 complex1 :: operator-(complex1 c)
{
    complex1 temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
int main()
{
    int ch;
    char ch1;
    float p,q,a,b;
    complex1 c3;
    cout<<"enter the real and imaginary part of the first complex no. \n";
    cin>>p>>q;
    complex1 c1(p, q);
    cout<<"enter the real and imaginary part of the second complex no. \n";
    cin>>a>>b;
    complex1 c2(a, b);

    do
    {
    cout<<"\nenter";
    cout<<"\n1. addition \n2. subtraction \n3. multiplication \n4. division \n\n";
    cin>>ch;

        switch(ch)
        {
            case 1:
                c3=c1+c2;
                c3.display();
                break;

            case 2:
                c3=c1-c2;
                c3.display();
                break;

            case 3:
                c3=c1*c2;
                c3.display();
                break;

            case 4:
                c3=c1/c2;
                c3.display();
                break;

            default : cout<<"error in input, try again";
        }
        cout<<"\n  IF U WANT TO CONTINUE TYPE 'y' OTHERWISE 'n' \n ";
        cin>>ch1;
    }while (ch1!='n');


    return 0;
}
