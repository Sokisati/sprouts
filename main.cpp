#include <iostream>
#include <vector>

using namespace std;

class Sprout{

public:

    
    int sproutTag;
    int numberOfLinesAttached;

    vector<Sprout> directNei;

public:

    Sprout(int sproutTagP, int numberOfLinesAttachedP)
    {
        sproutTag = sproutTagP;
        numberOfLinesAttached = numberOfLinesAttachedP;
    }


};


class Network{
public:

    vector<Sprout> sproutsInThisNetwork;

};

class Area{
public:

    vector<Sprout> encircledSprouts;
    vector<Sprout> sproutsFormingThisArea;

};



int main()
{

    int numberOfStartingSprouts;
    int sumOfLinesAttached = 0;
    vector<Sprout> SproutVector;


    cout<<"How many sprouts to begin?"<<endl;
    cin>>numberOfStartingSprouts;

    for(int i=1; i<=numberOfStartingSprouts; i++)
    {
        Sprout tempSprout(i,0);
        SproutVector.push_back(tempSprout);
    }

    while(true)
    {
        for(int i=1; i<=numberOfStartingSprouts; i++)
        {
            sumOfLinesAttached = sumOfLinesAttached + SproutVector[i.numberOfLinesAttached];
        }




    }


    return 0;
}
