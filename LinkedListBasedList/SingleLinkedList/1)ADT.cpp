#include<iosteam>
using namespace std;
class singlelist{
private :
   struct node {
      int data;
      struct node *next;
}*head ,*p,*temp;
public:
   singlelist(){
      head = NULL;
      p = NULL;
      temp = NULL;
   }
void insert (int);
};
