#include <iostream>     // - �Է� & ����� ���� ���
#include <thread>       // - ������ ����� ���� ���

using namespace std;    // - ǥ������ Ŭ���� ���

// - �Լ� ����
void NiceToMeetYou(int repeat)
{
    // - �۾� ����( ���� - �ݺ��� )
    for (int i = 0; i < repeat; i++)
    {
        // - ����� ���
        cout << "�ݰ����ϴ�" << endl;
    }
}

int main()
{
    // - ���ڰ� ����
    int repeat = 5;

    // - �Լ��� ������� ����
    thread t1(NiceToMeetYou, repeat);

    // - �����尡 ����� �� ���� ���
    t1.join();

    // - ���α׷� ����
    return 0;
}