#include <bits/stdc++.h>

using namespace std;

int main(){
    int q,flag =0;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int i=0;
        flag=0;
            while(i < s.length() && s[i] != 'h')
            {
                i++;
         //       cout<<"loop\n";
            };
            if(i+1 == s.length())
            {
                cout<<"NO\n";
                continue;
            }
     //   cout<<"After h\n";
                
            while(i+1 < s.length() && s[i+1]!='a')
            {
              i++  ;
          //      cout<<"loop\n";
            };
            if(i+1 == s.length())
            {
                cout<<"NO\n";
                continue;
            }   
        //cout<<"After ha\n";
            while(i+1 < s.length() && s[i+1]!='c')
            {
              i++  ;
           //     cout<<"loop\n";
            };
            if(i+1 == s.length())
            {
                cout<<"NO\n";
                continue;
            }  
      //  cout<<"After hac\n";
            while(i+1 < s.length() && s[i+1]!='k')
            {
              i++  ;
        //        cout<<"loop\n";
            };
            if(i+1 == s.length())
            {
                cout<<"NO\n";
                continue;
            }   
        //cout<<"After hack\n";
            while(i+1 < s.length() && s[i+1]!='e')
            {
              i++  ;
           //     cout<<"loop\n";
            };    
            if(i+1 == s.length())
            {
                cout<<"NO\n";
                continue;
            }     
     //   cout<<"After hacke\n";
            while(i+1 < s.length() && s[i+1]!='r')
            {
              i++  ;
           //     cout<<"loop\n";
            };  
            if(i+1 == s.length())
            {
                cout<<"NO\n";
               continue;
            }  
        //cout<<"After hacker\n";
            while(i+1 < s.length() && s[i+1]!='r')
            {
              i++  ;
        //        cout<<"loop\n";
            };
            if(i+1 == s.length())
            {
                cout<<"NO\n";
               continue;
            }       
        //cout<<"After hackerr\n";
            while(i+1 < s.length() && s[i+1]!='a')
            {
              i++ ; 
            //    cout<<"loop\n";
            };
            if(i+1 == s.length())
            {
                cout<<"NO\n";
                continue;
            } 
        //cout<<"After hackerra\n";
            while(i+1 < s.length() && s[i+1]!='n')
            {
              i++  ;
             //   cout<<"loop\n";
            };     
            if(i+1 == s.length())
            {
                cout<<"NO\n";
                continue;
            } 
        //cout<<"After hackerran\n";
            while(i+1 < s.length() && s[i+1]!='k')
            {
              i++  ;
            //    cout<<"loop\n";
              flag = 1;
            };    
        //cout<<"After hackerrank\n";
            if(flag == 1)
                cout<<"YES\n";
            else
                cout<<"NO\n";           
                
        }

    return 0;
}
