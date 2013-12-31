#define MAX_COMMENT_SIZE 50
#define MAX_USERS 50
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 struct user
{

    char *name;
    int rating;
    char *comment;

} ;




int main(int argc, char *argv[])
{
    struct user *user1 = create_user("Movie:", "Conjuring");

    printf("%s %s",user1->name,user1->comment);
    return 0;
}



int isuser(const char *s)
{

    char c;
    int i = 0;
    while((c = s[i]) != '\0')
    {
        if(s[i] == ':')
            return 1;
        i++;
    }
    return 0;


}



struct user *create_user(const char *name,const char *comment)
{

    struct user *user1 = malloc(sizeof(struct user));
    assert(user1 != NULL);
    user1 -> name = strdup(name);
    user1 -> comment = strdup(comment);
    user1 -> rating = 0;

    return user1;

}

struct user *create_database(int s)
{

     struct user *db[] = malloc(sizeof(USER) * s);
     return db;
}




