#include "linked_list.h"
#include<iostream>
using namespace std;


//Constructor
linked_list::linked_list()
{
	list =nullptr ;
}
//Create Node
node* linked_list::create_node()
{
	node* p;
	p = new node;
	return p;
}


//-------FREE NODE-------
void linked_list::free_node(node* p)
{
	delete (p);
}


//-----------ADD First---------------
void linked_list::add_first(int val)
{
    node* p;
    p = create_node();    // Step 1: Create a new node
    p->info = val;        // Step 2: Assign value to the node

    if (list == nullptr)  // Step 3: If the list is empty
    {
        p->next = nullptr; // Set next pointer to null (end of list)
        list = p;          // Step 4: Make new node the first (head)
        return;
    }

    // Step 5: If list isn't empty
    p->next = list;  // Link new node to current first node
                     //You set the next pointer of the new node to 
                     // point to the current first node (which list is pointing to):
    list = p;        // Step 6: Make new node the new head
}



//-----------ADD LAST----------------
void linked_list::add_last(int val)
{
    node* p = create_node();
    p->info = val;
    p->next = nullptr;
    if (list == nullptr)
    {
        list = p; 
        return;
    }
    node* q = list; // temporary pointer named q points where the list point
    while (q->next != nullptr)
    {
        q = q->next;
    }
    q->next = p;
}



//Following function will add new element at any position
void linked_list::AddAfter(int val, int pos)
{
    node* p; 
    node*q = list;
    //Finding the position to add new element to the linked list
    for (int i = 0; i < pos - 1; i++)
    {
        q = q->next;
        if (q == nullptr)
        {
            cout << "There are less than "<<pos<<"elements "<<endl;
                system("pause");
            return;
        }
    } 
    p = create_node();
    p->info = val;
    p->next = q->next;
    q->next = p;
}




//Delete any element from the linked list
void linked_list::Del(int data)
{
    node* p = list;
    if (p->info == data) // First element deleted
    {
        list = list->next;
        free_node(p);
        return;
    }
    // Element deleted in between
    node* q = list, * k;
    while (q->info != data)
    {
        k = q; 
        q = q->next;
    }
    if (q->next == nullptr && q->info != data)
    {
        cout << "The element does not exist on the List" << endl;
        return;
    }
    k->next = q->next;
    free_node(q);
}


// REMOVE FIRST 
int linked_list::remove_first()
{
    int val;
    node* p = list;
    if (list == NULL){
        return -1;
    }
    if (p->next == NULL)
    {
        val = p->info;
        free_node(list);
        list = NULL;
        return val;
    }
    list = p->next;
    val = p->info;
    free_node(p);
    return val;
}



// REMOVE LAST
int linked_list::remove_last()
{
    int val;
    if (list == NULL)
        return -1;
    node* q = list;
    if (q->next == NULL)
    {
        val = q->info;
        free_node(list);
        list = NULL; return val;
    }
    node* k;
    while (q->next != NULL)
    {
        k = q;
        q = q->next;
    }
    val = q->info;
    free_node(q);
    k->next = NULL;
    return val;
}



//Display
void linked_list::Display_list()
{
    node* q = list;
    if (list == NULL)
    {
        cout << "List is empty"<<endl;
            return;
    }
    cout << "The elements of the list are : ";
    while (q->next != NULL)
    {
        cout << q->info;
        q = q->next;
    } 
}



//Function to count the number of nodes in the linked list
int linked_list::count()
{
    node* q = list;  //Temporary pointer
    int cnt = 0;
    while (q != NULL)
    {
        q = q->next;
        cnt++;
    }
    return cnt;
}


//Search
int linked_list::Search(int data)
{
    node* p = list;
    int pos = 0;
    while (p->next != NULL)
    {
        if (p->info == data){
            pos++;
        }
        p = p->next;
    }
    if (p == NULL) {
        return -1;
    }
    return pos;
}


// Function to reverse the linked list void
void linked_list::reverse()
{
    node* current_node = list;     // start at the head of the list
    node* prev_node = NULL;        // will become the new tail
    node* next_node = NULL;        // to temporarily hold the next node


    while (current_node != NULL)
    {
        next_node = current_node->next;
        current_node->next =prev_node; 
        prev_node = current_node; 
        current_node = next_node;
    }
    list = prev_node;
}





// Function to add a new node at the middle of the linked list
void linked_list::Add_mid(int val)
{
    node* slow = list;
    node* fast = list;

    // Empty list case: insert as first node
    if (list == NULL)
    {
        node* p = create_node();
        p->info = val;
        p->next = NULL;
        list = p;
        return;
    }

    // Use two-pointer (slow-fast) method to find the middle
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Insert after the 'slow' pointer (middle)
    node* p = create_node();
    p->info = val;
    p->next = slow->next;
    slow->next = p;
}








// Function to add one new node at the beginning and one at the end
void linked_list::Add_two(int val1, int val2)
{
    // Create first node to add at the beginning
    node* first = create_node();
    first->info = val1;
    first->next = list;
    list = first;

    // Create second node to add at the end
    node* last = create_node();
    last->info = val2;
    last->next = NULL;

    // If the list only had one node (just added above), link it to last
    if (first->next == NULL)
    {
        first->next = last;
        return;
    }

    // Traverse to the end of the list
    node* q = list;
    while (q->next != NULL)
    {
        q = q->next;
    }

    // Link the last node
    q->next = last;
}

