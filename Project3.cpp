//************************************  PROGRAM IDENTIFICATION  *************************************** 
//*   PROGRAM FILE NAME:  Project3.cpp              ASSIGNMENT #:  3                                  * 
//*                                                                                                   *
//*   PROGRAM AUTHOR:   Anna George                                                                   * 
//*                                                                                                   *
//*   COURSE #:  CSC 24400 21              SEMESTER:  Spring 2019          INSTRUCTOR:  Dr. Miller    *            
//*                                                                                                   * 
//*   DUE DATE:  March 25, 2019                                                                       * 
//*                                                                                                   * 
//*****************************************************************************************************

//***********************************  PROGRAM DESCRIPTION  *******************************************
//*   PROCESS:   Four arrays are created, for student ID numbers, student names (first and last),     *
//*              student scores, and letter grades. Each column of the student names will point to a  * 
//*              C++ string that is allocated on the heap to hold the names, and the elements of the  *
//*              third array of student scores will point to arrays of type double where the first    *
//*              four columns will be test scores and the fifth will be the average of these scores.  *
//*              After all data is read into the arrays from input file data3.txt, the student IDs,   *
//*              names, and their test scores are printed out. Then, the information is sorted by ID  *
//*              number high to low and printed out again. Then, the information is sorted by         *           
//*              students' last names in ascending order and printed out again. Then, the student IDs,*
//*              names, four test scores, average of those scores, and letter grades are printed out. *
//*              Next, all the information that was just printed out is sorted first by test score    *
//*              1 high to low then test score 2 low to high then test score 3 high to low then test  *
//*              score 1 high to low. Between each sort, all the information is printed out. Finally, *
//*              the information is sorted by ID number low to high, and data is written to output    *
//*              file outfile3.txt, which includes student IDs, names, and the four test scores.      *
//*              Each piece of information is separated by a colon. Finally, the two pointers used in *
//*              the program are deleted using the delete operator.                                   *
//*                                                                                                   *
//*   CLASSES DEFINED:  N/A                                                                           * 
//*                                                                                                   * 
//*   USER DEFINED                                                                                    * 
//*      FUNCTIONS:  header - prints the program's header                                             *
//*                  footer - prints the program's footer                                             *
//*                  swap - swap information of arrays                                                *
//*                  sortStudentInfo - sorts student IDs from highest to lowest                       *
//*                  sortStudentInfo - sorts student IDs from lowest to highest                       *
//*                  sortStudentInfo - sorts student names by last name in ascending order            *
//*                  sortStudentInfo - sorts based on highest to lowest average test scores           *
//*                  sortStudentInfo - sorts based on test scores - either 1, 2, 3, or 4              *
//*                  printStudentInfo - prints student IDs, names, and four test scores               * 
//*                  printStudentInfo - prints student IDs, names, four test scores, average, and     * 
//*                  letter grade                                                                     *
//*                                                                                                   *
//*   INPUT FILES:   data3.txt                                                                        * 
//*   OUTPUT FILES:  outfile3.txt                                                                     *
//*                                                                                                   * 
//*****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std; 

//prototypes for project functions
void header();
void footer();
void swap(double, int, string*[], double*[], int, char[]);
void sortStudentInfo(string*[], int, int[], double*[], char[]);
void sortStudentInfo(int, string*[], double*[], int, double, char[]);
void sortStudentInfo(double*[], int, string*[], int, char[]);
void sortStudentInfo(double*[], int, int, int, string*[], char[]);
void printStudentInfo(int, string*[], double*[], int);
void printStudentInfo(int, string*[], double*[], char[], int);

void swap(double, int, string*[], double*[], int, char[]) {
}

void sortStudentInfo(string*[], int, int[], double*[], char[]) {
}

void sortStudentInfo(int, string*[], double*[], int, double, char[]) {
}

void sortStudentInfo(double*[], int, string*[], int, char[]) {
}

void sortStudentInfo(double*[], int, int, int, string*[], char[]) {
}

void printStudentInfo(int, string*[], double*[], int) {
}

void printStudentInfo(int, string*[], double*[], char[], int) {
}

//**************************************** FUNCTION HEADER  *******************************************
void header() {
	//receives - nothing
	//task - prints the program's header 
	//returns - nothing  
	cout << endl; 
	cout << setw(35) << " --------------------------------- " << endl;
	cout << setw(35) << "|     START OF PROGRAM OUTPUT     |" << endl;
	cout << setw(35) << " --------------------------------- " << endl;
	return;
}
//************************************* END OF FUNCTION HEADER  ***************************************

//*************************************  FUNCTION FOOTER  ********************************************* 
void footer() {
	//receives - nothing                
	//task - prints the program's footer                
	//returns - nothing    
	cout << endl;
	cout << setw(35) << " --------------------------------- " << endl;
	cout << setw(35) << "|      END OF PROGRAM OUTPUT      |" << endl;
	cout << setw(35) << " --------------------------------- " << endl << endl;
	return;
}
//************************************  END OF FUNCTION FOOTER  ***************************************

//***************************************  FUNCTION SWAP  *********************************************
void swap(int studentIDs[100], string *name[100][2], double *scores[100], int pos, char letters[100]) {
	//receives - student IDs, names, test scores, pos holds a specified position in each array, and letter grades  
	//task - swaps information of arrays  
	//returns - nothing  
	double temp4, temp5, temp6, temp7, temp9; 
	int temp1;
	string temp2, temp3;
	char temp8; 
	temp1 = studentIDs[pos];
	temp2 = *name[pos][0];
	temp3 = *name[pos][1];
	temp4 = scores[pos][0];
	temp5 = scores[pos][1];
	temp6 = scores[pos][2];
	temp7 = scores[pos][3];
	temp8 = letters[pos];
	temp9 = scores[pos][4]; 
	studentIDs[pos] = studentIDs[pos + 1];
	*name[pos][0] = *name[pos + 1][0];
	*name[pos][1] = *name[pos + 1][1]; 
	scores[pos][0] = scores[pos + 1][0];
	scores[pos][1] = scores[pos + 1][1];
	scores[pos][2] = scores[pos + 1][2];
	scores[pos][3] = scores[pos + 1][3];
	letters[pos] = letters[pos + 1];
	scores[pos][4] = scores[pos + 1][4];
	studentIDs[pos + 1] = temp1;
	*name[pos + 1][0] = temp2;
	*name[pos + 1][1] = temp3; 
	scores[pos + 1][0] = temp4;
	scores[pos + 1][1] = temp5;
	scores[pos + 1][2] = temp6;
	scores[pos + 1][3] = temp7;
	letters[pos + 1] = temp8;
	scores[pos + 1][4] = temp9;
}
//*************************************  END OF FUNCTION SWAP  ****************************************

//***********************************  FUNCTION SORTSTUDENTINFO  **************************************
void sortStudentInfo(string *name[100][2], int count, int studentIDs[100], double *scores[100], char letters[100]) {
	//receives - student ID array, array of first and last names, array of 4 test scores, 
	//array of letter grades, and count is the total number of students  
	//task - sorts student IDs from highest to lowest 
	//returns - nothing  
	bool swapMade = true;
	while (swapMade) {
		swapMade = false;
		for (int pos = 0; pos < count - 1; pos++) {
			if (studentIDs[pos] < studentIDs[pos + 1]) {
				//swap positions in arrays that contain types of student information 
				swap(studentIDs, name, scores, pos, letters);
				swapMade = true;
			}
		}
	}
}
//********************************  END OF FUNCTION SORTSTUDENTINFO  **********************************

//***********************************  FUNCTION SORTSTUDENTINFO  **************************************
void sortStudentInfo(int count, string *name[100][2], int studentIDs[100], double *scores[100], char letters[100]) {
	//receives - student ID array, array of first and last names, array of 4 test scores,  
	//array of letter grades, and count is the total number of students
	//task - sorts student IDs from lowest to highest 
	//returns - nothing  
	bool swapMade = true;
	while (swapMade) {
		swapMade = false;
		for (int pos = 0; pos < count - 1; pos++) {
			if (studentIDs[pos] > studentIDs[pos + 1]) {
				//swap positions in arrays that contain types of student information 
				swap(studentIDs, name, scores, pos, letters);
				swapMade = true;
			}
		}
	}
}
//********************************  END OF FUNCTION SORTSTUDENTINFO  **********************************

//*************************************  FUNCTION SORTSTUDENTINFO  ************************************
void sortStudentInfo(int studentIDs[100], string *name[100][2], double *scores[100], int count, char letters[100]) {
	//receives - student ID array, array of first and last names, array of 4 test scores, 
	//array of letter grades, and count is the total number of students
	//task - sorts student names by last name in ascending order
	//returns - nothing   
	bool swapMade = true;
	while (swapMade) {
		swapMade = false;
		for (int pos = 0; pos < count - 1; pos++) {
			if (*name[pos][1] > *name[pos + 1][1]) {
				//swap positions in arrays that contain types of student information
				swap(studentIDs, name, scores, pos, letters);
				swapMade = true;
			}
		}
	}
}
//**********************************  END OF FUNCTION SORTSTUDENTINFO  ********************************

//************************************  FUNCTION SORTSTUDENTINFO  *************************************
void sortStudentInfo(double *scores[100], int studentIDs[100], string *name[100][2], int count, char letters[100]) {
	//receives - student ID array, array of first and last names, array of 4 test scores, 
	//array of letter grades, and count is the total number of students
	//task - sorts based on highest to lowest average test scores 
	//returns - nothing  
	bool swapMade = true;
	while (swapMade) {
		swapMade = false;
		for (int pos = 0; pos < count - 1; pos++) {
			if (scores[pos][4] < scores[pos + 1][4]) {
				//swap positions in arrays that contain types of student information
				swap(studentIDs, name, scores, pos, letters);
				swapMade = true;
			}
		}
	}
}
//**********************************  END OF FUNCTION SORTSTUDENTINFO  ********************************

//*************************************  FUNCTION SORTBYSCORE  ****************************************
void sortStudentInfo(double *scores[100], int i, int count, int studentIDs[100], string *name[100][2], char letters[100]) {
	//receives - student ID array, array of first and last names, array of 4 test scores, 
	//array of letter grades, and count is the total number of students
	//task - sorts based on test scores - either 1, 2, 3, or 4
	//returns - nothing 
	if (i == 1 || i == 3) {
		bool swapMade = true;
		while (swapMade) {
			swapMade = false;
			for (int pos = 0; pos < count - 1; pos++) {
				if (scores[pos][i] > scores[pos + 1][i]) {
					//swap positions in arrays that contain types of student information
					swap(studentIDs, name, scores, pos, letters);
					swapMade = true;
				}
			}
		}
	}
	else {
		bool swapMade = true;
		while (swapMade) {
			swapMade = false;
			for (int pos = 0; pos < count - 1; pos++) {
				if (scores[pos][i] < scores[pos + 1][i]) {
					//swap positions in arrays that contain types of student information
					swap(studentIDs, name, scores, pos, letters);
					swapMade = true;
				}
			}
		}
	}
}
//**********************************  END OF FUNCTION SORTBYSCORE  ************************************

//************************************  FUNCTION PRINTSTUDENTINFO  ************************************ 
void printStudentInfo(int studentIDs[100], double *scores[100], string *name[100][2], int count) {
	//receives - arrays for student IDs, names, 4 test scores, count is the total number of students 
	//task - prints student IDs, names, and their four test scores 
	//returns - nothing  
	cout << " Student ID   Firstname   Lastname    Test 1  Test 2  Test 3  Test 4\n";
	cout << "------------  ----------  ----------  ------  ------  ------  ------\n";
	int i = 0;
	while (i < count) {
		cout << setfill(' ') << setw(12) << studentIDs[i] << setfill(' ');
		cout << "  " << setw(10) << left << *name[i][0] << "  " << setw(10) << *name[i][1];
		cout << "  " << fixed << setprecision(1) << setw(6) << right << scores[i][0];
		cout << "  " << setw(6) << scores[i][1];
		cout << "  " << setw(6) << scores[i][2];
		cout << "  " << setw(6) << scores[i][3] << endl;
		i++;
	}
}
//********************************  END OF FUNCTION PRINTSTUDENTINFO  *********************************

//************************************  FUNCTION PRINTSTUDENTINFO  ************************************ 
void printStudentInfo(int studentIDs[100], string *name[100][2], double *scores[100], char letters[100], int count) {
	//receives - arrays for student IDs, names, 4 test scores, letter grades, count is the total number of students
	//task - prints student IDs, names, their four test scores, the average of the scores, and their letter grade 
	//returns - nothing  
	cout << "                                                                      Test     Course\n";
	cout << " Student ID   Firstname   Lastname    Test 1  Test 2  Test 3  Test 4  Average  Grade \n";
	cout << "------------  ----------  ----------  ------  ------  ------  ------  -------  ------\n";
	int i = 0;
	//print student IDs, names, test scores, average scores, and letter grades in specified formats to console
	while (i < count) {
		cout << setfill(' ') << setw(12) << studentIDs[i] << setfill(' ');
		cout << "  " << setw(10) << left << *name[i][0] << "  " << setw(10) << *name[i][1];
		cout << "  " << fixed << setprecision(1) << setw(6) << right << scores[i][0];
		cout << "  " << setw(6) << scores[i][1];
		cout << "  " << setw(6) << scores[i][2];
		cout << "  " << setw(6) << scores[i][3]; 
		cout << "  " << setw(7) << setprecision(2) << scores[i][4];
		cout << "  " << setw(4) << letters[i] << endl; 
		i++;
	}
}
//*******************************  END OF FUNCTION PRINTSTUDENTINFO  **********************************

int main() {
	header(); //print program header 

	int studentIDs[100]; //array of student IDs 
	string *name[100][2]; //array of student names
	double *scores[100]; //array of test scores                      
	char letters[100]; //array of letter grades

	double *ptr = new double[5]; //allocate array of size 5 in dynamic memory to hold 4 test scores and average
	double *dptr = NULL; 

	for (int i = 0; i < 100; i++) { //initialize studentIDs array to hold all -1 values
		studentIDs[i] = -1;
	}

	for (int i = 0; i < 100; i++) { //initialize name array to hold empty strings 
		name[i][0] = NULL;
		name[i][1] = NULL;
	}

	for (int i = 0; i < 100; i++) { //initialize scores array to be NULL
		scores[i] = NULL;
	}

	for (int i = 0; i < 100; i++) { //initialize letters to hold one space 
		letters[i] = ' ';
	}

	for (int i = 0; i < 5; i++) { //initialize ptr to hold -1 in each space 
		ptr[i] = -1;
	}

	ifstream infile("data3.txt"); //open file data3.txt 

	string field;
	int id; //use to read in student id values 
	string firstName, lastName; //use to read in first and last name per student
	double score1, score2, score3, score4; //use to read in test score values per student 
	int count = 0; 
	while ( infile.good()) { //check if file is in a good state 
		getline(infile, field, ':'); //gets id number
		if (infile.eof()) break; //break if end of file 
		stringstream ss1(field); //ss1 is now a stream
		ss1 >> id; //store ss1 into id 
		getline(infile, firstName, ':'); //gets next string up to : character 
		getline(infile, lastName, ':'); //gets next string up to : character 
		getline(infile, field, ':'); //gets next string up to : character 
		stringstream ss2(field); //reads in first double 
		ss2 >> score1; //stores double value in score1  
		getline(infile, field, ':'); //gets next string up to : character      
		stringstream ss3(field); //reads in second double 
		ss3 >> score2; //stores double value in score2 
		getline(infile, field, ':'); //gets next string up to : character      
		stringstream ss4(field); //reads in third double
		ss4 >> score3; //stores double value in score3
		getline(infile, field); //gets rest of line 
		stringstream ss5(field); //reads in fourth double
		ss5 >> score4; //stores double value in score4

		if (id >= 0) {
			studentIDs[count] = id; //store id number in studentIDs array 
			name[count][0] = new string; //allocate new string in dynamic memory 
			*(name[count][0]) = firstName; //dereference and store first name 
			name[count][1] = new string; //allocate new string in dynamic memory 
			*(name[count][1]) = lastName; //dereference and store last name

			//store each score into different spots in ptr
			ptr[0] = score1;
			ptr[1] = score2;
			ptr[2] = score3;
			ptr[3] = score4;
			scores[count] = ptr; //store 4 scores into scores array associated with one student
			dptr = scores[count];  
			dptr[4] = (dptr[0] + dptr[1] + dptr[2] + dptr[3]) / 4; //calculate average of the four scores 

			//calculate and store letter grades
			if (ptr[4] >= 89.5) {
				letters[count] = 'A';
			}
			else if (ptr[4] >= 79.5) {
				letters[count] = 'B';
			}
			else if (ptr[4] >= 69.5) {
				letters[count] = 'C';
			}
			else if (ptr[4] >= 59.5) {
				letters[count] = 'D'; 
			}
			else {
				letters[count] = 'F';
			}

			ptr = new double[5]; //allocate array of size 5 in dynamic memory to hold 4 test scores and average
			count++;
		}
	}

	cout << endl << "The original student data is:\n";
	printStudentInfo(studentIDs, scores, name, count);

	//sort by ID number high to low
	cout << endl << endl << "The list of students sorted by ID Number high to low is:\n";
	sortStudentInfo(name, count, studentIDs, scores, letters);
	printStudentInfo(studentIDs, scores, name, count);
	
	//sort by students' last names in ascending order
	cout << endl << endl << "The list of students sorted by Last Name in ascending order is:\n";
	sortStudentInfo(studentIDs, name, scores, count, letters);
	printStudentInfo(studentIDs, scores, name, count);

	cout << endl << endl << "The list of students with their test average and course grade is:" << endl;
	printStudentInfo(studentIDs, name, scores, letters, count);
	
	//sort by test score 1 high to low
	cout << endl << endl << "The list of students sorted by test score 1 high to low is:" << endl;
	sortStudentInfo(scores, 0, count, studentIDs, name, letters);
	printStudentInfo(studentIDs, name, scores, letters, count);

	//sort by test score 2 low to high
	cout << endl << endl << "The list of students sorted by test score 2 low to high is:" << endl;
	sortStudentInfo(scores, 1, count, studentIDs, name, letters);
	printStudentInfo(studentIDs, name, scores, letters, count);

	//sort by test score 3 high to low
	cout << endl << endl << "The list of students sorted by test score 3 high to low is:" << endl;
	sortStudentInfo(scores, 2, count, studentIDs, name, letters);
	printStudentInfo(studentIDs, name, scores, letters, count);

	//sort by test score 4 low to high
	cout << endl << endl << "The list of students sorted by test score 4 low to high is:" << endl;
	sortStudentInfo(scores, 3, count, studentIDs, name, letters);
	printStudentInfo(studentIDs, name, scores, letters, count);

	//sort by test average high to low 
	cout << endl << endl << "The list of students sorted by test average high to low is:" << endl;
	sortStudentInfo(scores, studentIDs, name, count, letters);
	printStudentInfo(studentIDs, name, scores, letters, count);

	sortStudentInfo(count, name, studentIDs, scores, letters); //sort by ID number, low to high 
	cout << "\nOpening output file: outfile3.txt" << endl;
	ofstream myfile("outfile3.txt");
	cout << "Write data to the output file" << endl;

	int i = 0;
	//write data to output file with names and test scores, each separated by a colon 
	while (i < count) {
		if (studentIDs[i] >= 0) {
			myfile << studentIDs[i] << ":" << *name[i][0] << ":" << *name[i][1] << ":" << scores[i][0] << ":";
			myfile << fixed << setprecision(1) << scores[i][1] << ":" << scores[i][2] << ":" << scores[i][3] << endl;
			i++;
		}
	}

	cout << "Closing output file: outfile3.txt" << endl << endl;
	myfile.close(); //close output file

	footer(); //print program footer

	//delete both double pointers and set to null 
	delete[] ptr;
	ptr = NULL; 
	delete[] dptr;
	dptr = NULL; 

	return 0; 
}