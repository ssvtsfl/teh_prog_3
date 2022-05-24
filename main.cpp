#include <locale>
#include "list.h"
#include "queue.h"
#include "stack.h"
#include <iostream>
#include <fstream> // подключаем библиотеку
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    ifstream file; // создаем объект класса ifstream
    ofstream out;
    file.open("/Users/sofiakondrateva/Downloads/teh_prog_3/teh_prog_3/in.txt", std::ifstream::in); // открываем файл
    out.open("/Users/sofiakondrateva/Downloads/teh_prog_3/teh_prog_3/out.txt", std::ofstream::out);
    if (!file.is_open())
    {
        cout << "Файл не открыт\n\n";
        return 1;
    }
    List items;
    int item;
    for (file >> item; !file.eof(); file >> item)
        items.push_back(item);
    std::cout << "FILE: ";
    items.print();
    setlocale(LC_ALL, "Rus");
    int flag = 0, c;
    int ch;
    int fl = 0;
    
    Queue queue;
    Stack stack;
    while (flag != 1)
    {
        fl = 0;
        cout << "С чем будем работать?" << endl;
        cout << "1 - Очередь" << endl;
        cout << "2 - Стек" << endl;
        cout << "0 - Выход" << endl;
        cout << "-> ";
        cin >> c;
        switch (c)
        {
            case 1:
                while (fl != 1)
                {
                    cout << "Действия: " << endl;
                    cout << "1 - Заполнить с файла" << endl;
                    cout << "2 - Заполнить вручную" << endl;
                    cout << "3 - Извлечь значение" << endl;
                    cout << "4 - Просмотр" << endl;
                    cout << "5 - Сохранить" << endl;
                    cout << "0 - Выход" << endl;
                    cout << "-> ";
                    cin >> ch;
                    switch (ch)
                    {
                        case 1:
                            for (int i = 0; i < items.size(); i++)
                            {
                                queue.push_front(items[i]);
                            }
                            break;
                        case 2:
                            int item;
                            cout << "Введите значение: ";
                            cin >> item;
                            queue.push_front(item);
                            break;
                        case 3:
                            queue.get();
                            break;
                        case 4:
                            queue.print();
                            break;
                        case 5:
                            if (out.is_open())
                            {
                                queue.print(out);
                            } else {
                                cout << "Не удалось открыть файл" << endl;
                            }
                            break;
                        case 0:
                            fl = 1;
                            break;
                        default:
                            break;
                    }
                }
                break;
            case 2:
                while (fl != 1)
                {
                    cout << "Действия: " << endl;
                    cout << "1 - Заполнить с файла" << endl;
                    cout << "2 - Заполнить вручную" << endl;
                    cout << "3 - Извлечь значение" << endl;
                    cout << "4 - Просмотр" << endl;
                    cout << "5 - Сохранить" << endl;
                    cout << "0 - Выход" << endl;
                    cout << "-> ";
                    cin >> ch;
                    switch (ch)
                    {
                        case 1:
                            for (int i = 0; i < items.size(); i++)
                            {
                                stack.push_front(items[i]);
                            }
                            break;
                        case 2:
                            int item;
                            cout << "Введите значение: ";
                            cin >> item;
                            stack.push_front(item);
                            break;
                        case 3:
                            stack.get();
                            break;
                        case 4:
                            stack.print();
                            break;
                        case 5:
                            if (out.is_open())
                            {
                                stack.print(out);
                            } else {
                                cout << "Не удалось открыть файл" << endl;
                            }
                            break;
                        case 0:
                            fl = 1;
                            break;
                        default:
                        break;
                    }
                }
                break;
            case 0:
                flag = 1;
                break;
            default:
            break;
        }
    }
    return 0;
}
