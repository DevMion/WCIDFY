#include <iostream>     // - �Է� & ����� ���� ���
#include <thread>       // - ������ ����� ���� ���

using namespace std;    // - ǥ������ Ŭ���� ���

// - �Լ� ����
void NiceToMeetYou()
{
    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < 10; ++i)
    {
        // - ����� ���
        cout << "�ݰ����ϴ�" << endl;
    }
}

int main()
{
    // - �Լ��� ������� ����
    thread t1(NiceToMeetYou);

    // - ���� ���α׷��� ����� �����嵵 ����
    t1.detach();

    // - ���� �۾� ����
    for (int i = 0; i < 10; i++)
    {
        cout << "�ȳ��ϼ���" << endl;
    }

    // - ���α׷� ����
    cout << "���� �۾� ����" << endl;
    return 0;
}