//All TYpes of programs to find prime number or not
//
//
//

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,factors=0;
//	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		if(n%i==0)
//			factors++;
//	}
//	if(factors==2)
//		cout<<"Prime";
//	else
//		cout<<"Not Prime";
//	
//	
//	
//	
//	
//	
//	
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,factors=0;
//	cin>>n;
//	for(i=2;i<=n-1;i++)
//	{
//		if(n%i==0)
//			factors++;
//	}
//	if(factors==0)
//		cout<<"Prime";
//	else
//		cout<<"Not Prime";
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,factors=0;
//	cin>>n;
//	for(i=1;i<=n/2;i++)
//	{
//		if(n%i==0)
//			factors++;
//	}
//	if(factors==1)
//		cout<<"Prime";
//	else
//		cout<<"Not Prime";
//}	
//	
	
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,factors=0;
//	cin>>n;
//	for(i=2;i<=n/2;i++)
//	{
//		if(n%i==0)
//			factors++;
//	}
//	if(factors==0)
//		cout<<"Prime";
//	else
//		cout<<"Not Prime";
//}	
	

//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int n,i,factors=0;
//	cin>>n;
//	for(i=1;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//			factors++;
//	}
//	if(factors==1)
//		cout<<"Prime";
//	else
//		cout<<"Not Prime";
//}

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,factors=0;
	cin>>n;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			factors++;
			break;
		}
	}
	if(factors==0)
		cout<<"Prime";
	else
		cout<<"Not Prime";
}
