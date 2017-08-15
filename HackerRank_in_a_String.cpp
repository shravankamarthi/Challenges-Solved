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
        i++;
            if(i == s.length())
            {
                //cout<<"NO\n";
                goto exit;
            }
     //   cout<<"After h\n";
                
            while(i < s.length() && s[i]!='a')
            {
              i++  ;
          //      cout<<"loop\n";
            };
        i++;
            if(i == s.length())
            {
               // cout<<"NO\n";
               goto exit;
            }   
        //cout<<"After ha\n";
            while(i< s.length() && s[i]!='c')
            {
              i++  ;
           //     cout<<"loop\n";
            };
        i++;
            if(i == s.length())
            {
               // cout<<"NO\n";
               goto exit;
            }  
      //  cout<<"After hac\n";
            while(i < s.length() && s[i]!='k')
            {
              i++  ;
        //        cout<<"loop\n";
            };
        i++;
            if(i == s.length())
            {
               // cout<<"NO\n";
                goto exit;
            }   
        //cout<<"After hack\n";
            while(i < s.length() && s[i]!='e')
            {
              i++  ;
           //     cout<<"loop\n";
            }; 
        i++;
            if(i == s.length())
            {
                //cout<<"NO\n";
                goto exit;
            }     
     //   cout<<"After hacke\n";
            while(i < s.length() && s[i]!='r')
            {
              i++  ;
           //     cout<<"loop\n";
            };  
        i++;
            if(i == s.length())
            {
                //cout<<"NO\n";
               goto exit;
            }  
        //cout<<"After hacker\n";
            while(i <= s.length() && s[i]!='r')
            {
              i++  ;
        //        cout<<"loop\n";
            };
        i++;
            if(i == s.length())
            {
                //cout<<"NO\n";
               goto exit;
            }       
       // cout<<"After hackerr\n";
            while(i < s.length() && s[i]!='a')
            {
              i++ ; 
            //    cout<<"loop\n";
            };
            if(i == s.length())
            {
                //cout<<"NO\n";
                goto exit;
            } 
        //cout<<"After hackerra\n";
            while(i < s.length() && s[i]!='n')
            {
              i++  ;
             //   cout<<"loop\n";
            };     
            if(i == s.length())
            {
                //cout<<"NO\n";
                goto exit;
            } 
        //cout<<"After hackerran\n";
            while(i < s.length() && s[i]!='k')
            {
              i++  ;
            //    cout<<"loop\n";
              flag = 1;
                goto exit;
            }; 
             i++;
            if(i == s.length())
            {
                //cout<<"NO\n";
               goto exit;
            }         
       // cout<<"After hackerrank\n";
        exit:
            if(flag == 1)
                cout<<"YES\n";
            else
                cout<<"NO\n";           
                
        }

    return 0;
}
