struct node
    {
         int data;                 //Data element
         struct node * left;          //Pointer to left node
         struct node * right;         //Pointer to right node
    };
    
struct node root;

struct node * root;
    root=(node * )malloc(sizeof(node));
    
struct node * newnode(int element)
    {
        struct node * temp=(node * )malloc(sizeof(node));
        temp->data=element;
        temp->left=temp->right=NULL;
        return temp;
    }

int maxDepth(struct node* node) 
    {
        if (node==NULL) 
            return 0;
        else
        {
             /* compute the depth of each subtree */
              int lDepth = maxDepth(node->left);
              int rDepth = maxDepth(node->right);

              /* use the larger one */
              if (lDepth > rDepth) 
                    return(lDepth+1);
              else 
                   return(rDepth+1);
       }
    } 
