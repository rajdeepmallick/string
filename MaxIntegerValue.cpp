#include<bits/stdc++.h>
using namespace std;

long printMax(string str){
    long sum=(str[0]-'0');
    int digit;
    for(int i=1;i<str.size();i++){
        digit=str[i]-'0';
        if(digit==1 || digit==0 || sum<=1)
            sum=sum+digit;
        else    
            sum=sum*digit;
    }
    return sum;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    cout<<printMax(str)<<endl;
	}
	return 0;
}
