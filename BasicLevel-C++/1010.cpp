#include <iostream>
#include <map>
using namespace std;
int main(void ) {
    char ch;
        int exp,conf,index=0;
            map<int,int> mp,dict;
                do {
                        cin >> conf >> exp;
                                mp.insert(make_pair(exp,conf));
                                        ch = getchar();
                                            } while (ch!='\n');
                                                for (auto it = mp.begin();it!=mp.end();++it){
                                                        if (mp.size()==1 && it->first==0 || it->second==0 && it->first==0)
                                                                    dict.insert(pair<int,int>(0,0));
                                                                            if ((it->first)* (it->second))
                                                                                     dict.insert(make_pair(it->first-1,(it->first)* (it->second)));
                                                                                        }
                                                                                                for (auto rit=dict.rbegin();rit!=dict.rend();++rit){
                                                                                                            if (index++) cout << " ";
                                                                                                                        cout << rit->second << " " << rit->first;
                                                                                                                                }
                                                                                                                                    return 0;
    }