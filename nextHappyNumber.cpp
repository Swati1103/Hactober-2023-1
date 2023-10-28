class Solution{
    int isHappy(int x){
        set<int> s;
        int ans;
        int i;
        
        while(1){
            ans=0;
            while(x){
                i=x%10;
                ans+=i*i;
                x=x/10;
            }
            if(ans==1){
                return 1;
            }else if(s.find(ans)!=s.end()){
                return 0;
            }
            s.insert(ans);
            x=ans;
        }
        return 0;
    }
public:
    int nextHappy(int N){
        // code here
        int x=N+1;
        while(x){
            if(isHappy(x)==1)
            return x;
            
            x++;
        }
        return -1;
    }
};
