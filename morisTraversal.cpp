#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node* right;
    Node* left;

};
Node* createNode(int data)
{
    Node* temp = new Node();
    temp->val = data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;

}
void insertion(Node* &root , int data)
{
   if(root==NULL)
   {
        Node* temp = createNode(data);
        root = temp;
        return ;
   }
   queue<Node* > q;
   q.push(root);
   while(!q.empty())
   {
     Node*temp = q.front();
     q.pop();
     if(temp->left==NULL)
         {
            Node* ptr = createNode(data);
            temp->left=ptr;
            break;
         }
     else
         {
                q.push(temp->left);
         }
     if(temp->right==NULL)
         {
            Node* ptr = createNode(data);
            temp->right=ptr;
            break;
         }
     else
         {
            q.push(temp->right);
         }


   }
   return;

}
void morisTraversal(vector<int> &arr,Node*root)
{
            Node*curr = root;
            while (curr!=NULL)
            {
                if(curr->left!=NULL)
                {
                    Node *ptr = curr->left;
                    while(ptr->right!=NULL && ptr->right!=curr)
                    {
                        ptr = ptr->right;
                    }
                    if(ptr->right==NULL)
                    ptr->right = curr,curr=curr->left;
                    else
                    { 
                        ptr->right = NULL;
                        arr.push_back(curr->val);
                        curr = curr->right;
                    }

                }
                else{
                       arr.push_back(curr->val);
                       curr = curr->right;
                }
            }
            


}
void print(vector<int> &arr)
{
    for(int i =0; i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
        Node *root = NULL;
        vector<int> arr;
         cout<<"Press 1 for insertion \nPress 2 for MorisTraversal\nPress3 for exit\n";
         while (1)
         {
            int ch,data;
            cin>>ch;
            switch(ch)
            {
                case 1:  cout<<"Enter the data you to insert\n";
                         cin>>data;
                         insertion(root,data);
                         cout<<"\n";
                         break;
                case 2:  morisTraversal(arr,root);
                         print(arr);
                         break;


                case 3: cout<<"Exiting \n";
                        exit(0);
            }
         }
         
         


}
