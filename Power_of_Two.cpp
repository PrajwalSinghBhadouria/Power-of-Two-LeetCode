class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        else if(n==-2147483648){
            return false;
        }
        int ans;
        if((n&1) != 1){
            ans =  __builtin_popcount(n);
        }
        else{
            return false;
        }
        cout<<ans<<endl;
        if(ans !=1){
            return false;
        }
        return true;
    }
};
