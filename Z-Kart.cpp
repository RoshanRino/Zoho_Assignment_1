#include "functionality.h"

int main()
{
    int input;
    loadData();
    while(1)
    {
        int tem;
        input=userInput();
        switch (input)
        {
        case 1:
            tem=login();
            if(tem)
            {
                displayOptions(tem);
            }
            break;
        case 2:
            signUp();
            break;
        case 3:
            if(adminLog());
            {
                adminFunction();
            }
              break;
        case 4:
            return 0;
        default:
            break;
        }
    }
    return 0;
}
