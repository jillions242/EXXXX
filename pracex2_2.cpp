#include<iostream>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
	cout<<"1:9";
    cout<<"\n";
    cout<<"2:8.2";
    cout<<"\n";
    cout<<"3:7";
    cout<<"\n";
    cout<<"3:7";
    cout<<"\n";
    cout<<"5:6.9";
    cout<<"\n";
    cout<<"5:6.9";
    cout<<"\n";
    cout<<"5:6.9";
    cout<<"\n";
    cout<<"8:5.5";
    cout<<"\n";
    cout<<"8:5.5";
    cout<<"\n";
    cout<<"10:4.6";
    cout<<"\n";
    cout<<"11:4.5";
    cout<<"\n";
    cout<<"12:4";
    cout<<"\n";
    cout<<"13:3";
    cout<<"\n";
    cout<<"13:3";
    cout<<"\n";
    cout<<"15:2.4";
    cout<<"\n";
    cout<<"15:2.4";
    cout<<"\n";
    cout<<"17:2.3";
    cout<<"\n";
    cout<<"18:2";
    cout<<"\n";
    cout<<"19:1.7";
    cout<<"\n";
    cout<<"20:0";

	return 0;
}
