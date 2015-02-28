#include"Operation.h"

int main()
{
	//local variable declaration
	string line;
	Pair <string,int>*obj1 = new Pair<string,int>[50];
	Pair <string,int> obj2;
	//Pair ob2("ji", 4);
	char str[80];
	string app[11];
	char arr[80];
	//Pair y = ob1 + ob2;
	const char s[2] = "=";
	char *ptr;
	int i = 0;
	int chk1 = 0, chk2;
	int n = 0;
	 int result;
	int limit = 0;
	int q = 0;
	 char ch1[50], ch2[50];
	int ob = 0;
	//y.display();
	//cout<<"The value of y is ",y.getValue() <<endl;
	int j = 0;
	//read the filename from the local PC
	ifstream myfile("readfile.txt");
	if (myfile.is_open())//open file from the local pc
	{
		while (getline(myfile, line))//read one line from the file
		{
			//copy entire line into another string
			strcpy_s(str, line.c_str());
			SytaxErrorCheck(str);
		if (checkflag == 1)
		{
			getchar();
			getchar();
			return 0;
		}

			ptr = &str[0];//get starting address of copied string
			cout << "line :" << line << '\n';
			i = 0; j = 0;
			//initalize the string array
			for (int k = 0; k<11; k++){
				app[k] = "";
			}


			//to eliminate the deliminitor
			while (j<line.length()){
				if (*(ptr + j) != ' '){//if no sapce then execute

					app[i] += *(ptr + j);
					//cout << "array is arr[" << i << "] " << app[i] << endl;
				}
				else{

					i++;//if space found then incement it
				}
				j++;//get increment after reading the char
			}
			int in=0;
			int va=0,vb=0;
			for(in=0;in<=i;in++){
			//cout << "array is arr[" << in << "] " << app[in] << endl;
			}
			n = i-1;
			cout<<"i : "<<i<<" n :"<<n<<endl;
			while (n>0){
				if (app[n-1] == "+"){//if line contain the + then call the addition function
				//	cout<<"hello add :"<<app[n-1]<<endl;
					string ls = app[n];
					strcpy_s(ch1, ls.c_str());
					chk1 = atoi(ch1);//conversion from string into int
					strcpy_s(ch2, app[n-2].c_str());
					chk2 = atoi(ch2);//conversion from string into int
					limit = ob;//get the number of key value pair object
					if(chk1==0){//if string is not int then return 0
						for(int uo=0;uo<limit;uo++){
							if(obj1[uo].getKey()==ch1){//if found in pair class then get the value of the particular key
								chk1=(obj1[uo].getValue());
								va=1;//increment the value to track the value exist
							}
							
								
						}
						if(va==0)//if value not exist
							cout<<"value not found"<<endl;
					}
						if(chk2==0){//if string is not int then return 0
						for(int uo=0;uo<limit;uo++){
							if(obj1[uo].getKey()==ch2){//if found in pair class then get the value of the particular key
								chk2=(obj1[uo].getValue());
								vb=1;//increment the value to track the value exist
							}
						}
						if(vb==0)//if value not exist
							cout<<"value not found"<<endl;
					}
						cout<<"values: "<<chk1<<"\nvalues 2 :"<<chk2<<endl;
					
						if(chk1!=0 && chk2!=0){//check if both numbers are int then do this
							
							result=obj2.addition(chk1,chk2);
							app[n-2]=to_string(result);
							//	cout<<"\nThe sum is :"<< app[n+1]<<endl;
								n=n - 1;//decrement the value
								q = 1;
						}
					
				}
				else if (app[n-1] == "*"){//if the line has * operator call the multiplication
				//	cout<<"hello add :"<<app[n-1]<<endl;
					string ls = app[n];
					strcpy_s(ch1, ls.c_str());
					chk1 = atoi(ch1);
					strcpy_s(ch2, app[n-2].c_str());
					chk2 = atoi(ch2);
					limit = ob;
					if(chk1==0){//if string is not int then return 0
						for(int uo=0;uo<limit;uo++){
							if(obj1[uo].getKey()==ch1){//if found in pair class then get the value of the particular key
								chk1=(obj1[uo].getValue());
								va=1;
							}
							
								
						}
						if(va==0)
							cout<<"value not found"<<endl;
					}
						if(chk2==0){//if string is not int then return 0
						for(int uo=0;uo<limit;uo++){
							if(obj1[uo].getKey()==ch2){//if found in pair class then get the value of the particular key
								chk2=(obj1[uo].getValue());
								vb=1;
							}
						}
						if(vb==0)
							cout<<"value not found"<<endl;
					}
						cout<<"values: "<<chk1<<"\nvalues 2 :"<<chk2<<endl;
					
						if(chk1!=0 && chk2!=0){
							
							result=obj2.multiplication(chk1,chk2);
							app[n-2]=to_string(result);
							//	cout<<"\nThe sum is :"<< app[n+1]<<endl;
								n=n - 1;
								q = 1;
						}
					
				}
				
				else if (app[n-1] == "/"){
				//	cout<<"hello add :"<<app[n-1]<<endl;
					string ls = app[n];
					strcpy_s(ch1, ls.c_str());
					chk1 = atoi(ch1);
					strcpy_s(ch2, app[n-2].c_str());
					chk2 = atoi(ch2);
					limit = ob;
					if(chk1==0){//if string is not int then return 0
						for(int uo=0;uo<limit;uo++){
							if(obj1[uo].getKey()==ch1){//if found in pair class then get the value of the particular key
								chk1=(obj1[uo].getValue());
								va=1;
							}
							
								
						}
						if(va==0)
							cout<<"value not found"<<endl;
					}
						if(chk2==0){//if string is not int then return 0
						for(int uo=0;uo<limit;uo++){
							if(obj1[uo].getKey()==ch2){//if found in pair class then get the value of the particular key
								chk2=(obj1[uo].getValue());
								vb=1;
							}
						}
						if(vb==0)
							cout<<"value not found"<<endl;
					}
						cout<<"values: "<<chk1<<"\nvalues 2 :"<<chk2<<endl;
					
						if(chk1!=0 && chk2!=0){
							
							result=obj2.division(chk1,chk2);
							app[n-2]=to_string(result);
							//	cout<<"\nThe sum is :"<< app[n+1]<<endl;
								n=n - 1;
								q = 1;
						}
					
				}
				
				else if (app[n] == "="){
					chk1 = 0;
					chk2 = 0;
					int lo = 1;
					//cout<<"hello equal :"<<app[n]<<endl;
					
					int count=0;
					strcpy_s(ch1, app[n + 1].c_str());
					chk1 = atoi(ch1);
					/*cout << "here11" << chk1 << endl;*/
					strcpy_s(ch2, app[n - 1].c_str());
					chk2 = atoi(ch2);
					if (q == 1)
					{
						chk1 = result;
					}
					for (int u = 0; u < limit; u++){
						if (obj1[u].getKey() == ch2){
							lo++;
							count=u;
							u=limit+1;
							cout<<"Errorr!!!!  already exist"<<endl;
						}
						
					}
					if (chk1 != 0 ){
						
						if (chk2 == 0){
							obj1[ob].setValue(chk1);
							obj1[ob].setKey(ch2);
							ob++;
						}
						else//if format of the quation is not correct
							cout<<"Format is not correct"<<endl;
					}
					if (chk1 != 0 ){//update the value and key is already exist
						
						if (chk2 == 0 && obj1[count].getKey() == ch2 ){
							obj1[ob].setValue(chk1);
							cout << "here" << obj1[ob].getValue()<< endl;
							
						}
					}

				}
				n--;
				
			}
			q = 0;
			int jo=0;
			cout<<"ggg value"<<app[0]<<endl;
			if(app[0]=="print"){//if print keyword found
				for(int ok=0;ok<ob;ok++)
				{
					
					if(app[1]==obj1[ok].getKey()){//find the particular ky to get the value
						//cout<<"key :" <<obj1[ok].getKey()<<" Value :"<<obj1[ok].getValue()<<endl;
						obj1[ok].display();
						jo++;
					}
				}
				if(jo==0){
				cout<<"Key Value not exist!!!"<<endl;
				}
			}
		//	cout << "str :" << str << '\n';
		}
		myfile.close();//close the file
	}
	else//if file not found or exist
		cout << "Unable to open file";

		for (int op = 0; op <ob; op++){//print all the objects 
		cout <<"  key :"<< obj1[op].getKey() <<"  Value: "<<obj1[op].getValue()<< endl;
	}
	getchar();
	return 0;

}