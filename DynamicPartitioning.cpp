#include<iostream>
using namespace std;

int getProcesses(int processes[], int partitions[], int memory_size, int no_proc) {
    int sum =0 ;

    for(int i=0; i<no_proc; i++) {
        cout << "Enter Process " << i+1 << " size: ";
        cin >> processes[i];
        partitions[i] = processes[i];
        sum += partitions[i];
    }
    return sum;
}
void displayMemoryDetails(int memory_size, int sum) {
    cout << "Total Memory = " << memory_size << endl;
    cout << "Used Memory = " << sum << endl;
    cout << "Remaining Memory = " << memory_size - sum << endl;
}

void displayPDT(int partitions[],int processes[], int no_proc) {
    cout << "Process Number" << "\t\t" << "Partition Size" << "\t\t" << "Process Size\n";
    for(int i=0; i<no_proc; i++)
        cout << i+1 << "\t\t\t" << partitions[i] << "\t\t\t" << processes[i] << endl;
}

int main() {

    int memory_size, no_proc,sum=0;
    cout << "Enter the size of memory : ";
    cin >> memory_size;

    cout << "How many processes you want to add? - ";
    cin >> no_proc;

    int processes[no_proc];
    int partitions[no_proc];

    sum = getProcesses(processes, partitions, memory_size, no_proc);
    while(sum > memory_size){
        cout << "The size of processes exceeds the memory size. Please enter the size of processes again \n";
        sum = getProcesses(processes, partitions, memory_size, no_proc);
    }

    displayMemoryDetails(memory_size, sum);

    displayPDT(partitions, processes, no_proc);



    int del_proc, flag = 0;
    cout << "Enter the process number to be deleted: ";
    cin >> del_proc;

    for(int i=1; i<=no_proc; i++) {
        if(i == del_proc) {
            cout << "Process Deleted successfully!!!\n";
            flag = 1;
            no_proc -= 1;
            sum -= processes[i-1];
            for (int j=i-1; j<no_proc; j++) {
                processes[j] = processes[j+1];
                partitions[j] = partitions[j+1];
            }
        }
    }
    if(flag == 0) {
        cout << "Process Not Found\n";
        exit(0);
    }

    displayMemoryDetails(memory_size, sum);

    displayPDT(partitions, processes, no_proc);

    return 0;
}