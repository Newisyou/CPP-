#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* pNext;

    Node(int data):
            data(data),
            pNext(nullptr)
    {}

};

class LinkedList
{
public:
    LinkedList(){}

    bool isEmpty()
    {
        return pCurrent == nullptr;
    }

    void Add(int elem)
    {
        if (isEmpty())
        {
            pCurrent = new Node(elem);
            pTail = pCurrent;
            pTail->pNext = pCurrent;
            return;
        }
        Node* pTemp = new Node(elem);
        pTail->pNext = pTemp;
        pTail = pTemp;
        pTail->pNext = pCurrent;
    }

    void Move()
    {
        Node* pMax = MaxElem(pCurrent->pNext->pNext->pNext->pNext);
        Node* firstNode = pCurrent->pNext;
        pCurrent->pNext = pMax;
        pCurrent=pMax->pNext;
        pMax->pNext=firstNode;
        firstNode->pNext->pNext->pNext = pCurrent;
    }

    void Print()
    {
        if(isEmpty())
            return;
        Node* pTemp = pCurrent;
        do {
            cout << pTemp->data << ' ';
            pTemp = pTemp->pNext;
        } while (pTemp != pCurrent);
        cout << endl;
    }

private:
    Node* MaxElem(Node* node)
    {
        int currentData = pCurrent->data;
        int resultData = -1;
        Node* pResult;
        int maxData = -1;
        Node* pMax;
        while(node != pCurrent)
        {
            if(node->data < currentData and node->data > resultData)
            {
                pResult = node;
                resultData = node->data;
            }
            else if (node->data > maxData)
            {
                pMax = node;
                maxData = node->data;
            }
            node = node->pNext;
        }
        if(resultData != -1)
            return pResult;
        else
            return pMax;
    }
    Node* pCurrent;
    Node* pTail;
};

int main()
{
    int n, m;
    cin >> n >> m;

    LinkedList list = LinkedList();
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        list.Add(t);
    }

    for(int i = 0; i < m; i++)
        list.Move();

    list.Print();

    return 0;
};