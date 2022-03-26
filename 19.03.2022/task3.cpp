/*
 * 3. Версионный стек.
 * Поддерживаются операции Push, Pop, Rollback.
 * Состояния стека после выполнения этих операций нумеруются.
 * С помощью Rollback можно откатиться на любое состояние, указав его номер.
 * Rollback тоже можно откатить.
 * Помимо этого, существует операция Forget, позволяющая забыть всю историю изменений.
 * После Forget нумерация операций начинается с начала, Forget нельзя откатить.
 * Указать сложность каждого метода.
 */
#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Stack
{
private:
    list<int> stack;
    vector<string> changes;
    list<int> staticStack;

public:
    void Pop()
    {
        string t = "po " + to_string(stack.back());
        stack.pop_back();
        changes.push_back(t);
    }

    void Push(int elem)
    {
        string t = "pu " + to_string(elem);
        stack.push_back(elem);
        changes.push_back(t);
    }

    void Rollback(int num)
    {
        string t = "rb " + to_string(num);
        changes.push_back(t);

        stack.clear();
        for(auto elem : staticStack)
            stack.push_back(elem);

        for(int i = 0; i <= num; i++)
        {
            string command = changes[i].substr(0,2);
            int t = stoi(changes[i].substr(3, changes[i].length()));

            if(command == "po")
            {
                Pop();
                changes.pop_back();
            }
            else if (command == "pu")
            {
                Push(t);
                changes.pop_back();
            }
            else
            {
                Rollback(t);
                changes.pop_back();
            }

        }
    }
    void Forget()
    {
        changes.clear();
        staticStack.clear();
        for(auto elem : stack)
            staticStack.push_back(elem);
    }

};

int main()
{
    Stack stack;
    for(int i = 0; i < 10; i++)
    {
        stack.Push(i);
        cout << i << ' ';
    }
    cout << endl;

    stack.Pop();

    stack.Pop();

    stack.Push(15);

    stack.Rollback(11);
    stack.Push(33);
    stack.Forget();

}