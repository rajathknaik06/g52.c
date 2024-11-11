/*You are developing a program for a special event where guests will receive personalized badges as they arrive.



To enhance the badge design, you want to display each guest's name 5 times on the badge, creating a unique and visually appealing effect.



Your task is to design a program that collects guest names, repeats them on separate lines, and displays the customized content.

Input format :
The input consists of a string, representing the guest's name (a string without spaces).

Output format :
The output displays the name 5 times on separate lines.*/

#include <stdio.h>

int main() {
    char name[250];
    scanf("%s", name);
    printf("%s\n%s\n%s\n%s\n%s", name, name, name, name, name);
    return 0;
}
