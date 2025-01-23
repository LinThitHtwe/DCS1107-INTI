 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 main(){
	const float SC_PRICE = 1.05, HM_PRICE = 4.50, EVM_PRICE = 6.10, SERVICE_TAX_PERCENTAGE = 0.05;
 	float scTotalPrice, hmTotalPrice, evmTotalPrice, serviceTaxAmount, totalCharges;
 	int scItem, hmItem, evmItem;
 	
 	cout <<fixed<<setprecision(2);
 	
 	cout << "***********************************************"<<endl;
 	cout << "** Enter no. of sundae cones \t : ";
 	cin >> scItem;
 	cout << "** Enter no. of Happy Meals \t : ";
 	cin >> hmItem;
 	cout << "** Enter no. of Extra Value Meal : ";
 	cin >> evmItem;
 	
 	scTotalPrice = scItem * SC_PRICE;
 	hmTotalPrice = hmItem * HM_PRICE;
 	evmTotalPrice = evmItem * EVM_PRICE;

 	serviceTaxAmount = SERVICE_TAX_PERCENTAGE * (scTotalPrice + hmTotalPrice + evmTotalPrice);
 	
	totalCharges = scTotalPrice + hmTotalPrice + evmTotalPrice + serviceTaxAmount;
 	
 	cout << "***********************************************\n";
 	cout << "** Welcome to MC Donald's \t\t     **\n";
 	cout << "** Your Bill, \t\t\t\t     **\n";
 	cout << "** " << scItem << " Sundae cones \t : RM "<< scTotalPrice<<"\t     **\n";
	cout << "** " << hmItem << " Happy Meals \t : RM "<< hmTotalPrice<<"\t     **\n"; 	
	cout << "** " << evmItem << " Extra Value Meal \t : RM "<< evmTotalPrice<<"\t     **\n"; 	 
	cout << "***********************************************\n";	
 	cout << "** " <<fixed<<setprecision(0)<< SERVICE_TAX_PERCENTAGE * 100 << "% Service Tax \t : RM "<<fixed<<setprecision(2)<<serviceTaxAmount <<"\t     **\n";
 	cout << "**\t\t\t\t\t     **\n";
 	cout << "** Total Charges \t : RM "<<fixed<<setprecision(2)<< totalCharges <<"\t     **\n";
 	cout << "**\t\t\t\t\t     **\n";
 	cout << "**\t Thank You! Come Again!! \t     **\n";
 	cout << "***********************************************\n"<<endl;	
 }