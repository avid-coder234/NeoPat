Problem Statement 



Maria runs a food delivery business with a van that has a limited weight capacity. She needs to select ingredients in such a way that maximizes the total value of the delivery without exceeding the van’s capacity.



Help her to calculate the maximum value and the difference between the maximum value of selected ingredients and the total value of the ingredients.



Example

Input:

4 10

3 30

4 50

5 60

6 70



Output:

121.67

88.33



Explanation:

Item Details: Item 1: (Weight = 3 kg, Value = 30), Item 2: (Weight = 4 kg, Value = 50), Item 3: (Weight = 5 kg, Value = 60), Item 4: (Weight = 6 kg, Value = 70).

Value-to-Weight Ratios: Item 2: 12.5, Item 3: 12.0, Item 4: 11.67, Item 1: 10.0.

Sorted by Ratio: Item 2 → Item 3 → Item 4 → Item 1.

Greedy Selection: Take Item 2 (4 kg, value 50), Item 3 (5 kg, value 60), and 1 kg from Item 4, yielding value 11.67.

Total Selected Value: 50 (Item 2) + 60 (Item 3) + 11.67 (part of Item 4) = 121.67.

Total Value of All Items: 30 (Item 1) + 50 (Item 2) + 60 (Item 3) + 70 (Item 4) = 210.

Difference: 210 - 121.67 = 88.33.

Input format :
The first line contains the integer value N and double value W.

The next N lines contain the integer values of weight[i] and value[i] after removing the decimal points.

Output format :
The first line of the output prints the double value representing the maximum value, rounded to two decimal places.

The second line prints a double representing, the difference between the maximum value and the total value of unselected ingredients rounded to two decimal places.



Refer to the sample output for formatting specifications

Code constraints :
The given test cases fall under the following specifications:

1 ≤ N ≤ 102

1 ≤ weight[i], value[i] ≤ 102

1 ≤ W ≤ 102

Sample test cases :
Input 1 :
4 10
3 30
4 50
5 60
6 70
Output 1 :
121.67
88.33
Input 2 :
3 7
3 30
4 50
5 60
Output 2 :
86.00
54.00


code :

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Item {
    int weight;
    int value;
    double value_per_weight;
};

bool compare(const Item &a, const Item &b) {
    if (a.value_per_weight < b.value_per_weight) {
        return false;
    } else if (a.value_per_weight > b.value_per_weight) {
        return true;
    }
    return false;
}

// You are using GCC
double greedy_knapsack(int N, int W , vector<Item>& items , double total_weight){
    double maximum = 0;
    for(int i = 0 ; i  <N ; i++){
        if(total_weight + items[i].weight <= W){
            total_weight += items[i].weight;
            maximum += items[i].value;
        }
        else{
            double remain = W - total_weight;
            maximum += (double) remain / items[i].weight * items[i].value;
            break;
        }
    }
    
    return maximum;
}


int main(){
    int N , W;
    cin >> N >> W;
    vector<Item> items;
    
    for(int i = 0 ; i < N ; i++){
        int a , b;
        cin >> a >> b;
        double c = (double)b/a;
        items.push_back({a,b,c});
    }
    
    sort(items.begin() , items.end() , compare);
    double total_value_of_all = 0;
    
    for(int i = 0 ; i < N ; i++){
        total_value_of_all += items[i].value;
    }

    double total_weight = 0.0;
    double max_value = greedy_knapsack(N, W, items, total_weight);
    double unselected_value = total_value_of_all - max_value;

    cout << fixed << setprecision(2) << max_value << endl;
    cout << fixed << setprecision(2) << unselected_value << endl;

    return 0;
}