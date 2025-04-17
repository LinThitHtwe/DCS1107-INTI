 #include <iostream>
 #include <fstream>
 using namespace std;
 
 #define SIZE 5
 
struct Student{
 	char name[50],grade;
 	int id, score;
};
 
void CalculateGrade(Student students[]);
 
 main(){
 	
 	struct Student students[SIZE];
 	ifstream read;
	read.open("Result.txt");
	
	if(read.fail()){
		cout << "Fail to read the file" <<endl;
	}
	else
	{
 	for(int i = 0; i < SIZE ; i++)
	{
		read.getline(students[i].name,50);
		read>>students[i].id;
		read>>students[i].score;
		read.ignore();
	} 
	
	read.close();
	
	CalculateGrade(students);

	for(int i = 0; i < SIZE; i++){
		
		cout << "Name : " << students[i].name << endl;
		cout << "Id : " << students[i].id << endl;
		cout << "Score : " << students[i].score << endl;
		cout << "Grade : " << students[i].grade << endl;
		cout << "------------------" << endl;
	}
	}
	
 }
 
void CalculateGrade(Student students[]){
			
	ofstream writeProb, writeProg;
	
	writeProb.open("Probation.txt",ios_base::app);
	writeProg.open("Progression.txt",ios_base::app);				
			
 	for(int i = 0 ; i < SIZE; i++){
 		
		if(students[i].score >=90 && students[i].score <= 100 ){
			students[i].grade = 'A';
		}
		else if(students[i].score >=70 && students[i].score <= 89 ){
			students[i].grade = 'B';
		}
		else if(students[i].score >=50 && students[i].score <= 69 ){
			students[i].grade = 'C';
		}
		else{
			students[i].grade = 'F';
		}

		switch(students[i].grade){
			case 'A' : case 'B': case 'C':
				writeProg << students[i].name  << "\t" ;
				writeProg << students[i].id << "\t";
				writeProg << students[i].score << "\t";
				writeProg << students[i].grade << endl;			
				break;
			case 'F' : 
				writeProb << students[i].name  << "\t" ;
				writeProb << students[i].id << "\t";
				writeProb << students[i].score << "\t";
				writeProb << students[i].grade << endl;			
				break;
			default:
				break;
		}
		
	}
	writeProb.close();
	writeProg.close();	
	
}