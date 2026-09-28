#include <bits/stdc++.h>
using namespace std;

static char buf[200005];

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        scanf("%s", buf);

        vector<pair<char,int>> runs;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && buf[j]==buf[i]) j++;
            runs.push_back({buf[i], j-i});
            i=j;
        }
        int m = (int)runs.size();
        long long count0=0, count1=0;
        for(auto &r: runs){
            if(r.first=='0') count0 += (r.second-1);
            else count1 += (r.second-1);
        }
        long long diff = count0-count1;
        long long base = (long long)n-m;
        long long ans;

        if(llabs(diff)<=1){
            ans = base;
        } else {
            long long best = LLONG_MAX;
            long long frontC = (runs[0].first=='0') ? 1 : -1;
            long long backC  = (runs[m-1].first=='0') ? 1 : -1;

            if(llabs(diff+frontC)<=1) best=min(best,1LL);
            if(llabs(diff+backC)<=1) best=min(best,1LL);
            if(m>=2 && llabs(diff+frontC+backC)<=1) best=min(best,2LL);

            ans = (best==LLONG_MAX) ? -1 : base+best;
        }
        printf("%lld\n", ans);
    }
}