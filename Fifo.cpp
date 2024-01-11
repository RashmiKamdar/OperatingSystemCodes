#include <bits/stdc++.h> 
using namespace std; 
int pageFaults(int *pageString, int pageSlots, int n) {
    int faults = 0;
    
    // Set to store the elements present in queue, used to check if a page is present or not
    unordered_set<int> set;
    // Queue to maintain the order of insertion
    queue<int> q;
    
    // traverse the page string
    for (int i = 0; i < n; i++) {
        // if there are some empty slots
        if (q.size() < pageSlots) {
            if (set.find(pageString[i]) == set.end()) {
                // and the current page is missing
                // add the page to set
                set.insert(pageString[i]);
                // add the page to queue
                q.push(pageString[i]);
                // it is a page fault, increment faults
                faults++;
            }
        } else {
            // there are no empty slots and if current page is absent
            if (set.find(pageString[i]) == set.end()) {
                // remove the first page in queue
                int removedPage = q.front();
                q.pop();
                // remove the page from set
                set.erase(removedPage);
                
                // add the new page to set
                set.insert(pageString[i]);
                // add the new page to queue
                q.push(pageString[i]);
                
                // it is page fault, increment faults
                faults++;
            }
        }
    }
    
    return faults;
}
int main() {
    // Example
	int pageString[] = {1, 0, 1, 2, 5, 7, 3, 4, 3, 4, 1};
    int pageSlots = 4;
    cout<<pageFaults(pageString, pageSlots, sizeof(pageString) / sizeof(pageString[0]))<<endl;
    
    return 0;
}