#include <iostream>
using namespace std;
int main()
{
    int amount = 0, maxweight = 0, count = 0;
    int WEIGHTS[1209] = {0}, BOXES[1209] = {0};
    cin>> amount>> maxweight;
    for(int i = 0; i < amount; i++)
        cin>> WEIGHTS[i];
    for(int i = 0; i < amount; i++) //counter for taking each boxes to fill
    {
        for(int j = 0; j < amount; j++)//counter for testing each items
        {
            if(BOXES[i] + WEIGHTS[j] <= maxweight)
                {   
                    BOXES[i] += WEIGHTS[j];
                    WEIGHTS[j] = 0;
                }
        }
    }
    for(int i = 0; i < amount; i++)
    {
        if(BOXES[i] != 0)
        count += 1;
    }
    cout<< count;
    return 0;
}
