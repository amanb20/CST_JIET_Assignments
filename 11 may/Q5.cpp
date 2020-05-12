#include<bits/stdc++.h>
using namespace std;
int main(){
int sq=1;
int i = 1;
int var=15;
if(var==1||var==0) 
{
	return var;
}
else
{
    while (sq <= var) 
    { 
      i++; 
      sq = i * i; 
    } 
    return i - 1; 
}
}
