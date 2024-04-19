// welcome linked list 
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node 
// {
//     int x;                     // content
//     struct Node* next;         // next pointer
// } Node;

// // elem2 is after root because root.next is pointing at its address and its the end of the list 
// // since it is point at null (next pointer)

// // int main(int argc, char* argv[])
// // {
// //     Node root, elem2;           
// //     root.x = 15;
// //     root.next = &elem2;
// //     elem2.x = 2;
// //     elem2.next = NULL;    

// //     printf("First: %d\n", root.x);
// //     printf("Second %d\n", elem2.x);
// //     return 0;
// // }
// // ********************
// // More making sence way
// // ********************
// // int main(int argc, char**)
// // {
// //     Node root;
// //     root.x = 15;
// //     root.next = malloc(sizeof(Node));
// //     root.next -> x = -2;
// //     root.next -> next =  NULL;

// //     printf("First %d\n", root.x);
// //     printf("Second: %d\n", root.next -> x); //root.next -> x same as (*root.x).x

// //     free(root.next);
// // }
// // ********************************************
// // Comparision between Arrays and Linked List
// //********************************************

// /* 
//                 Loops
//     Arrays             Linked Lists
//     int i = 0;        Node*current = &root;
    
//     i < n;            current != NULL;

//     i++;              current = current -> next;
// */
// //******************************************
// //            USAGE OF WHILE LOOPS
// //******************************************

// // int main(int argc, char**)
// // {
// //     Node root;
// //     root.x = 15;
// //     root.next = malloc(sizeof(Node));
// //     root.next -> x = -2;
// //     root.next->next =  malloc(sizeof(Node));
// //     root.next->next -> x = 23;
// //     root.next->next->next = NULL;

// //     Node* current = &root;
// //     while (current != NULL)
// //     {
// //         printf("%d\n", current -> x);
// //         current = current -> next;
// //     }
// //     free(root.next->next);
// //     free(root.next);
// // }
// // *********************************************************
// // adding elements to a linked list (solving ton of ->next)
// // *********************************************************
// // void insert_end(Node** root, int value)     //adding at the back of the list
// // {
// //     Node* new_node = malloc(sizeof(Node));
// //     if(!new_node)
// //         exit(1);
// //     new_node -> next = NULL;
// //     new_node->x = value;

// //     if (*root == NULL)
// //     {
// //         *root = new_node;
// //         return;
// //     }
// //     Node* curr = *root;
// //     while(curr->next != NULL)
// //     {
// //         curr = curr ->next;
// //     }
// //     curr->next = new_node;
// // }

// // int main(int argc, char* argv[])
// // {
// //     Node* root = malloc(sizeof(Node));
// //     if (!root)
// //          return;
// //     root->x = 15;
// //     root->next = NULL;

// //     insert_end(&root, 10);
// //     insert_end(&root, 5);
// //     Node* current = root;
// //     while (current != NULL)
// //     {
// //         printf("%d\n", current->x);
// //         current = current->next;
// //     }
// //     return 0;
// // }
// // *********************************************
// //          Deallocating a memory (lists)             // You cant just free the *root.. 
// //**********************************************
// // void deallocate(Node **root)
// // {
// //     Node* curr = *root;
// //     while (curr != NULL)
// //     {  
// //         Node* temp = curr;
// //         curr = curr -> next;
// //         free(temp);
// //     }
// //     *root = NULL;
// // }
// // int main(int argc, char* argv[])
// // {
// //     Node* root = malloc(sizeof(Node));
// //     if (!root)
// //         return;
// //     root->x = 15;
// //     root->next = NULL;

// //     insert_end(&root, 10);
// //     insert_end(&root, 5);
// //     deallocate(&root);                          
// //     Node* current = root;
    
// //     while (current != NULL)
// //     {
// //         printf("%d\n", current->x);
// //         current = current->next;
// //     }
// //     return 0;
// // }
// //**************************************
// //         Insert at the beginning 
// //**************************************
// // void insert_beginning(Node** root, int value)                       TRY DRAWING NODES AND FIGURE OUT WHY???
// // {
// //     Node* new_node = malloc(sizeof(Node));
// //     if(!new_node)
// //         return;
// //     new_node ->x = value;
//  //    new_node-> next =*root;
// //     *root = new_node;
// // }
// //  int main(int ac, char **av)
// //  {
// //     Node* root = NULL;

// //     insert_beginning(&root, 3);
// //     insert_beginning(&root, 2);
// //     insert_beginning(&root, 1);
// //     Node* current = root;
// //     while (current != NULL)
// //     {
// //         printf("%d\n", current->x);
// //         current = current ->next;
// //     }
// //  }
// //**************************************
// //    Add an element in a linked list
// //***************************************
// // void insert_after(Node* node, int value)                      
// // {
// //     Node* new_node = malloc(sizeof(Node));
// //     if (new_node == NULL)
// //             return;
// //     new_node -> x = value;
// //     new_node -> next = node ->next;                               // TRY DRAWING NODES AND FIGURE OUT WHY???
// //     node -> next = new_node;
// // }

// // void insert_beginning(Node** root, int value)
// // {
// //     Node* new_node = malloc(sizeof(Node));
// //     if(!new_node)
// //         exit(1)
// //     new_node ->x = value;
// //     new_node-> next =*root;

// //     *root = new_node;
// // }

// //  int main(int ac, char **av)
// //  {
// //     Node* root = NULL;

// //     insert_beginning(&root, 3);
// //     insert_beginning(&root, 2);
// //     insert_beginning(&root, 1);
// //     insert_after(root->next->next, 4);
// //     Node* current = root;
// //     while (current != NULL)
// //     {
// //         printf("%d\n", current->x);
// //         current = current ->next;
// //     }
// //  }
// // ****************************************
// //           Sorted linked list
// // ****************************************

// // void insert_beginning(Node** root, int value)                      
// // {
// //     Node* new_node = malloc(sizeof(Node));
// //     if (!new_node)
// //         exit(1);
// //     new_node -> x = value;
// //     new_node -> next =*root;

// //     *root = new_node;
// //  }

// // void insert_after(Node* node, int value)                      
// // {
// //     Node* new_node = malloc(sizeof(Node));
// //     if (new_node == NULL)
// //             exit(2);
// //     new_node -> x = value;
// //     new_node -> next = node ->next;                               
// //     node -> next = new_node;
// // }
// // void insert_sorted(Node** root, int value)
// // {
// //     if (!*root || (**root).x >= value)
// //        { 
// //             insert_beginning(root, value);
// //             return;
// //        } 
// //     Node* current = *root;
// //     while (current -> next != NULL)
// //     {
// //         if (current->next -> x >= value)
// //             break;
// //         current = current -> next;
// //     }
// //         insert_after(current, value);
// // }

// // int main(int ac, char **av)
// //  {
// //     Node* root = NULL;

// //     // insert_beginning(&root, 3);
// //     // insert_beginning(&root, 2);
// //     // insert_beginning(&root, 1);
// //     // insert_after(root->next->next, 4);
// //     insert_sorted(&root, 10);
// //     insert_sorted(&root, 3);
// //     insert_sorted(&root, 5);
// //     insert_sorted(&root, 2);
// //     insert_sorted(&root, 6);
// //     insert_sorted(&root, 4);
// //     insert_sorted(&root, 2);
// //     insert_sorted(&root, 11);

// //     Node* current = root;
// //     while (current != NULL)
// //     {
// //         printf("%d\n", current->x);
// //         current = current ->next;
// //     }
// //  }
// // *************************************
// //          Removing an element
// // **************************************
// // void remove_element(Node** root, int value)
// // {
// //     if (!*root)
// //         return;

// //     if ((*root) -> x == value)
// //         {
// //             Node* to_remove = *root;
// //             *root = (*root) -> next;
// //             free(to_remove);
// //             return;
// //         }

// //     Node *current = *root;
// //     while (current -> next != NULL)
// //     {
// //         if (current -> next-> x == value)
// //         {
// //             Node* to_remove = current -> next;
// //             current -> next = current -> next -> next;
// //             free(to_remove);
// //             return;
// //         }
// //         current = current ->next;
// //     }
// // }
// // int main(int ac, char **av)
// //  {
// //     Node* root = NULL;

// //     // insert_beginning(&root, 3);
// //     // insert_beginning(&root, 2);
// //     // insert_beginning(&root, 1);
// //     // insert_after(root->next->next, 4);
// //     insert_sorted(&root, 10);
// //     insert_sorted(&root, 3);
// //     insert_sorted(&root, 5);
// //     insert_sorted(&root, 2);
// //     insert_sorted(&root, 6);
// //     insert_sorted(&root, 4);
// //     insert_sorted(&root, 1);
// //     insert_sorted(&root, 11);
// //     remove_element(&root, 1);
// //     Node* current = root;
// //     while (current != NULL)
// //     {
// //         printf("%d\n", current->x);
// //         current = current ->next;
// //     }
// //  }
// //*******************************************
// //             Reverse linked list
// //*********************************************

// // void reverse(Node** root)
// // {
// //     Node* prev = NULL;
// //     Node* current = *root;
    
// //     while (current != NULL)
// //     {
// //         Node* following  = current -> next;
// //         current -> next = prev;

// //         prev = current;
// //         current = following;
// //     }
// //         *root = prev;      
// // }

// // int main()
// // {
// //     Node* root = NULL;
// //     insert_end(&root, 1);
// //     insert_end(&root, 2);
// //     insert_end(&root, 3);
// //     reverse(&root);

// //     Node* current = root;

// //     while(current != NULL)
// //     {
// //         printf("%d", current -> x);
// //         current = current -> next;
// //     }
// // }
// // *************************************
// //   linked List infinite loop checker;
// // *************************************
// // int isinfinite(Node *root)
// // {
// //     Node* slow = root;
// //     Node* fast = root;

// //     while (fast != NULL && slow != NULL && fast -> next != NULL)
// //     {
// //         slow = slow -> next;
// //         fast = fast -> next -> next;
// //         if (fast == slow)
// //             return 1;
// //     }
// //         return 0;
// // }

// //****************************************
// //      iteratively and recursively
// //****************************************

// // size of list:
// // int listsize(Node*root)
// // {
// //     int c = 0;
// //     Node* current = root;
// //     while (current != NULL)
// //     {
// //         c++;
// //         current = current -> next;
// //     }
// //         return c;
// // }

// //doing the same but in a recurssive way

// // int count_recursive(Node *root)
// // {
// //     if (root == NULL)
// //         return 0;
    
// //     return 1 + count_recursive(root -> next);
// // }
// // int main(int ac, char **av)
// //  {
// //     Node* root = NULL;

    

// //     // insert_beginning(&root, 3);
// //     // insert_beginning(&root, 2);
// //     // insert_beginning(&root, 1);
// //     // insert_after(root->next->next, 4);
// //     insert_sorted(&root, 10);
// //     insert_sorted(&root, 3);
// //     insert_sorted(&root, 5);
// //     insert_sorted(&root, 2);
// //     insert_sorted(&root, 6);
// //     insert_sorted(&root, 4);
// //     insert_sorted(&root, 2);
// //     insert_sorted(&root, 11);

// //     Node* current = root;
// //     // while (current != NULL)
// //     // {
// //         // printf("%d\n", current->x);
// //             printf("%d\n",count_recursive(current));
// //         // current = current ->next;
// //     // }
// //  }