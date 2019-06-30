#include<bits/stdc++.h>
using namespace std;

long res(string str,int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1')
            c++;
    }
    return (c*(c-1)/2);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    int n;
	    cin>>n;
	    cin>>str;
	    cout<<res(str,n)<<endl;
	}
	return 0;
}
