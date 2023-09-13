#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
double area(double a, double b, double c){
	return sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));
}
int main(){
double a,b,c;
cin>>a>>b>>c;
cout<<area(a,b,c);
}
//c++
