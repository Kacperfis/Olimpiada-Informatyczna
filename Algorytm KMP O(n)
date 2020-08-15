#include <bits/stdc++.h>																							   
																									   
using namespace std; 																								   
		
const double eps = 1e-9;																							   
const int INF = 1e9;
const long long INFL = 1e18;																					   
const double PI = 3.14;
const int mod = 1e9 + 7;																								   
typedef long long LL;																								   
																													   
typedef vector<int> vi;																								   
typedef list<int> li;																								   
typedef queue<int> qi; 																								   
typedef pair<int,int> ii;
typedef pair<LL, LL> ll; 																							   
typedef map<string,int> msi;
typedef set<int> sett;												   
typedef vector<ii> vii; 		   
typedef priority_queue< ii, vector<ii>, greater<ii> > pq;    																								   																				   
vector<ii>::iterator iter;																							   
																													   																				   										   
#define pb push_back																							   
#define pf push_front																							   
#define mp(x, y) make_pair(x, y)
#define size(x) (int)x.size()
#define endl '\n'

int _X[] = {0, 1, 1, 1, 0, -1, -1, -1};
int _Y[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int _X2[] = {1, 0, -1, 0};
int _Y2[] = {0, 1, 0, -1};

//FILE I/O
void FILE_OI(){
	fstream plik;
	plik.open("plik.txt"); //create plik.txt!
	plik << "_put here your input_";
	plik.close();
}

//DEBUG
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif      
                                                              
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

int n, m;
string s, p; //string | pattern
int reset[1000005]; //pref_suf table

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void KMP_preprocess(){
	int i = 0, j = -1;
	fill(reset, reset+1000005, -1);
	while(i < m){
		while(j >= 0 && p[i] != p[j])
			j = reset[j];
		i++;
		j++;
		reset[i] = j;
	}
}

void KMP_matching(){
	int i = 0, j = 0;
	while(i < n){
		while(j >= 0 && s[i] != p[j])
			j = reset[j];
		i++;
		j++;
		if(j == m){
			cout << "pattern found at: " << i - j << endl;
			j = reset[j];
		}
	}
}


/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	 * 	For better understanding:
	 *  https://www.youtube.com/watch?v=7RRE-YEOjk8&fbclid=IwAR199gk6D9w7KDSgGYUHsKVBnKh3bHfeFuamWm7c7maHvtjA5H9mxqDh8Tw
	 * 	https://www.youtube.com/watch?v=qpa-4KUfKUk&feature=youtu.be
	 * 
	 * */
	 
	cin >> n >> s >> m >> p;
	KMP_preprocess();
	KMP_matching();
	
	
	
	return 0;
}
