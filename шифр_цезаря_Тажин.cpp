#include <iostream>
#include <string>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int i=0, j=0, a=0;
char alfovit[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
string slovo;
cout << "¬ведите слово и вам выдаст все варианты шифра(€зык јнгл): " <<endl;
cin >> slovo;
for(a=0;a<25;a++)
{
    for(i=0;i<slovo.length();i++)
    {
        for(j=0;j<26;j++)
        {
            if(slovo[i]==alfovit[j])
            {
                if(j<25){slovo[i] = alfovit[j+1]; break;}
                else {slovo[i] = alfovit[0]; break;}
            }
            if(slovo[i]==' ') {slovo[i] = ' '; break;}
        }
    }
    cout << slovo << endl;
}
}
