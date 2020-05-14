//gcd OF A AND B
#include<iostream>
using namespace std;
int scoob(int a,int b)
{
    int q,r;
    q=a/b;
    r=a%b;
    if (r==0){
        return b;
    }
    else{
    scoob(b,r);
    }
}
int main(){
int x,y,a,b;
cout<<"Enter the Numbers For gcd:";
cin>>x>>y;
cout<<endl;
a=(x>y?x:y);
b=((x+y)-a);
cout<<"Greatest divisor that divides both "<<x<<" and "<<y<< " is " <<(b==1?1:scoob(a,b));
return 0;
}



