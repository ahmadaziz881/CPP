#include<iostream>
using namespace std;

int askquestion(int qnum , string question , string options[4] , int correct){
    int useranswer;
    cout<< question << endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<  options[i] << endl;
    }
    cout<< "Enter answer:" ;
    cin >> useranswer ;
    if (useranswer == correct)
    {
        cout<<"Correct"<<endl;
        return 1;
    }else{
        cout<<"Wrong! answer is "<< correct <<endl;
        return 0;
    }
}

int main(){

        string question[5]={
            "1. what is capital of pakistan?\n",
            "2. who is founder of pakistan?\n",
            "3. who is the first PM of pakistan?\n",
            "4. formula of water?\n",
            "5. which one is islamic country?\n"
        };
        string options[5][4]{
            {"1) peshawar" , "2) lahore"  ,"3) karachi" , "4) islamabad"},
            {"1) liyaqat"  , "2) quideazam" , "3) sirsyedahmadkhan" , "4) allamaiqbal"},
            {"1) liyaqat" , "2) sirsyedkhan" , "3) mahatmagandii"  ,"4) allamaiqbal"},
            {"1) h2o2",  "2) h2o2"  ,"3) h2o" , "4) h2f"},
            {"1) england" , "2) newzealand",  "3) america" , "4) turkey"},
        };
        int answers[5]={4 , 2 , 1 , 3 , 4};
        int score = 0;
        for (int i = 0; i < 5; i++)
        {
            score += askquestion(i , question[i] , options[i] , answers[i]);
        }
        cout<<"Your total score is : " << score << endl;

return 0;
}