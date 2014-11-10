#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//reverse a null-terminated string. 
char* reverse_string(char* s){
	char* start=s;
	char* end=s;
	char temp;
	while(*end!='\0'){
		end++;
	}
	end--;
	while(start<end){
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	return s;
}

int main(){
	char s[]="asdf"; //�����char* s�ᱨ����Ϊ�����Ļ�sָ������ַ�����������ų����Ŀռ䲻����ͨ��һ��������ר�ŵĿռ䣬������Щ�ռ���ֻ��������д��
	char* newString=reverse_string(s);
	printf("%s\n",newString);
}