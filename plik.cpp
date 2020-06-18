/*																													   
 Templatka c++ Kacper Fis																							   																											   //
*/																													  
																								   
#include <bits/stdc++.h>																							   
																													   
using namespace std; 																								   
		
const double eps = 1e-9;																							   
const long long INF = 1e18;																					   
const float PI = 3.14;																								   
typedef long long LL;																								   
																												   
typedef vector<int> vi;																								   
typedef list<int> li;																								   
typedef queue<int> qi; 																								   
typedef pair<int,int> ii; 																							   
typedef map<string,int> msi; //np msi['nazwa'] = 'liczba'															   
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra #Bellman_Ford			   
typedef priority_queue< pair<LL, LL> , vector< pair<LL, LL> >, greater< pair<LL, LL> > > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra	   
																													   																				   
vector<ii>::iterator iter;																							   																							   																				   

#define endl '\n'
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   
#define pb push_back 																						   
#define pf(x) push_front(x)																							   
#define mp(x, y) make_pair(x, y)                                                                                       
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

int w,h,n,m;
int xp,yp;
int xs,ys;

vector<int> tab[1000005];
list<pair<ii, ii> > punkty;
list<pair<ii, ii> > current;
list<pair<ii, int> > niebezpieczne;

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

bool cmp(pair<ii, ii> &a, pair<ii, ii> &b){
	return a.first.first < b.first.first;
}

bool cmp2(pair<ii, ii> &a, pair<ii, ii> &b){
	return a.first.second < b.first.second;
}

bool cmp3(pair<ii, ii> &a, pair<ii, ii> &b){
	return a.second.first < b.second.first;
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cin >> w >> h >> n >> m;
	cin >> xp >> yp;
	cin >> xs >> ys;
	
	for(int i = 0; i < n; i++){
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		punkty.pb(mp(mp(y1, y2), mp(x1, i)));
	}
	
	for(int i = 0; i < m; i++){
		int x1, y1;
		cin >> x1 >> y1;
		niebezpieczne.pb(mp(mp(x1, y1), i));
	}
	
	punkty.sort(cmp);
	for(int i = 0; i <= h; i++){
		cout << "III: " << i << endl;
		while(!punkty.empty() && punkty.front().first.first == i){
			current.pb(punkty.front());
			punkty.pop_front();
		}
		
		//cout << "po dodaniu: " << endl;
		//cout << "current: " << endl; 
		//for(auto it : current){
			//cout << it.first.first << " " << it.first.second << " : " << it.second << endl;
		//}
		
		current.sort(cmp2);
		while(!current.empty() && current.front().first.second == i){
			current.pop_front();
		}
		current.sort(cmp3);
		
		//cout << "po usunieciu: " << endl;
		cout << "current: " << endl;
		for(int j = 0; j < (int)current.size()-1; j++){
			cout << current[j].first.second << endl;
			//tab[current[j].second.second].pb(current[j+1].second.second);
			//tab[current[j+1].second.second].pb(current[j].second.second);
		}
	}
	

	return 0;
}
