# Seating Arrangement
Akash and Vishal are quite fond of travelling.They mostly travel by railways.  
They were travelling in a train one day and they got interested in the seating arrangement of their compartment.  
The compartment looked something like

```
       ___________________________________________________________________
       |6    7|18    19|30   31|42                         91|102    103|
       |5    8|17    20|29   32|41                         92|101    104|
       |4    9|16    21|28   33|40                         93|100    105|

       |3   10|15    22|27   34|39                         94|99     106|
       |2   11|14    23|26   35|38                         95|98     107|
       |1   12|13    24|25   36|37    ...  and so on ...   96|97     108|
       __________________________________________________________________
```


So they got interested to know the seat number facing them and the seat type facing them.The seats are denoted as follows :

* Window Seat : WS
* Middle Seat : MS
* Aisle Seat : AS


You will be given a seat number,find out the seat number facing you and the seat type, i.e.WS, MS or AS.

### INPUT
* First line of input will consist of a single integer T denoting number of test-cases.
* Each test-case consists of a single integer N denoting the seat-number.

### OUTPUT 
For each test case,print the facing seat-number and the seat-type, separated by a single space in a new line.

### CONSTRAINTS 
* (1 <= T <= 10^5)
* (1 <= N <= 108)
