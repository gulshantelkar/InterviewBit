int Solution::isNumber(const string A) {

    string str = A;
    bool numseen=false;
    bool eseen =false;
    bool dotseen=false;


    for(int i=0;i<str.size();i++){
        char c=str[i];
        if(c==' '){
            continue;
        }
        if(c-'0'>=0 && c-'0'<10){
            numseen=true;
        }

        else if(c=='e'){
            if(eseen|| !numseen ){
                return false;
            }
            eseen =true;
            numseen=false;
        }
        else if((c>='a' && c<='z' )|| c=='#'||c=='@'||c=='$'||c=='&'||c=='*'||c=='%'||c=='^'||c==':'){
            numseen =false;
            break;
        }
        else if(c=='.'){
            if(eseen || dotseen||str[i+1]==NULL||str[i+1]=='e'){
                return false;
            }
            
            dotseen =true;
        }
        else if(c=='-' || c=='+'){
            if(i!=0 && str[i-1]!='e'){
                return false;
            }
        }
    }
    return numseen;
}
