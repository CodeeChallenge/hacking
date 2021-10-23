#include <bits/stdc++.h>
using namespace std;
void sort(char* str,int n);
void print(char* str,int n);
void deleterepeating(char* str,int n);
void countalphabets(char* str,int* alpha,int n);
void ptf(int *alpha);
void answerprint(int *alpha,int n);
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			char str[100];
			fflush(stdin);
			cin>>str;
			sort(str,n);
		deleterepeating(str,n);
		int alpha[26]={0};
		countalphabets(str,alpha,n);
		answerprint(alpha,n);
		}	
	return 0;
}
void ptf(int *alpha){
	for(char i='a';i<='z';i++)
		printf("%c ",i);
	printf("\n");
	for(int i=0;i<26;i++)
		cout<<alpha[i]<<" ";
}
void sort(char* str,int n){
	for(int i=0;i<strlen(str);i++)
		for(int j=i+1;j<strlen(str);j++)
			if(str[i] > str[j])
			{
				int temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
}
void print(char* str,int n){
	for(int i=0;i<n;i++)
		cout<<str[i]<<"\n";
}
void deleterepeating(char* str,int n){
	for(int j=0;j<strlen(str)-1;){
			if(str[j] == str[j+1]){
				for(int u=j;u<strlen(str);u++)
					str[u] = str[u+1];
			}	
			else	
				j++;
		}
	}
void countalphabets(char* str,int *alpha,int n){
		for(int j=0;j<strlen(str);j++){
			alpha[str[j]-'a']++;
		}
}
void answerprint(int *alpha,int n){
	int ans=0;
	for(int i=0;i<26;i++)
		if(alpha[i] == n)
			ans++;
	printf("%d",ans);
}