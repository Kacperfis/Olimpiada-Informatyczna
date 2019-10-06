/*																													   
 Templatka c++ Kacper Fis																							   																											   //
*/																													  
																													   
#include <iostream>       	
#include <cstdio>         
#include <limits>		  
#include <cstdlib>       
#include <utility>        
#include <iterator>       
#include <bitset>         
#include <list>           
#include <vector>         
#include <map>
#include <unordered_map>            
#include <set>            														   
#include <queue>          																							   
#include <deque>          																							   
#include <stack>																									   
#include <algorithm>																								   
#include <cmath>																									   
#include <string>      																								   
#include <time.h>																									   
#include <iomanip> 																									   
#include <sstream>																									   
#include <bits/stdc++.h>																							   
																													   
using namespace std; 																								   
																													   
const int INF = 1000000001;																						   
const float PI = 3.14;																								   
typedef long long LL;																								   
																													   
typedef vector<int> vi;																								   
typedef list<int> li;																								   
typedef queue<int> qi; 																								   
typedef pair<int,int> ii; 																							   
typedef map<string,int> msi; //np msi['nazwa'] = 'liczba'															   
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra #Bellman_Ford			   
typedef priority_queue< ii, vector<ii>, greater<ii> > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra	   
																													   
list<int>::iterator it;																								   
list<int>::iterator it1;																							   
vector<int>::iterator it2;																							   
vector<int>::iterator it3;																							   
set<int>::iterator it4;																								   
map<string, int>::iterator it5; 																					   
vector<ii>::iterator iter;																							   
																													   																				   
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   
#define pb(x) push_back(x) 																							   
#define pf(x) push_front(x)																							   
#define mp(x, y) make_pair(x, y)                                                                                       
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
	string txt, pat;
	cin >> txt >> pat;
	int n = txt.size();
	int m = pat.size();
	int t = 0; //wartosc hasza dla okna w tekscie
	int p = 0; //wartosc hasza dla wzorca
	
	int q = 31; //liczba pierwsza
	int d = 256; //ilosc liter w alfabecie
	int h = 1; //potegi haszy
	int j;
	
	//wyznaczamy potegi haszy 
	for(int i = 0; i < m-1; i++)
	{
		h = (h * d) % q;
	}
	
	//wyznaczamy hasze dla okna w tekscie i wzorca
	for(int i = 0; i < m; i++)
	{
		t = (d * t + txt[i]) % q;
		p = (d * p + pat[i]) % q;
	}
	
	for(int i = 0; i <= n-m; i++)
	{
		if(p == t) //jesli hasz wzorca == hasz okna w tekscie
		{
			for(j = 0; j < m; j++) //sprawdzamy czy wzorzec zgadza sie z oknem tesktu
			{
				if(txt[i + j] != pat[j])
					break; //jesli nie to przerywamy
			}
			
			if(j == m) //a jesli tak, to piszemy na jakiej pozycji wystepuje wzorzec
				cout << "pattern has been found at: " << i << endl;
		}
		
		if(i < n-m) //wyznaczamy hasz dla nastepnego okna w tekscie
		{
			t = (d *(t - txt[i] * h) + txt[i + m]) % q; //odejmujemy hasz pierwszej litery okna, i dodajemy hasz nastepnej litery na koncu
			
			if(t < 0) //jesli wartosc hasza < 0, to dodajemy do tej wartosci q, robiac z niej wartosc dodatnia
				t = t + q;
		}	
	}	
	
	return 0;
}
