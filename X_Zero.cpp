#include <iostream>

using namespace std;

int h[8],status=-69;

int main()
{
    int x,o,cine;

    cout<<"-------------------------------------------------------------------------------------"<<'\n';
    cout<<"X si O vor lua fiecare o runda alternativa pentru a isi pune 'X' sau 'O' pe o pozitie"<<'\n';
    cout<<"Numerele vor fi plasate astfel, dupa cadrane:"<<'\n';
    cout<<"1 2 3"<<'\n'<<"4 5 6"<<'\n'<<"7 8 9"<<'\n';
    cout<<"-------------------------------------------------------------------------------------"<<'\n'<<'\n'<<'\n'<<'\n'<<'\n';


    while(true)
    {
        cout<<"Gridul de X si O este="<<'\n';
        for(int a=0; a<9; a++)
        {
            if (a==3 || a==6)
            {
                cout<<'\n';
            }
            switch (h[a])
            {
            case 0:
                cout<<"'"<<" ";
                break;
            case 1:
                cout<<"X"<<" ";
                break;
            case 2:
                cout<<"O"<<" ";
                break;
            }
        }
        cout<<'\n'<<'\n';



        cout<<"Este randul lui X:"<<'\n';
        cout<<"Pune X in locul:";
        while(true)
        {
            cin>>x;
            if (x>=1 && x<=9)
            {
                break;
            }
            else
            {
                cout<<"valoarea nu este corecta"<<'\n'<<'\n';
                cout<<"Este randul lui X:"<<'\n';
                cout<<"Pune X in locul:";
            }
        }
        cout<<'\n';
        while(h[x-1]!=0)
        {
            cout<<"Raspunsul este invlaid"<<'\n';
            cout<<"Gridul de X si O este="<<'\n';
            for(int a=0; a<9; a++)
            {
                if (a==3 || a==6)
                {
                    cout<<'\n';
                }
                switch (h[a])
                {
                case 0:
                    cout<<"'"<<" ";
                    break;
                case 1:
                    cout<<"X"<<" ";
                    break;
                case 2:
                    cout<<"O"<<" ";
                    break;
                }
            }
            cout<<'\n'<<'\n';

            cout<<"Este randul lui X:"<<'\n';
            cout<<"Pune X in locul:";
            while(true)
            {
                cin>>x;
                if (x>=1 && x<=9)
                {
                    break;
                }
                else
                {
                    cout<<"valoarea nu este corecta"<<'\n'<<'\n';
                    cout<<"Este randul lui X:"<<'\n';
                    cout<<"Pune X in locul:";
                }
            }
            cout<<'\n';
        }
        h[x-1]=1;



        if (h[0]==h[1] && h[1]==h[2])
        {
            switch (h[0])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[3]==h[4] && h[4]==h[5])
        {
            switch (h[3])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[6]==h[7] && h[7]==h[8])
        {
            switch (h[6])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }

        if (h[1]==h[4] && h[4]==h[7])
        {
            switch (h[1])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[0]==h[3] && h[3]==h[6])
        {
            switch (h[0])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[2]==h[5] && h[5]==h[8])
        {
            switch (h[2])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }

        if (h[0]==h[4] && h[4]==h[8])
        {
            switch (h[0])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[2]==h[4] && h[4]==h[6])
        {
            switch (h[2])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }

        for (int d=0; d<9; d++)
        {
            if (h[d]==0)
            {
                break;
            }
            if (h[d]!=0 && d==8)
            {
                cout<<'\n'<<'\n';
                cout<<"Remiza Moment"<<'\n';
                status=0;
                break;
            }
        }
        if (status==0){
            break;
        }



        cout<<"Gridul de X si O este="<<'\n';
        for(int a=0; a<9; a++)
        {
            if (a==3 || a==6)
            {
                cout<<'\n';
            }
            switch (h[a])
            {
            case 0:
                cout<<"'"<<" ";
                break;
            case 1:
                cout<<"X"<<" ";
                break;
            case 2:
                cout<<"O"<<" ";
                break;
            }
        }
        cout<<'\n'<<'\n';



        cout<<"Este randul lui O:"<<'\n';
        cout<<"Pune O in locul:";
        while(true)
        {
            cin>>o;
            if (o>=1 && o<=9)
            {
                break;
            }
            else
            {
                cout<<"valoarea nu este corecta"<<'\n'<<'\n';
                cout<<"Este randul lui O:"<<'\n';
                cout<<"Pune O in locul:";
            }
        }
        cout<<'\n';
        while(h[o-1]!=0)
        {
            cout<<"Raspunsul este invlaid"<<'\n';
            cout<<"Gridul de X si O este="<<'\n';
            for(int a=0; a<9; a++)
            {
                if (a==3 || a==6)
                {
                    cout<<'\n';
                }
                switch (h[a])
                {
                case 0:
                    cout<<"'"<<" ";
                    break;
                case 1:
                    cout<<"X"<<" ";
                    break;
                case 2:
                    cout<<"O"<<" ";
                    break;
                }
            }
            cout<<'\n'<<'\n';

            cout<<"Este randul lui O:"<<'\n';
            cout<<"Pune O in locul:";
            while(true)
            {
                cin>>o;
                if (o>=1 && o<=9)
                {
                    break;
                }
                else
                {
                    cout<<"valoarea nu este corecta"<<'\n'<<'\n';
                    cout<<"Este randul lui O:"<<'\n';
                    cout<<"Pune O in locul:";
                }
            }
            cout<<'\n';
        }
        h[o-1]=2;



        if (h[0]==h[1] && h[1]==h[2])
        {
            switch (h[0])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[3]==h[4] && h[4]==h[5])
        {
            switch (h[3])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[6]==h[7] && h[7]==h[8])
        {
            switch (h[6])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }

        if (h[1]==h[4] && h[4]==h[7])
        {
            switch (h[1])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[0]==h[3] && h[3]==h[6])
        {
            switch (h[0])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[2]==h[5] && h[5]==h[8])
        {
            switch (h[2])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }

        if (h[0]==h[4] && h[4]==h[8])
        {
            switch (h[0])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }
        if (h[2]==h[4] && h[4]==h[6])
        {
            switch (h[2])
            {
            case 1:
                cout<<'\n'<<'\n';
                cout<<"X a castigat";
                status=0;
                break;
            case 2:
                cout<<'\n'<<'\n';
                cout<<"O a castigat";
                status=0;
                break;
            }
        }

        for (int d=0; d<9; d++)
        {
            if (h[d]==0)
            {
                break;
            }
            if (h[d]!=0 && d==8)
            {
                cout<<'\n'<<'\n';
                cout<<"Remiza Moment"<<'\n';
                status=0;
                break;
            }
        }
        if (status==0){
            break;
        }
    }
    cin>>cine;
    return 0;
}
