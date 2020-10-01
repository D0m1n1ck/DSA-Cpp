class DSU
{
	private:
		vector<int> id, sz;
		
	public: 
		int root(int i)
		{
			while(i!=id[i])
			{
				id[i]=id[id[i]];
				i=id[i];
			}
			return i;
		}
	
		void initialize(int n)
		{
			for(int i=0;i<n;i++)
			{
				id.push_back(i);
				sz.push_back(1);
			}
		}
		
		bool connected(int p,int q)
		{
			return (root(p)==root(q));
		}
		
		void connect(int p,int q)
		{
			int i=root(p);
			int j=root(q);
			if (i==j) return;
			if (sz[i]<sz[j])
			{ 
				id[i]=j;
				sz[j]+=sz[i];
			}
			else
			{
				id[j]=i;
				sz[i]+=sz[j];
			} 
		}
};
