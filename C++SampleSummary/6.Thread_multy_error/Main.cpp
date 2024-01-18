#include <iostream>     // - �Է� & ����� ���� ���
#include <thread>       // - ������ ����� ���� ���

using namespace std;    // - ǥ������ Ŭ���� ���

// - ���� ���� ����
int g_sum = 0;

// - �Լ�A ����
void Add()
{
    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < 100000; i++)
    {
        g_sum++;
    }
}
// - �Լ�B ����
void Sub()
{
    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < 100000; i++)
    {
        g_sum--;
    }
}

int main()
{
    // - �Լ��� ������� ����
    thread t1(Add);
    thread t2(Sub);

    // - �����尡 ����� �� ���� ���
    t1.join();
    t2.join();

    // - ����� ���
    cout << g_sum << endl;

    // - ���α׷� ����
    return 0;
}