#include<iostream>

// �㭪�� �뢮�� ��᫥����⥫쭮�� ������ ��ࠬ���
void printPyramid(int n){
    std::cout << "\n\tVariant 1 (for)\n\n";
    int k = n;

    // ���譨� 横� ��� ��ࠡ�⪨ ������⢠ ��ப
    for (int i = 1; i <= n; i++){
        int s = i;
        int sum(0);

        //����७��� 横� ��� ��ࠡ�⪨ �������
        for (int j = 1; j <= n; j++) {
            // �᫮��� ��� ������ ��ࠬ����
            if (j >= k){
                std::cout << s <<" ";
                sum += s;
                // �ᯮ��㥬 ���६���
                s--;
            }
            else
                std::cout << " ";

        }
        k--;
        std::cout << "  " << sum<<"\n";
    }
}
// �㭪�� �뢮�� ��᫥����⥫쭮�� ������ ��㣮�쭨�
void printTriangle(int n){
    std::cout << "\n\tVariant 2 (while)\n\n";
    // ���祭�� ���譥�� ���稪�
    int outer = 1;
    while (outer <= n) {
        std::cout <<"\t";
        // ���祭�� ����७���� ���稪�
        int inner = 1;

        // ��६����� �뢮�� ���祭��
        int s = outer;

        // �㬬� ���祭�� � ��ப�
        int sum(0);
        while (inner <= outer){
            std::cout << s <<" " ;
            sum += s;

            // �����蠥� ���祭�� ��६����� �뢮�� ��� ������ �������
            s-- ;

            // �����稢��� ����७���� ���祭�� ���稪�
            inner++;
        }
        // ������ ����� ��ப� � ���� ������� �浪�
        std::cout <<"  " << sum << "\n";
        // �����稢��� ���譥�� ���祭�� ���稪�
        outer++;
    }
}
