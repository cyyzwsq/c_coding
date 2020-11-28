/**
 * Created by 冲哥 on 2020.11.28
 * 微信关注公众号【C语言中文社区】，免费领取200G精品学习资料
 */
#include<stdio.h>

int* bubble_sort(int arr[], int len);

int main() {
    int* result, len;
    int data[] = { 12, 43, 23, 13, 65, 17, 98, 45, 67, 88 };
    len = (int)sizeof(data) / sizeof(*data);
    printf("使用冒泡排序前的原始数据是：");
    for (int i = 0; i < len; i++) {
        printf("%3d", data[i]);
    }
    printf("\n");
    result = bubble_sort(data, len);
    printf("使用冒泡排序后的数据是：");
    for (int j = 0; j < len; j++) {
        printf("%3d", *(result + j));
    }
    return 0;
}

/*!
 * 循环比较相邻的元素。如果第一个比第二个大，就交换他们两个
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
        printf("第%d次循环排序后结果：", i + 1);
        for (int k = 0; k < len; k++) {
            printf("%3d", arr[k]);
        }
        printf("\n");
    }
    return arr;
}