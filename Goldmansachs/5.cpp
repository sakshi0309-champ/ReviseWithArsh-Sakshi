class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull uglyno[n];
	    uglyno[0]=1;
	    int c2(0),c3(0),c5(0);
	    for(int i=1;i<n;i++){
	        uglyno[i]=min(2*uglyno[c2],min(3*uglyno[c3],5*uglyno[c5]));
	        if(uglyno[i]==2*uglyno[c2])
	             c2++;
	        if(uglyno[i]==3*uglyno[c3])
	             c3++;
	        if(uglyno[i]==5*uglyno[c5])
	             c5++;
	                   
	    
	    }
	    return uglyno[n-1];
	}
};