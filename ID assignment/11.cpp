#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;
int main ()
{
	cout <<"Please enter the 14 digits of the ID " << endl;
	string s1;
	getline(cin,s1);
	 int n = s1.length ();
	
	  if (n!=14)
	 {
		 cout << "Error: Invalid ID number" << endl;
	 }
	   
	  
			
	
	 if (n==14)
	 {
		 string x = s1.substr(0,1);
		 string yy = s1.substr(1,2);
		 string mm = s1.substr(3,2);
		 string dd = s1.substr(5,2);

		  int X=atoi(x.c_str());
		  if (dd>"31")
			{
				cout << "Error: Invalid ID number" << endl;
				return 0;  }
		
				if (mm>"12")
				{
			  cout << "Error: Invalid ID number" << endl;
			  return 0;  }

		 
		 if (X==2)
		 {
			 cout << "Date of Birth:" << dd << "/" << mm <<"/" << "19" << yy << endl ;  }
		 if (X==3)
		 {
			 cout << "Date of Birth:" << dd << "/" << mm <<"/" << "20" << yy << endl ;  }
		 else 
		 {
		  cout << "Error: Invalid ID number" << endl;
			  return 0;  }
		 
		 
		 string y = s1.substr(7,2);
		 int i=atoi(y.c_str());
		
		
		 if (i==01) 
			 cout <<"Place of birth :" << "cairo" << endl ; 
		  if (i==11) 
			  cout <<"Place of birth :" << "Damietta" << endl ;
		  if (i==12)
			  cout <<"Place of birth :" << "Dakahlia" << endl ;
		  if (i==13)
			  cout <<"Place of birth :" << "sharqia" << endl ;
		  if (i==14)
			  cout <<"Place of birth :" << "Qalyubia" << endl ;
		  if (i==15)
			  cout <<"Place of birth :" << "Kafr ElSheikh" << endl ;
		  if (i==16)
			  cout <<"Place of birth :" << "Gharbia" << endl ;
		 if (i==17)
			  cout <<"Place of birth :" << "Monufia" << endl ;
		 if (i==18)
			  cout <<"Place of birth :" << "Beheira" << endl ;
		 if (i==19)
			  cout <<"Place of birth :" << "Ismailia" << endl ;
		 if (i==21)
			  cout <<"Place of birth :" << "Geza" << endl ;
		  if (i==22)
		      cout <<"Place of birth :" << " Bani Suwayf " << endl ;
		 if (i==24)
			  cout <<"Place of birth :" << "Minya" << endl ;
		  if (i==25)
		      cout <<"Place of birth :" << "Asyut" << endl ;
		 if (i==26)
		      cout <<"Place of birth :" << "Sohag" << endl ;
		  if (i==27)
		      cout <<"Place of birth :" << "Qena" << endl ;
		  if (i==28)
		      cout <<"Place of birth :" << "Aswan" << endl ;
		  if (i==29)
		      cout <<"Place of birth :" << "Luxor" << endl ;
		  if (i==33)
			  cout <<"Place of birth :" << "Matruh" << endl ;
		 else if (i==88)
			  cout <<"Place of birth :" << "outside Egypt " << endl ;

		  string b = s1.substr(12,1);
		   int a=atoi(b.c_str());

		 if (a%2==0)
			 cout << "Gender :" << "female" << endl ;
		 else 
			 cout <<"Gender :" << "Male" << endl;
		    

		  string z = s1.substr(9,4);
		 cout << "serial number :" << z << endl ;
	

	}
		system("pause");
	return 0;
}


