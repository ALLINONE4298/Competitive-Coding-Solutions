# Box It!

### Problem

You are given _**N**_ integers.Sort the _**N**_ integers and print the sorted order.
Store the _**N**_ integers in a vector.Vectors are sequence containers representing arrays that can change in size.
* Declaration:

        vector<int>v; (creates an empty vector of integers
* Size:

        int size=v.size();  
* Size:

        v.push_back(x);(where x is an integer.
        The size increases by 1 after this.)
* Popping the last element from the vector:

        v.pop_back(); (After this the size decreases by 1)
* Size:

        sort(v.begin(),v.end()); (Will sort all th elements in the vector)

To know more about vectors, Click Here
Input Format
The first line of the input contains _**N**_ where _**N**_ is the number of integers. The next line contains _**N**_ integers.


### Constraints:

**1<= N <=10<sup>5**

**1<= V<sub>i</sub> <=10<sup>5</sup>**,where **V<sub>i</sub>** is the **i<sup>th</sup>** integer in the vector.


### Output Format

print the integers in the sorted order one by one in a single line followed by a space.

### Sample Input

    5
    1 6 10 8 4

### Sample Output

    1 4 6 8 10