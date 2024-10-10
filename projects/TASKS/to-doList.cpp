#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Task structure
struct Task {
    string description;
    bool completed;
};

// Vector to store tasks
vector<Task> taskList;

// Function to add a task
void addTask(string description) {
    Task task;
    task.description = description;
    task.completed = false;
    taskList.push_back(task);
}

// Function to view tasks
void viewTasks() {
    cout << "To-Do List:" << endl;
    for (int i = 0; i < taskList.size(); i++) {
        cout << "[" << (taskList[i].completed ? "X" : " ") << "] " << taskList[i].description << endl;
    }
}

// Function to mark a task as completed
void markTaskAsCompleted(int index) {
    if (index >= 0 && index < taskList.size()) {
        taskList[index].completed = true;
    }
}

// Function to remove a task
void removeTask(int index) {
    if (index >= 0 && index < taskList.size()) {
        taskList.erase(taskList.begin() + index);
    }
}

int main() {
    int choice;
    string description;
    int index;

    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, description);
                addTask(description);
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                markTaskAsCompleted(index - 1);
                break;
            case 4:
                cout << "Enter task index to remove: ";
                cin >> index;
                removeTask(index - 1);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Try again!" << endl;
        }
    }

    return 0;
}