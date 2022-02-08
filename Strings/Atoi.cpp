int Solution::atoi(const string A) {
    if(A.size()==0) return 0;
    long long int num=0;
    int sign=0;
    int i=0;
    while(A[i]&& A[i]==' '){
        i++;
    }
    if(A[i]=='-'||A[i]=='+'){
        if(!A[i+1]) return 0;
        if(A[i+1]<'0'||A[i+1]>'9' ) return 0;
        if(A[i]=='-'){
            sign=1;
        }
        i++;
    }
    while(A[i]&&A[i]>='0'&& A[i]<='9'){
        num=num*10+(A[i]-'0');
        if(num>INT_MAX){
            if(sign){
                return INT_MIN;
            }
            return INT_MAX;
        }
        i++;
    }
    if(sign){
        return -num;
    }
    return num;
}
