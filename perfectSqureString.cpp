#include<bits/stdc++.h>
using namespace std;

int isSqure(string str){
    int sum=0;
    for(int i=0;i<str.size();i++){
        sum=sum+(int)str[i];
    }
    double d=sqrt(sum);
    if(d==int(d))
        return 1;
    else
        return 0;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    cout<<isSqure(str)<<endl;
	}
	return 0;
}
