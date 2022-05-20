#include <iostream>
class Comment
{
private:
 int CommentID;
 int CustomerID;

 char CustomerComment[100];
public:
 Comment(const int cCommentID, int cCustomerID, char cCustomerComment[]);
 void ViewComment();
 void AddComment();
 ~Comment();
};