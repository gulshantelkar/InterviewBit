bool comparator(string first,string second)
{
    string one = first+second;
    string two = second+first;
    
    int i=0;
    while(one[i] && two[i])
    {
        if(one[i]>two[i])
            return true;
        else if(one[i]<two[i])
            return false;
        ++i;
    }
    
    return false;
}
string Solution::largestNumber(const vector<int> &A) {

    vector<string> arr;
	   
	

	   for(int i=0;i<A.size();++i)
	   {
	      
	       arr.push_back(to_string(A[i]));
	   }
	   
	   sort(arr.begin(),arr.end(),comparator);
       string ans="";
       for(int i=0;i<arr.size();i++){
          ans+=arr[i];

       }
       int i=0;
    while(ans[i]=='0'){
        i++;
    }
    if(i==ans.length())
     ans="0";
    return ans;
       return ans;
}
