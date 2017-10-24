/*
*Pushkin Feleke
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

	int main(){
		
		//counter 
		unsigned int count = 0;
		//this will hold the values temprarly 
		unsigned int temp;
		 //vector 
		vector<int> vectoInput;

	//this will open the 
	ifstream file;
	file.open("data.txt" );
	
	//this is the output file 
	ofstream writeToFile;
	writeToFile.open("dataSorted.txt");
	
	while(!file.eof()){
		file>>temp;
		
		vectoInput.push_back(temp);
		
		count++;

		}//while

		//this is the sorted saved in the output file
	for(unsigned int i =0 ; i < count-1 ;i++){
		sort(vectoInput.begin()+1,vectoInput.end()-1);
		//uncomment below to see sorted results within the console
		//cout<<v[i]<< endl;
		writeToFile<<vectoInput[i] << " ";
	}// close forloop


	//delete the first element of the vector 
		vectoInput.erase(vectoInput.begin()+0);
		
		//this will show the percentage of the input by selecting the position
		unsigned int twentyFivePercentile = (vectoInput.size()-1) * .25;
		unsigned int fiftyPercentile = (vectoInput.size()-1) * .5;
		unsigned int seventyFivePercentile = (vectoInput.size()-1) * .75;
		
		// x= 25% y = 50% z = 75%
		unsigned int x = vectoInput[twentyFivePercentile];
		unsigned int y = vectoInput[fiftyPercentile];
		unsigned int z = vectoInput[seventyFivePercentile];
		
		//this is the output
		
		cout<<"25% = "<< x << endl;
		cout<<"50% = "<< y << endl;
		cout<<"75% = "<< z << endl;
		//cout<<"the size"<<vectoInput.size()<<endl;

	return 0;
	}//main
