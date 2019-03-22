#include<iostream>
using namespace std;


class clocktype
{
public:
void setTime(int hours, int minutes, int seconds);
void getTime(int& hours,int& minutes, int& seconds)const;
void printTime()const;
void incrementSeconds();
void incrementMinutes();
void incrementHours();
bool equalTime(const clocktype& otherClock)const;

clocktype(int hours,int minutes, int seconds);
clocktype();


private:
int hr;
int min;
int sec;
};


//Function Definition

clocktype::clocktype(int hours, int minutes, int seconds)
{
    if (!(hours>23))
    {
        hr=hours;
    }
    else
    {
        hr=00;
    }

    if (!(minutes>59))
    {
        min=minutes;
    }
    else
    {
        min=00;
    }
    if (!(seconds>59))
    {
        sec=seconds;
    }
    else
    {
        sec=00;
    }
}


clocktype::clocktype()
{
hr=00;
min=00;
sec=00;
}


void clocktype::setTime(int hours, int minutes, int seconds)
{
    if (!(hours>23))
    {
        hr=hours;
    }
    else
    {
        hr=00;
    }

    if (!(minutes>59))
    {
        min=minutes;
    }
    else
    {
        min=00;
    }
    if (!(seconds>59))
    {
        sec=seconds;
    }
    else
    {
        sec=00;
    }
}

void clocktype::getTime(int& hours,int& minutes, int& seconds) const
{
hours=hr;
minutes=min;
seconds=sec;
}

void clocktype::printTime() const
{
    if(hr<10)
    {
        cout<<"0"<<hr<<":";
    }
    else
    {
        cout<<hr<<":";
    }
    if(min<10)
    {
        cout<<"0"<<min<<":";
    }
    else
    {
        cout<<min<<":";
    }
    if(sec<10)
    {
        cout<<"0"<<sec<<":";
     }
    else
    {
        cout<<sec<<":";
    }
    
}

void clocktype::incrementSeconds()
{
    if(sec==59)
    {
        sec=00;
        if(min<59)
        {
            min=min+1;
        }
        else
        {
            min=00;
            if(hr==23)
            {
                hr=00;
             }
             else
             {
                 hr=hr+1;
             }
        }
    }
    else
    {
        sec=sec+1;
    }
    
}

void clocktype::incrementMinutes()
{
    if(min=59)
    {
        min=00;
        if(hr==23)
        {
            hr=00;
        }
        else
        {
            hr=hr+1;
        }
  
    }  
    else
    {
        min=min+1;
    }

}

void clocktype::incrementHours()
{
    if(hr==23)
    {
        hr=00;
    }
    else
    {
    hr=hr+1;
    }
}

bool clocktype::equalTime(const clocktype& otherClock)const
{
    if(hr==otherClock.hr)
    {
        if(min==otherClock.min)
        {
             if(sec==otherClock.sec)
             {
                 return true;
             }
             else
             {
                 return false;
             }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}


int main()
{
int h,m,s;

const clocktype time;
clocktype time2;
time2.setTime(5,21,54);
time.setTime(2,40,59);
time.getTime(h,m,s);
time.printTime();
time.incrementSeconds();
time.incrementMinutes();
time.incrementHours();
time.equalTime(time2);

}





















