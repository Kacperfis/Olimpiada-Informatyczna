#include <bits/stdc++.h>																							   
																													   
using namespace std; 																								   
					
typedef long long LL;																									   
const int INF = 1000000001;																						   
const float PI = 3.14;																								   																							   
																													   
typedef vector<int> vi;																								   
typedef list<int> li;																								   
typedef queue<int> qi; 																								   
typedef pair<int,int> ii; 																							   
typedef map<string,int> msi; //np msi['nazwa'] = 'liczba'															   
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra #Bellman_Ford			   
typedef priority_queue< ii, vector<ii>, greater<ii> > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra	   
																													   																				   
																													   																				   
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   
#define pb(x) push_back(x) 																							   
#define pf(x) push_front(x)																							   
#define mp(x, y) make_pair(x, y)                                                                                       
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

string s;
int mod = 1e9 + 7;
int p = 47;
int hash_tab[1000005];
int pw[1000005];

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void calculate_powers(){
	pw[0] = 1;
	for(int i = 1; i < s.size();i++){
		pw[i] = (pw[i - 1] * 1LL * p) % mod; 
	}
}

void calculate_hash(){
	for(int i = 1; i < s.size(); i++){
		hash_tab[i] = (hash_tab[i - 1] * 1LL * p % mod + (s[i] - 'a' + 1)) % mod;
	}
}

int get_hash(int l, int r){
	return (hash_tab[r] - hash_tab[l - 1] * 1LL * pw[r - l + 1] % mod + mod) % mod;
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);    
	
	cin >> s;  //wczytanie słowa s
	s = "#" + s;
	int n = s.size();
	
	calculate_powers();
	calculate_hash();
	
	//wczytanie podsłów do porównania leksykograficznego: [l1, r1]...[l2, r2]
	int l1, l2, r1, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	
	string s1 = s.substr(l1, r1 - l1 + 1);
	string s2 = s.substr(l2, r2 - l2 + 1);
	//cout << "s1: " << s1 << endl; //podsłowo 1
	//cout << "s2: " << s2 << endl; //podsłowo 2
	int L = 0;
	int R = min(s1.size(), s2.size());
	
	while(L < R){ //binary searchem wyszukujemy max długość wspólnego prefiksu obu podsłów
		int mid = (L + R) / 2;
		if(get_hash(l1, l1 + mid) == get_hash(l2, l2 + mid)){
			L = mid + 1;
		}
		else R = mid;
	}
	
	int d = ((L + R) / 2); // d -> max długość wspólnego prefiksu obu podsłów
	
	if(d < min(s1.size(), s2.size())){
		if(s[l1 + d] < s[l2 + d]){ //porównujemy litery podsłów na pozycjach d + 1
			cout << "podsłowo " << s1 << " jest wcześniej leksykograficznie" << endl;
		}
		else if(s[l1 + d + 1] > s[l2 + d + 1]){
			cout << "podsłowo " << s2 << " jest wcześniej leksykograficznie" << endl;
		}
	}
	else if(s1.size() < s2.size()){
		cout << "podsłowo " << s1 << " jest wcześniej leksykograficznie" << endl; 
	}
	else if(s1.size() > s2.size()){
		cout << "podsłowo " << s2 << " jest wcześniej leksykograficznie" << endl;
	}
	
}              												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
