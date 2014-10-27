class Solution {
public:

    void gp(int l, int r, int n, string str, vector<string>& res){
        if (l>n) return;
        if ( r==n ) res.push_back(str);
        else{
            gp(l+1,r,n,str+'(',res);
            if(l>r){
                gp(l,r+1,n,str+')',res);
            }
        }
    }
        
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n==0) return res;
        
        gp(0,0,n,"",res);
        
    }
};
