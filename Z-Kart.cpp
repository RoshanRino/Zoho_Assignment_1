#include "functionality.h"

int main()
{
    int input;
    loadData();
    while(1)
    {
        writeData();
        int tem;
        input=userInput();
        switch (input)
        {
        case 1:
            tem=Customer::login();
            if(tem)
            {
                displayOptions(tem);
            }
            break;
        case 2:
            Customer::signUp();
            break;
        case 3:
            if(Admin::login());
            {
                Admin::adminFunction();
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
