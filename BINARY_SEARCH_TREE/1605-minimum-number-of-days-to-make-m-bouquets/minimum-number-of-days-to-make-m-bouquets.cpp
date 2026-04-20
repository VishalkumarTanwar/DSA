class Solution {
public:
     int ismake(vector<int>bloomDay, int m, int k){
        int bouqcount=0;
        int consecutive=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=m){
                consecutive++;
            }else{
                consecutive=0;
            }
            if( consecutive==k){
                bouqcount++;
                consecutive=0;
            }
        }
        return bouqcount;

     }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        int start_day=0;
        int end_day= *max_element(bloomDay.begin(),bloomDay.end());
         int minday = -1;
        while(start_day<= end_day){
            int mid = (start_day + end_day)/2;
            if(ismake(bloomDay,mid,k)>=m){
                minday=mid;
                end_day=mid-1;
            }
            else{
                start_day= mid+1;
            }
        }
        return minday;
    }
};