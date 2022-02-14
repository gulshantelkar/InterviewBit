/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool comp(Interval a,Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &interval, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> res;
    interval.push_back(newInterval);
    sort(interval.begin(),interval.end(),comp);
    res.push_back(interval[0]);

    for(int i=1;i<interval.size();i++){
        if(interval[i].start<=res[res.size()-1].end){
            res[res.size()-1].end=max(interval[i].end,res[res.size()-1].end);
        }else{
            res.push_back(interval[i]);

        }

    }
    return res;
}
