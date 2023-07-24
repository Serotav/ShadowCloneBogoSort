#include <iostream>
#include <random>
#include <queue>
#include <cstdlib>
#include <vector>
using std::vector, std::cout, std::queue;

template<typename T> 
void randomize_array(vector<T> &v){
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<T> dist(std::numeric_limits<T>::min(), std::numeric_limits<T>::max());

for(auto &i: v) i = dist(gen);

}

template <typename T>
void swapRandomElements(vector<T>& v) {
    
static std::random_device rd;
static std::mt19937 gen(rd());
static std::uniform_int_distribution<std::size_t> dist(0, v.size()- 1);
    
std::swap(v[dist(gen)], v[dist(gen)]);
}


template<typename T> 
int ShadowCloneBogoSort(vector<T> &v){

if(v.size()<2) return 0;

queue<vector<T>> que;
que.emplace(v);

    while(1){
        vector<T> temp = que.front(); que.pop();

        size_t i =1;
        
        while (i <temp.size() && temp[i] >= temp[i-1])  i++;
        
        if(i == temp.size()) {v = temp; return que.size();}

        que.emplace(temp);
        swapRandomElements(temp);
        que.emplace(temp);
    }


}

int main(int argc, char *argv[]){

size_t size;

if(argv[1] == NULL){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<size_t> ops(1, INT64_MAX);
    size = ops(rng); // we do a little trolling
}
else{
    size = atoi(argv[1]);
}


vector<char> vector(size);


randomize_array(vector);
for (const auto & e: vector) cout <<(int) e << " ";

cout << "\nIt took ----> "<< ShadowCloneBogoSort(vector)<<" rounds\n";

for (const auto & e: vector) cout << (int)e << " ";
    
}
