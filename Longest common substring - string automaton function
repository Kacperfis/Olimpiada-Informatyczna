
string lcs(string s, string t)
{
	sa_init();
	for(int i = 0; i < s.size(); i++)
	{
		sa_extend(s[i]);
	}
	
	int v = 0, l = 0, best = 0, bestpos = 0;
	for(int i = 0; i < t.size(); i++)
	{
		while(v && !st[v].next.count(t[i]))
		{
			v = st[v].link;
			l = st[v].len;
		}
		if(st[v].next.count(t[i]))
		{
			v = st[v].next[t[i]];
			l++;
		}
		if(l > best)
		{
			best = l;
			bestpos = i;
		}
	}
	return t.substr(bestpos - best + 1, best);
}
