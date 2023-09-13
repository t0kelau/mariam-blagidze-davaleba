#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int arr[10];
	for(int i=0; i<10; i++){
		arr[i]=rand();
	}
    int sum=0;
    for(int i=0; i<10; i++){
		sum+=arr[i];
	}
	if(sum%2==0){
		cout<<"true";
	}else{
		cout<<"false";
	}
}
//c++
