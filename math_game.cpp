#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

void normal();
void medium();
void complex();
void add(int);
void sub(int);
void mult(int);
void div(int);


// math function 
void math(){
    p:
    system("cls");
    int choice;

    cout<<"\n\t<< Math Game >>\n";
    cout<<"\n1. Normal";
    cout<<"\n2. Medium";
    cout<<"\n3. Complex";
    cout<<"\n4. Exit";
    cout<<"\n\nEnter Your Choice : ";
    cin>>choice;

    switch(choice){
        case 1:
            normal();
            break;
        case 2:
            medium();
            break;
        case 3:
            complex();
            break;
        case 4:
            exit(0);
        default:
            cout<<"\n\tInvalid Opation";    
    }
    getch();
    goto p;
}

// normal mode
void normal(){
    p:
    system("cls");
    int choice;

    cout<<"\n\tNormal Mode";
    cout<<"\n1. Addition";
    cout<<"\n2. Subtraction";
    cout<<"\n3. Multiplication";
    cout<<"\n4. Division";
    cout<<"\n5. Go Back";
    cout<<"\n\nEnter Your Choice : ";
    cin>>choice;

    switch(choice){
        case 1:
            add(1);
            break;
        case 2:
            sub(1);
            break;
        case 3:
            mult(1);
            break;
        case 4:
            div(1);
            break;
        case 5:
            math();
            break;
        default:
            cout<<"\n Invalid Opation";    
    }
    getch();
    goto p;
}

// Medium mode 
void medium(){
    p:
    system("cls");
    int choice;

    cout<<"\n\tMedium Mode";
    cout<<"\n1. Addition";
    cout<<"\n2. Subtraction";
    cout<<"\n3. Multiplication";
    cout<<"\n4. Division";
    cout<<"\n5. Go Back";
    cout<<"\n\nEnter Your Choice : ";
    cin>>choice;

    switch(choice){
        case 1:
            add(2);
            break;
        case 2:
            sub(2);
            break;
        case 3:
            mult(2);
            break;
        case 4:
            div(2);
            break;
        case 5:
            math();
        default:
            cout<<"\n Invalid Opation";    
    }
    getch();
    goto p;
}

// Complex mode 
void complex(){
    p:
    system("cls");
    int choice;

    cout<<"\n\tComplex Mode";
    cout<<"\n1. Addition";
    cout<<"\n2. Subtraction";
    cout<<"\n3. Multiplication";
    cout<<"\n4. Division";
    cout<<"\n5. Go Back";
    cout<<"\n\nEnter Your Choice : ";
    cin>>choice;

    switch(choice){
        case 1:
            add(3);
            break;
        case 2:
            sub(3);
            break;
        case 3:
            mult(3);
            break;
        case 4:
            div(3);
            break;
        case 5:
            math();
        default:
            cout<<"\n Invalid Opation";    
    }
    getch();
    goto p;
}

// functions 
void add(int n){
    system("cls");
    int a,b,sum=0,ans, c=0;
    if(n==1){
        for(int i=1; i<=5;i++){
            a = rand()%11;
            b = rand()%11;
            cout<<"\n"<<a<<" + "<<b<<" = ";
            cin>>ans;
            sum = a+b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else if(n==2){
        for(int i=1; i<=5;i++){
            a = rand()%21;
            b = rand()%21;
            cout<<"\n"<<a<<" + "<<b<<" = ";
            cin>>ans;
            sum = a+b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else{
        for(int i=1; i<=5;i++){
            a = rand()%51;
            b = rand()%51;
            cout<<"\n"<<a<<" + "<<b<<" = ";
            cin>>ans;
            sum = a+b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
}

void sub(int n){
    system("cls");
    int a,b,sum=0,ans, c=0;
    if(n==1){
        for(int i=1; i<=5;i++){
            a = rand()%11;
            b = rand()%11;
            cout<<"\n"<<a<<" - "<<b<<" = ";
            cin>>ans;
            sum = a-b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else if(n==2){
        for(int i=1; i<=5;i++){
            a = rand()%21;
            b = rand()%21;
            cout<<"\n"<<a<<" - "<<b<<" = ";
            cin>>ans;
            sum = a-b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else{
        for(int i=1; i<=5;i++){
            a = rand()%51;
            b = rand()%51;
            cout<<"\n"<<a<<" - "<<b<<" = ";
            cin>>ans;
            sum = a-b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }

}

void mult(int n){
    system("cls");
    int a,b,sum=0,ans, c=0;
    if(n==1){
        for(int i=1; i<=5;i++){
            a = rand()%6;
            b = rand()%6;
            cout<<"\n"<<a<<" x "<<b<<" = ";
            cin>>ans;
            sum = a*b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else if(n==2){
        for(int i=1; i<=5;i++){
            a = rand()%11;
            b = rand()%11;
            cout<<"\n"<<a<<" x "<<b<<" = ";
            cin>>ans;
            sum = a*b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else{
        for(int i=1; i<=5;i++){
            a = rand()%21;
            b = rand()%21;
            cout<<"\n"<<a<<" x "<<b<<" = ";
            cin>>ans;
            sum = a*b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
}

void div(int n){
    system("cls");
    int a,b,sum=0,ans, c=0;
    if(n==1){
        for(int i=1; i<=5;i++){
            a = rand()%6;
            b = rand()%6;
            cout<<"\n"<<a<<" / "<<b<<" = ";
            cin>>ans;
            sum = a/b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else if(n==2){
        for(int i=1; i<=5;i++){
            a = rand()%11;
            b = rand()%11;
            cout<<"\n"<<a<<" / "<<b<<" = ";
            cin>>ans;
            sum = a/b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
    else{
        for(int i=1; i<=5;i++){
            a = rand()%16;
            b = rand()%16;
            cout<<"\n"<<a<<" / "<<b<<" = ";
            cin>>ans;
            sum = a/b;
            if(ans==sum){
                c++;
            }
        }
        if(c>=3){
            cout<<"\nYou are Winner...";
        }
        else{
            cout<<"\nSorry! you are FAIL";
        }
    }
}


// main function 
int main(){
    math();
    return 0;
}