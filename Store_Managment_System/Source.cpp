#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int sum, gprice = 0, index = 0, i, bill = 0;
int counter;
class product {
private:
	int pid;
	string  pdescription;
	int price;
public:

	/*void input(product * b,product *c){
		cout<<"enter data"<<endl;
		for(int i=0;i<20;i++){
		cout<<"enter pid"<<endl;
		cin>>b[i].pid;
		cout<<"enter pdescription"<<endl;
		flushall();
		getline(cin,b[i].pdescription);
		cout<<"enter price"<<endl;
		cin>>b[i].price;

		}
		ofstream w("product.txt",ios::binary);
		w.write(reinterpret_cast<char*>(b),20*sizeof(product));
		ifstream r("product.txt",ios::binary);
		r.read(reinterpret_cast<char*>(b),20*sizeof(product));
	} //input function close
		*/
		// please close your file by using following w.close syntax



		// display list
	void display(product* b) {
		cout << "PCODE\tDESCRIPTION\tPRICE" << endl;

		ifstream q("product.txt", ios::binary);
		q.read(reinterpret_cast<char*>(b), 20 * sizeof(product));
		for (int i = 0;i < 20;i++)
		{
			cout << b[i].pid << "\t" << b[i].pdescription << "\t" << b[i].price << endl;
		}

	}    //updation
	void updation(product* c) {
		ifstream up("product.txt", ios::binary);
		up.read(reinterpret_cast<char*>(c), 20 * sizeof(product));
		cout << "enter product code for which you want to update price" << endl;
		int ccode;
		cin >> ccode;
		cout << "enter updated price" << endl;
		int uprice;
		cin >> uprice;
		for (int j = 0;j < 20;j++)
		{
			if (c[j].pid == ccode) {


				c[j].price = uprice;

				ofstream up("product.txt", ios::binary);
				up.write(reinterpret_cast<char*>(c), 20 * sizeof(product));
			}
		}
	}  //close function




// search product
	void search(product* c)
	{
		ifstream r("product.txt", ios::binary);
		r.read(reinterpret_cast<char*>(c), 20 * sizeof(product)); int code;

		cout << "Code" << endl;
	zz:	 cin >> code;

		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "Productcode\tProductDescription\tProductPrice" << endl;
		for (int k = 0;k < 20;k++)
			if (c[k].pid == code)
			{
				cout << " " << c[k].pid << " " << "\t\t" << c[k].pdescription << " \t\t" << " " << c[k].price << endl;
				gprice = c[k].price;
				cout << "--------------------------------------------------------------------------------" << endl;
				cout << "Quantity\t";cin >> i;
				bill = gprice * i;
				sum = sum + bill;
				counter = counter + i;
				cout << "................................................................................" << endl;
				cout << "wants more items to add y/n" << endl;
				char c;
				cin >> c;
				if (c == 'y')
				{
					cout << "enter code" << endl;
					goto zz;
				}
			}
	}


};

//  this is supplier detail
class supplier {
private:
	int supid;
	string subname;
	string subcomp;
	string email;
	double scontact;
	string status;
	int due;
	int paid;
public:







};
class  stackinventory {
private:
	int stockid;
	string deliverdate;
	string enddate;
	int pcost;
	int salecost;



public:

};

void main()  // main part
{


	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "\t\t   " << "*  * " << "*****" << " " << "  *  " << " " << "*    " << " " << "  *  " << " " << "*****" << " " << "*   *" << endl;
	cout << "\t\t   " << "*  * " << "  *  " << " " << "  *  " << " " << "*    " << " " << "  *  " << " " << "  *  " << " " << " *** " << endl;
	cout << "\t\t   " << "*  * " << "  *  " << " " << "  *  " << " " << "*    " << " " << "  *  " << " " << "  *  " << " " << "  *  " << endl;
	cout << "\t\t   " << "**** " << "  *  " << " " << "  *  " << " " << "*****" << " " << "  *  " << " " << "  *  " << " " << "  *  " << endl;
	cout << endl;
	cout << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "\t\t	" << " " << "****" << " " << "*****" << " " << "*****" << " " << "*****" << " " << "*****" << endl;
	cout << "\t\t	" << " " << "*   " << " " << "  *  " << " " << "*   *" << " " << "*   *" << " " << "*    " << endl;
	cout << "\t\t	" << " " << "*   " << " " << "  *  " << " " << "*   *" << " " << "*   *" << " " << "*    " << endl;
	cout << "\t\t	" << " " << "****" << " " << "  *  " << " " << "*   *" << " " << "*****" << " " << "*****" << endl;
	cout << "\t\t	" << " " << "   *" << " " << "  *  " << " " << "*   *" << " " << "* *  " << " " << "*    " << endl;
	cout << "\t\t	" << " " << "   *" << " " << "  *  " << " " << "*   *" << " " << "*   *" << " " << "*    " << endl;
	cout << "\t\t	" << " " << "****" << " " << "  *  " << " " << "*****" << " " << "*   *" << " " << "*****" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;



	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "\t\t\tUtility Store Management System\t\t" << endl;
	string login;
oo:	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "ENTER LOGIN ID" << endl;
	flushall();
	getline(cin, login);
	if (login != "2244")
	{
		cout << "YOUR ID IS EITHER WRONG OR INCOMPLETE" << endl;
		cout << "IF YOU WANT TO REWRITE THEN PRESS(y)" << endl;
		char l;
		cin >> l;
		if (l == 'y')goto oo;
	}

	cout << "-------------------------------------------------------------------------------" << endl;
	if (login == "2244")
		cout << "NOW YOU ARE LOGIN" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;

	static int totalsale;
	product x, as[20];
	product c[20];

	//x.input(as,c); 
nb:

	int a, b, ccc, d, k, m;
	char t, official;
	string aa, bb, cc;
	ofstream usms("billrecord.txt");
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "*******************************************************************************" << endl;
	cout << "Customer id:"; cin >> a; usms << a << "\n";  usms << "----\n"; ccc = a;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Customer name:";flushall();getline(cin, aa); usms << aa << "\n";  usms << "----\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Invoice id:"; cout << ccc << endl;   usms << ccc << "\n";  usms << "----\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Invoice time:"; flushall(); getline(cin, bb); usms << bb << "\n";  usms << "----\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Invoice date:";  flushall(); getline(cin, cc);  usms << cc << "\n";   usms << "----\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "*******************************************************************************" << endl;
	x.search(c);
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "*******************************************************************************" << endl;

	cout << "Total Bill:\t";    cout << sum << "\t";  usms << sum << "\n";usms << "----\n";
vv:
	cout << "Paid Amount:\t";cin >> k; if (k < sum) {
		cout << "enter amount is less enter more amount\n";
		k = 0;goto vv;
	} int no = sum - k;  usms << sum << "\n";usms << "----\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Discount:\t";  cin >> m;    int discount = sum - m;  int discount2 = k - discount;   usms << discount2 << "\n";usms << "----\n";
	cout << "-------------------------------------------------------------------------------" << endl;
	totalsale = discount + totalsale;
	cout << "Balance:\t";      cout << discount2 << endl; usms << discount2 << "\n";usms << "----\n";
	cout << "Total number of items purchase:" << counter << endl;
	cout << "\t\t\tTHANKS FOR PURCHASING ITEMS\t\t" << endl;
	cout << "\t\t\tNEW BILL CALCULATION PRESS y\t\t" << endl;
	char more;
	cin >> more;
	if (more == 'y')
	{
		sum = 0;
		goto nb;
	}
	cout << "WANT TO DISPLAY TOTAL SALE" << endl;
	char zx;
	cin >> zx;
	if (zx == 'y')
	{
		cout << "TOTAL SALE=" << totalsale << endl;
	}
	cout << "\t\t\tOFFICALS DETAILS\t\t" << endl;
pp:

	cout << "ENTER LOGIN PASSWORD" << endl;
	flushall();
	string password;
	getline(cin, password);
	if (password == ".netcompound") {
		cout << "\nPRESS 1 FOR TOTAL ITEMS DETAILS\nPRESS 2 FOR UPDATATION\nPRESS 3 FOR DELETION\nPRESS 4 FOR SUPPLIER DETAIL\nPRESS 5 FOR STOCK DETAIL" << endl;
		int cho;
		cin >> cho;
		if (cho == 1)
		{
			cout << "IT's ITEMS DETAIL LISTS PROCESS" << endl;
			x.display(as);
		}

		if (cho == 2)
		{
			cout << "IT's UPDATE PROCESS" << endl;
			x.updation(as);
		}
		if (cho == 3)
		{
			cout << "IT's DELETION PROCESS" << endl;
		}
		if (cho == 4)
		{
			cout << "SUPPLIER  Detail" << endl;
		}
		if (cho == 5)
		{
			cout << "IT's STOCK AND INVENTORIES" << endl;
		}

	}
	else if (password != ".netcompound ") {
		cout << "DO YOU WANT TO RETRY(y/n)" << endl;
		char ttry;
		cin >> ttry;

		if (ttry == 'y')
		{
			goto pp;
		}
	}


	
	system("pause");
}