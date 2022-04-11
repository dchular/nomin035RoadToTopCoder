#include <bits/stdc++.h>
//#include <atcoder/lazysegtree>
//#include <atcoder/segtree>
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(n) for(ll i = 0; i < (n); ++i)
#define rep2(i, n) for(ll i = 0; i < (n); ++i)
#define rep3(i, a, b) for(ll i = (a); i < (b); ++i)
#define rep4(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)

#define rrep(i,a,n) for (int i=n-1;i>=a;i--)
#define ALL(x) x.begin(),x.end()

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pause "read -p 'Press Enter to continue...' var"

using namespace std;
//using namespace atcoder;

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

/*
テスト通りますように
　　●
　　/⌒ヽ
　 ｜ 　|/⌒ヽ(ヽ
　 (｀　∥ー⌒) |
　|￣||￣￣￣￣￣|
　|―||―――――|
　|　Ｕ　　　　　|
　|￣￣￣￣￣￣￣|
　|＿＿＿＿＿＿＿|
　　|―――――|
　　|―――――|
ｗｗＷｗｗＷｗＷＷｗ
*/

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}

const ll INF = numeric_limits<ll>::max()/4;
const ll MAX = 100005;
const int MOD = 1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

bool check(ll num){
  // 2t huvaagdaj bh zuur 2t huvaana
  while(num % 2 == 0){
    num /=2;
  }
  // odoo num 2-t huvaagdahgui
  // 3t huvaagdaj bh zuur 3t huvaana
  while(num % 3 == 0){
    num /=3;
  }
  // odoo num 3t huvaagdahgui
  // odoo num == 1 bval num maani 2^p * 3^q gsn helbertei baisan gsn ug
  if(num == 1) return true;
  else return false;
}

int main(){
  // 1-g oruulahguiger ehleh, oruulah bol if(cnt-1 == n) gsn nuhtsul bichine
  ll i = 2;
  ll cnt = 0;
  ll n;
  cin >> n;
  while(1){
    if(check(i)) cnt++;
    if(cnt == n){
      cout << i << endl;
      return 0;
    }
    i++;
  }
  return 0;
}
