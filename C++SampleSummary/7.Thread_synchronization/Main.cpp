#include <iostream>     // - �Է� & ����� ���� ���
#include <thread>       // - ������ ����� ���� ���
#include <mutex>        // - ����ȭ��� �� �ϳ��� ���ؽ��� ����ϱ� ���� ���

using namespace std;    // - ǥ������ Ŭ���� ���

// - ���ؽ� ����
mutex g_Mutex;

// - �Լ�A ����
void NiceToMeetYou()
{
    // - �ش� �����带 ���ؽ��� ���ó����
    g_Mutex.lock();

    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < 100; i++)
    {
        cout << "�ݰ����ϴ�" << endl;
    }

    // - ��� ����
    g_Mutex.unlock();
}
// - �Լ�B ����
void Hello()
{
    // - �ش� �����带 ���ؽ��� ���ó����
    g_Mutex.lock();

    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < 100; i++)
    {
        cout << "�ȳ��ϼ���" << endl;
    }

    // - ��� ����
    g_Mutex.unlock();
}

int main()
{
    // - �Լ��� ������� ����
    thread t1(NiceToMeetYou);
    thread t2(Hello);

    // - �����尡 ����� �� ���� ���
    t1.join();
    t2.join();

    // - ���α׷� ����
    return 0;
}