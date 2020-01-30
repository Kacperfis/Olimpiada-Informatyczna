#include <bits/stdc++.h>																							   
																													   
using namespace std; 																								   
					
typedef long long LL;																									   
const int INF = 1000000001;
const double eps = 1e-9;																						   
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

/////////////////////GEOMETRIA/////////////////////

//struktura punktu
struct punkt{
	double x, y;
	punkt(){}
	punkt(double X, double Y){ //konstruktor
		x = X;
		y = Y;
	}
	
	//operator porównujący 2 punkty(do sortowania)
	bool operator < (punkt o) const {
		if(fabs(x - o.x) < eps){
			return y < o.y;
		}
		return x < o.x;
	}
};

//struktura wektora
struct wektor{
	double x, y;
	wektor(){} //konstruktor pusty
	wektor(int X, int Y){ //konstruktor ze współrzędnych
		x = X;
		y = Y;
	}
	wektor(punkt a, punkt b){ //konstruktor z dwóch punktów
		x = b.x - a.x;
		y = b.y - a.y;
	}
};

//dystans pomiędzy dwoma punktami
double dystans(punkt a, punkt b){
	return hypot(a.x - b.x, a.y - b.y); //hypot(x, y) = sqrt(x * x + y * y);
}

//kąt pomiędzy dwoma punktami
double kat(punkt a, punkt b){
	return atan2(a.y - b.y, a.x - b.x) * 180 / M_PI;
}

//iloczyn wektorowy
double iloczyn_wektorowy(wektor a, wektor b){
	return a.x * b.y - a.y * b.x;
}

//współliniowość 3 punktów
bool wspolliniowe(punkt a, punkt b, punkt c){
	return fabs(iloczyn_wektorowy(wektor(a, b), wektor(a, c))) < eps;
}

//orientacja punktu c względem linii ab
int orientacja(punkt a, punkt b, punkt c){
	double t = iloczyn_wektorowy(wektor(a, b), wektor(a, c));
	if(fabs(t) < eps) return 0;
	return(t < 0 ? -1 : 1);
}

//sortowanie kątowe
punkt punkt_globalny(0, 0);
bool cmp(punkt a, punkt b){
	return kat(punkt_globalny, a) < kat(punkt_globalny, b);
}

bool cmp_otoczka(punkt a, punkt b){
	return a.x < b.x || (a.x == b.x && a.y < b.y);
}
                                            
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////
 
vector<punkt> punkty;
 
///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

vector<punkt> otoczka(vector<punkt> P){	
	sort(P.begin(), P.end(), cmp_otoczka);
	
	//górna część otoczki
	vector<punkt> G;
	for(int i = 0; i < P.size(); i++){
		while(G.size() >= 2 && orientacja(G[G.size() - 2], G[G.size() - 1], P[i]) != -1) G.pop_back();
		G.push_back(P[i]);
	}
	
	//dolna część otoczki
	vector<punkt> D;
	for(int i = P.size()-1; i >= 0; i--){
		while(D.size() >= 2 && orientacja(D[D.size() - 2], D[D.size() - 1], P[i]) != -1) D.pop_back();
		D.push_back(P[i]);
	}
	
	//wynik
	vector<punkt> R = G; 
	for(int i = 1; i < D.size(); i++){
		R.push_back(D[i]);
	}
	return R;
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);    
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		punkty.pb(punkt(x, y));
	}
	
	vector<punkt> wynik = otoczka(punkty);
	cout << "punkty otoczki: " << endl;
	for(auto it : wynik){
		cout << it.x << " " << it.y << endl;
	}
	
	
 
 
 
	return 0;
}
