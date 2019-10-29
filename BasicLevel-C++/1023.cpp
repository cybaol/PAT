#include <bits/stdc++.h>
using namespace std;
int main(void ){
	ios::sync_with_stdio(false );
    	vector<int> v1(10),v2;
        	for (int i=0;i<10;++i)
            	    cin>>v1[i];
                    	int i,count=0;
                        	for (i=1;i<10;++i)
                            	    if (v1[i]) break;
                                    	cout<<i;
                                        	--v1[i];
                                            	for (int idx=0;idx<10;++idx)
                                                	     if (v1[idx])
                                                         	         while (v1[idx]--){
                                                                      	             v2.push_back(idx);
                                                                                       	             ++count;
                                                                                                        	         }
                                                                                                                     	for (int i=0;i<count;++i)
                                                                                                                         	    cout<<v2[i];
                                                                                                                                 	return 0;
                                                                                                                                     }