#include <iostream>     // - �Է� & ����� ���� ���
#include <thread>       // - ������ ����� ���� ���

using namespace std;    // - ǥ������ Ŭ���� ���

// - �Լ�A ����
void NiceToMeetYou()
{
    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < 100; i++)
    {
        cout << "�ݰ����ϴ�" << endl;
    }
}
// - �Լ�B ����
void Hello()
{
    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < 100; i++)
    {
        cout << "�ȳ��ϼ���" << endl;
    }
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