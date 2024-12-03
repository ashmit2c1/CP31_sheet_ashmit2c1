#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)


lint solveFunction(string x,string s){
    lint cnt=0;
    while(x.size()<=1000){
        lint fin=x.find(s);
        if(fin!=string::npos){
            return cnt;
        }
        else{cnt++;x+=x;}
    }
    return -1;
}

void solution(int test){
    while(test--){
        lint n;lint m;
        cin >> n >> m;
        string x;string s;
        cin >> x >> s;
        lint ans=solveFunction(x,s);
        cout << ans << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}