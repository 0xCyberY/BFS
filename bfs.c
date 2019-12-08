#include<stdio.h>
void bfs(int a[10][10], int n, int u)
{
   int f,r,q[10],v, s[10]={0}; // Initialize all elements in s to 0 i.e. No node is visited yet
   printf("\n The nodes visited from %d are: ",u);
   f=0, r=-1; // Intially Queue is empty
   q[++r]=u; // Insert u into Queue
   s[u]=1; // Mark u as visited
   printf("%d ",u);
   while(f<=r)
   {
	u=q[f++]; // Delete an element from Queue
	for(v=0;v<n;v++)
	{
		if(a[u][v]==1) // If v is adjacent to u
		{
			if(s[v]==0) // If v is not in s i.e v has not been visited
			{
				printf("%d ",v); // Print the node visited
				s[v]=1; // Add vto s, mark it as visited
				q[++r]=v; // Insert v into Queue
			}
		}
	}
}
printf("\n");
}
void main()
{
   int n,a[10][10],source,i,j;
   printf("\n Enter the number of nodes/vertices: ");
   scanf("%d",&n);
   printf("\n Enter the Adjacency Matrix: \n");
   for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
		for(source=0;source<n;source++)
			bfs(a,n,source);
}
