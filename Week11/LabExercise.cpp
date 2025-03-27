 #include <iostream>
 #include <cstring>
 
 using namespace std;
 
 #define SIZE 3
 
struct Pandemic 
{
 	char district[50], zone[10];
 	int confirmCase, dischargeCase, deathCase;
};
 
void record(Pandemic Selangor[]);
 
 main(){
	struct Pandemic Selangor[SIZE];

	cout << "Enter " << SIZE << " district Pandemic Record" << endl;	
	cout << "****************************************" << endl;
	
	for(int i = 0; i < SIZE ; i++)
	{
		
		cout << "District Record #"<< i+1 << endl;
		cout << "-------------------------------------" << endl;
		cout << "Enter District Name\t: ";
		cin.getline(Selangor[i].district, 50);
		cout << "Enter Confirm Cases\t: ";
		cin >> Selangor[i].	confirmCase;
		cout << "Enter Discharge Cases\t: ";
		cin >> Selangor[i].	dischargeCase;
		cout << "Enter Death Cases\t: ";
		cin >> Selangor[i].deathCase;
		cin.ignore();
		cout << "-------------------------------------" << endl;
	}
	
	record(Selangor);
 }
 
 void record(Pandemic Selangor[]){
 	
 	for(int i = 0 ; i < SIZE; i++)
	 {
 		if(Selangor[i].confirmCase >= 40 )
		{
 			strcpy(Selangor[i].zone, "Red");
		}
		
		else if(Selangor[i].confirmCase >= 5 && Selangor[i].confirmCase < 40)
		{	
			strcpy(Selangor[i].zone, "Yellow");
		}
		
		else
		{
			strcpy(Selangor[i].zone, "Green");
		}
	}
	cout <<endl;
	cout << "**************************************************************************"<<endl;
	cout << "District\tConfirm Case\tDischarge Case\tDeath Case\tZone"<<endl;
	cout << "--------------------------------------------------------------------------"<<endl;
	
	for(int i =0; i < SIZE ; i++)
	{
		cout << Selangor[i].district << "\t\t";
		cout << Selangor[i].confirmCase << "\t\t";
		cout << Selangor[i].dischargeCase << "\t\t";
		cout << Selangor[i].deathCase <<"\t\t";
		cout << Selangor[i].zone << endl;
		cout << "--------------------------------------------------------------------------"<<endl;
		
	}
	cout << "**************************************************************************"<<endl;
 }