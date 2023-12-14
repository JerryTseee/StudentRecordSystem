#include<iostream>
#include<string>
#include<list>//use STL container to achieve the goal
using namespace std;

class Record
{
public:
	string name;
	string major;
	int number;
};

int main()
{
	list<Record> student;
	string command;
	Record r;
	
	while (cin >> command)
	{
	    if (command != "Quit")//only exit the system when command == quit
	    {
		    if (command == "Add")//add the new student
		    {
			    cin>>r.name>>r.major>>r.number;
			    student.push_back(r);//insert an item on the back
			    cout << "Added Successfully" << endl;
		    }
		    else
		    {
		        cin >> r.name >> r.major;
		        
		        bool recordFound = false;//to determine whether the student is found or not
		        
		        list <Record>::iterator itr;//iterator
		        for (itr = student.begin(); itr!=student.end();itr++)
		        {
		            if (itr->name == r.name && itr->major == r.major)
		            {
		                cout<<"Student Number:"<<itr->number<<endl;
		                recordFound = true;//found the student
		                break;
		            }
		        }
				
				if (recordFound == false)//not found the student
				{
				    cout<<"No Record found"<<endl;
				}
    		}
	    }
	}
	cout<<"Bye"<<endl;
	return 0;
}
