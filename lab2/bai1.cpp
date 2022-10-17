#define MAXN 100
#define NO_EDGE 0
#define oo 999999
typedef struct{
	int n;
	int w[MAXN][MAXN];
	int mark[MAXN];
	int pi[MAXN];
	int P[MAXN];
	int path[MAXN];
	int k=0;
	int current = u;
	while (current!=-1){
		
	}	
	
}Graph;
void MooreDijkstra(Graph *pG, int s){
	int u,v,it,n;
	int pi
	for(u=1;u<=pG->n;u++){
		pi[u]=oo;
		mark[u]=0;
	}
	pi[s]=0;
	p[s]=-1;
	for(it=1;it<pG->n;it++){
		int j, ,im_pi =oo;
		for(j=1;j<=pG->n;j++){
			if (mark[j]==0&&pi[j]<min_pi){
				min_pi=pi[j];
				u=j;
			}
			mark[u]=1;
			for(v=1;v<=pG->n;j++)
				if(pG->w[u][v] != NO_EDGE && mark[v] == 0)
					if(pi[u] + pG->w[u)[v] < pi[v]){
						pi[v] = pi[u] + pG->w[u][v];
						pi[v]=u;
					}
				
		}
	}
}
void int_graph(Graph *pG, int n, int m){
	pG->n=n;
	pG->m=0;
	int u,v;
	for(u=1;u<=n;u++)
		for(v=1;v<=n;v++)
			pG->w[u][v]=NO_EDGE;
}
void add_edge(int u,int v,int w){
	pG->w[u][v]=w;
	
}

int main(){
	freopen("dt.txt", "r", stdin); 
    Graph G;
    int n, m, u, v, w, e;
    scanf("%d%d", &n, &m);
    init_graph(&G, n);
    
    for (e = 0; e < m; e++) {
        scanf("%d%d%d", &u, &v, &w);
        add_edge(&G, u, v, w);
    }
	    
}
