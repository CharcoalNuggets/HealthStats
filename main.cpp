//Class collaboration for learning how to use vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
        vector <int> bpm;
        vector <int> steps;
        vector <int> calories;
        int heartRate;
        int highest;
        do
        {
                cout<< "Please enter heart rate reading (in beats per minute, or -1 to stop): ";
                cin>> heartRate;
                bpm.push_back(heartRate);
        }while (!(heartRate == -1));
        bpm.pop_back(); // to remove the -1 value for stopping the loop
        /*
           bpm.resize(10);
           bpm.push_back(90);
           bpm.push_back(100);
           bpm.push_back(70);
         */
        int length = bpm.size();
          
        cout<< "BPM is currently size " << length <<endl;
        cout<< "The last item in BPM is " << bpm[length - 1] <<endl;
        cout<< "The items in BPM are..."<<endl;
        cout<< "The highest BPM was " << highest <<endl;
        for (int i=0; i < bpm.size(); i++)
        {
                cout<< bpm[i] <<endl;
        }
        return 0;
}
