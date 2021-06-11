//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "nhap vao n chuoi: ";
//	cin >> n;
//	cin.ignore();
//	string* s = new string[n];
//	for (int i = 0; i < n; i++)
//	{
//		
//		cout << "chuoi thu " << i+1 << " : ";
//		getline(cin, s[i]);
//	}
//
//
//	ofstream Ghifile;
//	Ghifile.open("string.txt", ios::out);
//	int soluong=0;
//	while (soluong < n)
//	{
//		Ghifile << s[soluong]<<endl;
//		soluong++;
//	}
//	Ghifile.close();
//
//
//	ifstream Docfile;
//	Docfile.open("string.txt", ios::in);
//	soluong = 0;
//	while(!Docfile.eof())
//	{
//		
//		getline(Docfile, s[soluong]);
//		soluong++;
//
//	}
//	Docfile.close();
//
//
//	for (int i = 0; i < n; i++)
//	{
//		string chuyen = s[i];
//		for (int j = 0; j < chuyen.length(); j++)
//		{
//			chuyen[j]=toupper(chuyen[j]);
//		}
//		s[i] = chuyen;
//	}
//	
//
//
//	ofstream Ghifile2;
//	Ghifile2.open("string2.txt", ios::out);
//	soluong = 0;
//	int stt = 1;
//	while (soluong < n)
//	{
//		Ghifile2<<stt;
//		Ghifile2 << " " << s[soluong] << endl;
//		soluong++;
//		stt++;
//	}
//	Ghifile2.close();
//
//
//	delete[]s;
//	s = nullptr;
//	system("pause");
//	return 0;
//}