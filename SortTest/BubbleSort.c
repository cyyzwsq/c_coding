/**
 * Created by ��� on 2020.11.28
 * ΢�Ź�ע���ںš�C���������������������ȡ200G��Ʒѧϰ����
 */
#include<stdio.h>

int* bubble_sort(int arr[], int len);

int main() {
    int* result, len;
    int data[] = { 12, 43, 23, 13, 65, 17, 98, 45, 67, 88 };
    len = (int)sizeof(data) / sizeof(*data);
    printf("ʹ��ð������ǰ��ԭʼ�����ǣ�");
    for (int i = 0; i < len; i++) {
        printf("%3d", data[i]);
    }
    printf("\n");
    result = bubble_sort(data, len);
    printf("ʹ��ð�������������ǣ�");
    for (int j = 0; j < len; j++) {
        printf("%3d", *(result + j));
    }
    return 0;
}

/*!
 * ѭ���Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�����������
 * @param arr
 * @param len
 * @return arr
 */
int* bubble_sort(int arr[], int len) {
    int temp;

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printf("��%d��ѭ�����������", i + 1);
        for (int k = 0; k < len; k++) {
            printf("%3d", arr[k]);
        }
        printf("\n");
    }
    return arr;
}