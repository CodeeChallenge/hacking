#include <bits/stdc++.h>
using namespace std;
void sort(char** str,int n);
void print(char** str,int n);
void deleterepeating(char** str,int n);
void countalphabets(char** str,int* alpha,int n);
void ptf(int *alpha);
void answerprint(int *alpha,int n);
int main(){
	int n;
	cin>>n;
	char* str[n];
	for(int i=0;i<n;i++)
		{
			char temp[100];
			fflush(stdin);
			cin>>temp;
			str[i]=(char*)malloc(sizeof(temp));
			strcpy(str[i],temp);
		}	
		sort(str,n);
		deleterepeating(str,n);
		int alpha[26]={0};
		countalphabets(str,alpha,n);
		//print(str,n);
		//printf("\n");
		//ptf(alpha);
		answerprint(alpha,n);
	return 0;
}
void ptf(int *alpha){
	for(char i='a';i<='z';i++)
		printf("%c ",i);
	printf("\n");
	for(int i=0;i<26;i++)
		cout<<alpha[i]<<" ";
}
void sort(char** str,int n){
	for(int i=0;i<n;i++){
		//for n strings..
		for(int j=0;j<strlen(str[i]);j++){
			for(int k=j+1;k<strlen(str[i]);k++)
				if(str[i][j] > str[i][k]){
					char temp;
					temp=str[i][j];
					str[i][j]=str[i][k];
					str[i][k]=temp;
				}
		}
	}
}
void print(char** str,int n){
	for(int i=0;i<n;i++)
		cout<<str[i]<<"\n";
}
void deleterepeating(char** str,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<strlen(str[i])-1;){
			if(str[i][j] == str[i][j+1]){
				for(int u=j;u<strlen(str[i]);u++)
					str[i][u] = str[i][u+1];
			}	
			else	
				j++;
		}
	}
}
void countalphabets(char** str,int *alpha,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<strlen(str[i]);j++){
			alpha[str[i][j]-'a']++;
		}
	}
}
void answerprint(int *alpha,int n){
	int ans=0;
	for(int i=0;i<26;i++)
		if(alpha[i] == n)
			ans++;
	printf("%d",ans);
}