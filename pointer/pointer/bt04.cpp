//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int *p;
//	cout << "so phan thu :";
//	cin >> n;
//	p = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "phan tu thu " << i + 1 << " la : ";
//		cin >> p[i];
//		
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (p[i]%2!=0)
//		{
//			cout << p[i] << '\t';
//		}
//	}
//	cout << endl;
//	int max=p[0],z=0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max <= p[i])
//		{
//			max = p[i];
//			cout << &p[i] << endl;
//			z = i;
//		}
//	}
//	cout << &p[z] << endl;
//	delete[]p;
//	p = nullptr;
//	system("pause");
//	return 0;
//}
//// cai nay moi them
