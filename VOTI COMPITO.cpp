#include <iostream>
using namespace std;
int main()
{
const int MAX=100;
int v[MAX];
int i;
int n;
int vs=0;
int vi=0;


cout<<"Quanti voti vuoi inserire"<<endl;
cin>>n;

for(i=0;i<n;i++) {
	cout<<"inserisci i voti uno per uno: ";
	cin>>v[i];
	
	
if(v[i]>=6) {
	vs++;
}	

if(v[i]<6){
	vi++;
}	
		
}

cout<<"i voti insufficenti sono: "<<vi<<endl;
cout<<"i voti sufficenti sono: "<<vs<<endl;

if(vs>vi) {
cout<<"I VOTI SUFFICENTI SONO DI PIU'"<<endl;
}

if(vi>vs) {
cout<<"I VOTI INSUFFICENTI SONO DI PIU'"<<endl;
}

if(vs==vi) {
	cout<<"I VOTI INSUFFICENTI SONO LI STESSI DI QUELLI SUFFICENTI"<<endl;
}










return 0;
}

