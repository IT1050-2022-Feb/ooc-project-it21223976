#include <iostream>
#include "Comment.h"
Comment::Comment(const int cCommentID, int cCustomerID, char 
cCustomerComment[])
{
CommentID = cCommentID;
CustomerID = cCustomerID;
stpcpy_s(CustomerComment, cCustomerComment);
}
void Comment::ViewComment()
{
}

void Comment::AddComment()
{
}
Comment::~Comment()
{
}