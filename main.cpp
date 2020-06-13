#include <string>
#include <stdlib.h>
#include <iostream>
#include <list>
#include <iterator>

using namespace std;

struct Zapis
{
    string name;
    string surname;
    int id;
    string num;
    string data;
};

int main()
{
    system("chcp 65001");
    list <Zapis> mylist;
    list<Zapis>::iterator i;
    Zapis zap;
    int state = 1;
    while(state!=0)
    {
        cout<<"(1) Добавить заметку"<<endl;
        cout<<"(2) Показать заметки"<<endl;
        cout<<"(3) Поиск заметки"<<endl;
        cout<<"(4) Удалить заметку"<<endl;
        cout<<"(5) Выход"<<endl;
        cin>>state;
        if (state==1)
        {
            cout<<"Ввелите ID"<<endl;
            cin>>zap.id;
            cout<<"Введите Имя"<<endl;
            cin>>zap.name;
            cout<<"Введите Фамилию"<<endl;
            cin>>zap.surname;
            cout<<"Введите Номер Телефона (x-xxx-xxx-xx-xx)"<<endl;
            cin>>zap.num;
            cout<<"Введите Дату Рождения (xxxx-xx-xx)"<<endl;
            cin>>zap.data;
            mylist.push_back(zap);
        }
        else if (state==2)
        {
            for( i = mylist.begin(); i != mylist.end(); ++i)
            {
                cout<<"ID:" <<i -> id <<"Имя и Фамилия: " <<i -> name << " " << i -> surname<<" Номер Телефона: "<<i ->num<<" Дата рождения: "<<i ->data<< " ";
                cout<< endl;}}
        else if (state==3)
        {
            cout<<"(1) Поиск по Фамилии"<<endl;
            cout<<"(2) Поиск по Имени"<<endl;
            cout<<"(3) Поиск по Номеру Телефона"<<endl;
            cout<<"(4) Поиск по Дате Рождения"<<endl;
            cout<<"(5) Поиск по ID"<<endl;
            cout<<"(6) Назад"<<endl;
            int a;
            cin>>a;
            if(a==1)
            {
                string fam;
                cout<<"Введите Фамилию"<<endl;
                cin>>fam;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (fam==i->surname)
                    {
                        cout<<"Найдены следующие заметки:" <<endl;
                        cout<<"ID:" <<i -> id <<"Имя и Фамилия: " <<i -> name << " " << i -> surname<<" Номер Телефона: "<<i ->num<<" Дата рождения: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"Ничего не найдено!"<<endl;}
                }
            }
            else if(a==2)
            {
                string im;
                cout<<"Введите Имя"<<endl;
                cin>>im;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (im==i->name)
                    {
                        cout<<"Найдены следующие заметки:" <<endl;
                        cout<<"ID:" <<i -> id <<"Имя и Фамилия: " <<i -> name << " " << i -> surname<<" Номер Телефона: "<<i ->num<<" Дата рождения: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"Ничего не найдено!"<<endl;}}}
            else if(a==3)
            {
                string no;
                cout<<"Введите Номер Телефона"<<endl;
                cin>>no;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (no==i->num)
                    {
                        cout<<"Найдены следующие заметки:" <<endl;
                        cout<<"ID:" <<i -> id <<"Имя и Фамилия: " <<i -> name << " " << i -> surname<<" Номер Телефона: "<<i ->num<<" Дата рождения: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"Ничего не найдено!"<<endl;}
                }
            }
            else if(a==4)
            {
                string da;
                cout<<"Введите Дату Рождения"<<endl;
                cin>>da;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (da==i->data)
                    {
                        cout<<"Найдены следующие заметки:" <<endl;
                        cout<<"ID:" <<i -> id <<"Имя и Фамилия: " <<i -> name << " " << i -> surname<<" Номер Телефона: "<<i ->num<<" Дата рождения: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"Ничего не найдено!"<<endl;}
                }
            }
            else if(a==5)
            {
                int iid;
                cout<<"Введите ID"<<endl;
                cin>>iid;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (iid==i->id)
                    {
                        cout<<"Найдены следующие заметки:" <<endl;
                        cout<<"ID:" <<i -> id <<"Имя и Фамилия: " <<i -> name << " " << i -> surname<<" Номер Телефона: "<<i ->num<<" Дата рождения: "<<i ->data<< " ";
                        cout<< endl;}
                    else {cout<<"Ничего не найдено!"<<endl;}
                }}}
        else if(state==4)
        {
            cout<<"Введите ID заметки, которую надо удалить"<<endl;
            int iid;
            cin>>iid;
            for( i = mylist.begin(); i != mylist.end(); ++i)
            {
                if(iid==i->id)
                {
                    mylist.erase(i);
                    i = mylist.begin();
                    cout<<"Удаление успешно завершено!"<<endl;
                }}}
        else if(state==5)
        {
            state=0;
        }
        else {cout<<"Введено неверное значение!"<<endl;}
    }
    return(0);
}