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

///////////////////////////////////////////////////FUNCTIONS////////////////////////////////////////////////////////////
void LongestCommonSubstring(string &s1, string &s2)
{
	int n = s1.length();
	int m = s2.length();
    int match[n+1][m+1];  //macierz na dlugosci
    int maxi = 0;  //dlugosc max podlancucha
    list<string> substrings;  //lista na podlancuchy
    list<string>::iterator ite;  
    
    
    for(int i = 0; i <= n; i++)
		for(int j = 0; j <= m; j++)
			match[i][j] = 0;  //wypelniamy macierz zerami
			
    for(int i = 0; i < n; i++)
    {
		for(int j = 0; j < m; j++)
		{
			if(s1[i] != s2[j])   //jesli litery nie pasuja to nastepna komorka macierzy po skosie = 0
				match[i+1][j+1] = 0;
			else
			{
				match[i+1][j+1] = match[i][j] + 1; //w innym wypadku nastepna komorka macierzy po skosie = aktualna komorka macierzy + 1
				if(match[i+1][j+1] > maxi)  //i jesli nastepna komorka jest wieksza niz maxi, to aktualizujemy nasze maxi i dodajemy nowy substring do listy
				{
					maxi = match[i+1][j+1];
					substrings.pb(s1.substr(i-maxi+1, maxi));
				}
			}
		}
	}
	//wyswietlamy dane, tj. lista z wszystkimi podlancuchami, i dlugosc najdluzszego podlancucha
	
	cout << "list of common substrings: " << endl;
	for(ite = substrings.begin(); ite != substrings.end(); ite++)
	{
		cout << *ite << endl;
	}
	cout << "length of longest common substring: " << maxi << endl; 
}
/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
	string s1, s2;
	cin >> s1 >> s2; //wczytujemy oba łancuchy
	
	LongestCommonSubstring(s1, s2);
	
	return 0;
}
