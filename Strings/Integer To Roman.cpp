string Solution::intToRoman(int A) {
    map<int,string> mp;
    string ans="";
    mp[1]="I";
    mp[2]="II";
    mp[3]="III";

    mp[4]="IV";
    mp[5]="V";

    mp[6]="VI";

    mp[7]="VII";

    mp[8]="VIII";

    mp[9]="IX";

    mp[10]="X";

    while(A>=1000){
        ans+="M";
        A-=1000;
    }
    if(A>=900){
        ans+="CM";
        A-=900;
    }
    if(A>=500){
        ans+="D";
        A-=500;
    }
    if(A>=400){
        ans+="CD";
        A-=400;
    }
    while(A>=100){
        ans+="C";
        A-=100;
    }
    if(A>=90){
        ans+="XC";
        A-=90;
    }
    if(A>=50){
        ans+="L";
        A-=50;
    }
    if(A>=40){
        ans+="XL";
        A-=40;
    }while(A>10){
        ans+="X";
        A-=10;
    }
    ans+=mp[A];
    return ans;
    


}
