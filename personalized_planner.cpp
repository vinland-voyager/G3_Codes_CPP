#include <iostream>
using namespace std;

struct Task {
    char description[100];
};

Task tasks[100];
int taskCount = 0;

void addTask() {
    cin.ignore();
    cout << "Task: ";
    cin.getline(tasks[taskCount++].description, 100);
}

void viewTasks() {
    for (int i = 0; i < taskCount; ++i) {
        cout << i + 1 << ". " << tasks[i].description << "\n";
    }
}

int main() {
    int choice;
    do {
        cout << "1. Add\n2. View\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) addTask();
        else if (choice == 2) viewTasks();
    } while (choice != 3);
    return 0;
}
