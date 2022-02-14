int Solution::repeatedNumber(const vector<int> &A) {

int n=A.size();
    int xo=0;
    for(int i=1;i<=n;i++){
        xo^=i;
    }
    for(int i=0;i<n;i++){
        xo^=A[i];
    }
    int rsb =xo & -xo;

int x=0;
int y=0;
    for(auto val : A){
        if(val & rsb){
            x^=val;
        }else{
            y^=val;
        }
    }
    for(int i=1;i<=n;i++){
        if(i & rsb){
            x^=i;
        }else{
            y^=i;
        }

    }
    for(auto val  : A){
        if(x==val){
            return x;
        }else if(y==val){

return y;
        }
    }
    
}
