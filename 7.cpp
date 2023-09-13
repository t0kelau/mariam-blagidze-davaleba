#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
string shem(int x){
    if(x>7){
    	return "true";
	}else{
		return "false";
	}
}
int main(){
int ricxvi= rand();
cout<<ricxvi<<" ";
cout<<shem(ricxvi);
}
//c++
