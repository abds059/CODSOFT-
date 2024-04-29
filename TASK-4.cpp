#include<iostream>

using namespace std;

const int MAX = 100;

class Todolist{
    string tasks[MAX];
    bool completed[MAX];
    int nooftasks;

public:
    Todolist(){
        nooftasks = 0;
    }
    void addtasks(const string &description){
        if(nooftasks<MAX){
            tasks[nooftasks] = description;
            completed[nooftasks] = false;
            nooftasks++;
            cout<<"Task added successfully "<<endl<<endl;
        }else{
            cout<<"Tasks limit exceeded! "<<endl;
        }
    }
    void viewtasks(){
        cout<<"TASKS:"<<endl;
        for(int i = 0; i < nooftasks; ++i){
            cout << i+1 << ". " << tasks[i] << " - " << (completed[i] ? "Completed" : "Pending") << endl;
            }
        }
    void markcompleted(int index){
        if(index >= 1 && index < nooftasks){
            completed[index - 1] = true;
            cout<<"Task marked as completed "<<endl;
        }else{
            cout<<"Invalid task index! "<<endl;
        }
    }
    void removetask(int index){
        if(index>=1 && index < nooftasks){
            for (int i = index - 1; i < nooftasks - 1; ++i) {
            tasks[i] = tasks[i + 1];
            completed[i] = completed[i + 1];
        }
        nooftasks--;
        cout<<"Task removed successfully! "<<endl;
        }else{
            cout<<"Invalid task index! "<<endl;
        }
    }
};

int main(){
    Todolist todo;
    int choice;
    string taskdescription;
    int taskIndex;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:{
                cout<<"Enter task description: "<<endl;
                cin.ignore();
                getline(cin,taskdescription);
                todo.addtasks(taskdescription);
                break;
            }
            case 2:{
                todo.viewtasks();
                break;
            }
            case 3:{
                cout<<"Enter the index of the task to be mark as completed: "<<endl;
                cin>>taskIndex;
                todo.markcompleted(taskIndex);
                break;
            }
            case 4:{
                cout<<"Enter the index of the task to be removed: "<<endl;
                cin>>taskIndex;
                todo.removetask(taskIndex);
                break;
            }
            case 5:{
                cout<<"Exiting! "<<endl;
                break;
            }
            default: {
                cout<<"Invalid choice! "<<endl;
            }
        }
    }
    while(choice != 5);

    return 0;
}