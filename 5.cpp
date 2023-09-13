#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
int arr1[10], arr2[10];
int sum1=0, sum2=0;
for(int i=0; i<10; i++){
	arr1[i]=1+(0+ rand()%49)*2;
	sum1+=arr1[1];
}
for(int i=0; i<10; i++){
	arr2[i]=(0+ rand()%50)*2;
	sum2+=arr2[i];
}
if(sum2>sum1 && sum2<700){
	cout<<"true";
}else{
	cout<<"false";
}
}
//c++
