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
  
  string s1, s2, sLCS;
  
  cin >> s1 >> s2;
  
  int n = s1.length();
  int m = s2.length();
  
  int L[1000][1000];
  
  for(int i = 0; i <= n; i++) L[i][0] = 0;
  for(int j = 0; j <= m; j++) L[0][j] = 0;
  
  for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++)
		if(s1[i] == s2[j])
			L[i + 1][j + 1] = 1 + L[i][j];
		else 
			L[i + 1][j + 1] = max(L[i + 1][j], L[i][j + 1]);
  
  
  sLCS = "";
  int i = n - 1;
  int j = m - 1;
  
  while((i >= 0) && (j >= 0))
	if(s1[i] == s2[j])
	{
		sLCS = s1[i] + sLCS;
		i--; j--;
	}
	else if(L[i + 1][j] > L[i][j + 1]) j--;
	else i--;
	
	cout << sLCS << " : " << L[m][n] << endl;
  

	return 0;
}
