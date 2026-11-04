#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int cnt=0,first=-1,last=-1;
	    for(int i=0;i<n;i++){
	        long long x;
	        scanf("%lld",&x);
	        if(x%2!=0){
	            cnt++;
	            if(first==-1)first=i;
	            last=i;
	            
	        }
	    }
	    if(cnt%2==0){
	        printf("%d\n",n);
	        
	    } else{
	        int ans=max(n-(first+1),last);
	        printf("%d\n",ans);
	    }
	}
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna