#include <iostream>
#include <math.h>
#define C 20
#define R 20
using namespace std;
class Matrix
{
    public :
        int i,j;
    void read(int a[R][C],int r,int c)
    {
        cout<<"Enter the elements: "<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                cin>>a[i][j];
        }
    }
    void display(int a[R][C],int r,int c)
    {
        cout<<"Your matrix is: "<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                cout<<a[i][j]<<" ";
           cout<<endl;
        }
    }
};
class Minmax :public Matrix
{
    public:
    minmaxi(int a[R][C],int r,int c)
    {
       int max,min;
       max=a[0][0];
       min=a[0][0];
       for(int i=0;i<r;i++)
       {
          for(int j=0;j<c;j++)
             if(min>a[i][j])
              min=a[i][j];
       }
        for(int i=0;i<r;i++)
       {
          for(int j=0;j<c;j++){
             if(max<a[i][j])
              max=a[i][j];
          }
       }
      cout<<"Maximum: "<<max<<endl;
      cout<<"Minimum: "<<min;
    }
};
// 2 PROGRAM
class Transpose :public Matrix
{
    public :
    int t[R][C];
    void transmat(int a[R][C],int r,int c)
    {
        for(i=0; i<r; i++)
            for(j=0; j<c; j++)
                t[j][i]=a[i][j];
    }
    void display(int a[R][C],int r,int c)
    {
        cout<<"Your matrix is"<<endl;
        for(i=0; i<r; i++){
            for(j=0; j<c; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        // Transposed matrix displaying
        cout<<"Transpose matrix is:"<<endl;
        for(i=0; i<c; i++)
        {
            for(j=0; j<r; j++)
                cout<<t[i][j]<<" ";
            cout<<endl;
        }
    }
};
class Multiply :public Matrix
{
     public:
         // reading two matrix
      void readmt(int a[R][C],int b[R][C],int r1,int c1,int r2,int c2)
      {
          cout<<"Enter the first matrix"<<endl;
          for( i=0;i<r1;i++)
          {
             for(j=0;j<c1;j++)
              cin>>a[i][j];

           }
          cout<<"Enter the second matrix"<<endl;
          for( i=0;i<r2;i++)
          {
             for(j=0;j<c2;j++)
             cin>>b[i][j];
          }

    }
    //display of two matrix
    void display(int a[R][C],int b[R][C],int r1,int c1,int r2,int c2)
    {
        cout<<"Your first matrix is :"<<endl;
         for( i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;

        }
        cout<<"Your second matrix is :"<<endl;
        for( i=0;i<r2;i++)
         {
            for(j=0;j<c2;j++)
            cout<<b[i][j]<<" ";
         cout<<endl;
        }
    }
      void multi(int a[R][C],int b[R][C],int r1,int c1,int r2,int c2)
      {
          int m[r1][c2];
          cout<<"Your multiplied matrix is :"<<endl;
          for(i=0;i<r1;i++)
          {
            for(j=0;j<c2;j++){
                m[i][j]=0;
            for( int k=0;k<c1;k++)
               m[i][j] +=a[i][k]*b[k][j];
            cout<<m[i][j]<<" ";
          }
         cout<<endl;
       }
    }
};
class AddMat :public Matrix
{
    public:
        void readm(int a[R][C],int b[R][C],int r,int c)// LEFTTTTTT
        {
             cout<<"Enter the first matrix"<<endl;
          for( i=0;i<r;i++)
          {
             for(j=0;j<c;j++)
              cin>>a[i][j];

           }
          cout<<"Enter the second matrix"<<endl;
          for( i=0;i<r;i++)
          {
             for(j=0;j<c;j++)
             cin>>b[i][j];
          }
        }
        void display(int a[R][C],int b[R][C],int r,int c)
        {
            cout<<"Your first matrix is :"<<endl;
             for( i=0;i<r;i++)
             {
               for(j=0;j<c;j++)
               cout<<a[i][j]<<" ";
             cout<<endl;

              }
            cout<<"Your second matrix is :"<<endl;
            for( i=0;i<r;i++)
             {
                for(j=0;j<c;j++)
                cout<<b[i][j]<<" ";
             cout<<endl;
            }

        }
         void add(int a[R][C],int b[R][C],int r,int c)
       {
           int s[r][c];
           cout<<"Your addition of two matrices is :"<<endl;
           for(i=0;i<r;i++)
           {
             for(j=0;j<c;j++){
              s[i][j]=a[i][j]+b[i][j];
              cout<<s[i][j]<<" ";
           }
        cout<<endl;
       }
      }
};
class Copymat :public Matrix
{
    public:
    void copying(int a[R][C],int r,int c)
    {
        int b[R][C];
        cout<<"Your copied array is: "<<endl;
        for(int i=0;i<r;i++)
        {
            for (int j=0;j<c;j++){
                b[i][j]=a[i][j];
                cout<<b[i][j]<<" ";
            }
           cout<<endl;
        }
    }

};
class Singular :public Matrix
{
    public:
    void sing(int a[R][C])
    {
        int s=0;
        s=a[0][0]*a[1][1]-a[1][0]*a[0][1];
        if(s==0)
          cout<<"Singular Matrix"<<endl;
        else
          cout<<"Non-Singular Matrix"<<endl;
    }
};
class Uptri :public Matrix
{
    public:
    void upper(int a[R][C],int r,int c)
    {
        int s=0;
         for(int i=0;i<r;i++){
           for(int j=0;j<c;j++)
             if(i<=j)
              s=s+a[i][j];
        }
        cout<<"Sum of upper triangular matrix is: "<<s<<endl;
    }
};
class Lowtri :public Matrix
{
    public :
    void lower(int a[R][C],int r,int c)
    {
        int s=0;
        for(int i=0;i<r;i++){
           for(int j=0;j<c;j++)
             if(i>=j)
              s=s+a[i][j];
        }
        cout<<"Sum of lower triangular matrix is: "<<s<<endl;
    }
};
class Row :public Matrix
{
    public:
    void rowle(int a[R][C],int r,int c)
    {
        int sr=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                sr=sr+a[i][j];
                cout<<"Sum of elements of row "<<(i+1)<<" is :"<<sr;
                sr=0;
                cout<<endl;
        }
    }
};
class Column :public Matrix
{
    public :
    void cole(int a[R][C],int r,int c)
    {
        int sc=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                sc=sc+a[j][i];
                cout<<"Sum of elements of column "<<(i+1)<<" is :"<<sc;
                sc=0;
                cout<<endl;
        }
    }
};
int main()
{
    Minmax m1;
    Transpose t1;
    Multiply m;
    AddMat am;
    Copymat cm;
    Singular sg;
    Uptri ut;
    Lowtri lt;
    Row re;
    Column ce;
    int ch;
    do{
      cout<<"\nEnter 1 for Maximum and Minimum in a matrix :\nEnter 2 for Transpose of a matrix :\nEnter 3 for Multiplication of Two matrix :";
      cout<<"\nEnter 4 for Addition of two matrix :\nEnter 5 for copying one to another:\nEnter 6 to check singular matrix ";
      cout<<"\nEnter 7 for sum of upper diagonal matrix: \nEnter 8 for sum of lower triangular matrix:";
      cout<<"\nEnter 9 for sum of elements of each row: \nEnter 10 for sum of elements of each column: \nEnter 0 for exit"<<endl;
      cin>>ch;
      switch (ch){
               case 1:{
                        int r,c;
                        cout<<"Enter the rows and columns"<<endl;
                        cin>>r>>c;
                        int a[R][C];
                        m1.read(a,r,c);
                        m1.display(a,r,c);
                        m1.minmaxi(a,r,c);
                        break;
               }
               case 2:{
                        int i,j,r,c;
                        cout<<"Enter the rows and columns :"<<endl;
                        cin>>r>>c;
                        int a[R][C];
                        t1.read(a,r,c);
                        t1.transmat(a,r,c);
                        t1.display(a,r,c);
                        break;
               }
               case 3:{
                      int r1,c1,r2,c2;
                      cout<<"Enter the rows and columns of first matrix : "<<endl;
                      cin>>r1>>c1;
                      cout<<"Enter the rows and columns of second matrix : "<<endl;
                      cin>>r2>>c2;
                      int a[R][C];
                      int b[R][C];
                      if(r2==c1)
                      {
                        m.readmt(a,b,r1,c1,r2,c2);
                        m.display(a,b,r1,c1,r2,c2);
                        m.multi( a,b,r1,c1,r2,c2);
                      }
                      else
                        cout<<"Multiplication is not possible"<<endl;
                     break;
               }
               case 4:
                   {
                       int r,c;
                       cout<<"Enter the rows and columns"<<endl;
                       cin>>r>>c;
                       int a[R][C];
                       int b[R][C];
                       if(r==c)
                       {
                         am.readm(a,b,r,c);
                         am.display(a,b,r,c);
                         am.add(a,b,r,c);
                       }
                       else
                        cout<<"Addition is not possible"<<endl;
                      break;
                    }
               case 5:{
                       int r,c;
                       cout<<"Enter the rows and columns"<<endl;
                       cin>>r>>c;
                       int a[R][C];
                       cm.read(a,r,c);
                       cm.copying(a,r,c);
                       break;
                  }
               case 6:{
                       int r,c;
                       cout<<"Enter the rows and columns"<<endl;
                       cin>>r>>c;
                       int a[R][C];
                       if(r==2 && c==2)
                       {
                         sg.read(a,r,c);
                         sg.display(a,r,c);
                         sg.sing(a);
                       }
                       else
                        cout<<"Invalid Matrix"<<endl;
                        break;
                 }
               case 7:{
                       int r,c;
                       cout<<"Enter the rows and columns"<<endl;
                       cin>>r>>c;
                       int a[R][C];
                       ut.read(a,r,c);
                       ut.display(a,r,c);
                       ut.upper(a,r,c);
                       break;
               }
               case 8:{
                       int r,c;
                       cout<<"Enter the rows and columns"<<endl;
                       cin>>r>>c;
                       int a[R][C];
                       lt.read(a,r,c);
                       lt.display(a,r,c);
                       lt.lower(a,r,c);
                       break;
               }
               case 9:{
                       int r,c;
                       cout<<"Enter the rows and columns"<<endl;
                       cin>>r>>c;
                       int a[R][C];
                       re.read(a,r,c);
                       re.display(a,r,c);
                       re.rowle(a,r,c);
                       break;
               }
               case 10:{
                        int r,c;
                       cout<<"Enter the rows and columns"<<endl;
                       cin>>r>>c;
                       int a[R][C];
                       ce.read(a,r,c);
                       ce.display(a,r,c);
                       ce.cole(a,r,c);
                       break;
               }
               case 0: exit(0);
                       break;
           }
    }while(1);
}
