
# LBYARCH MP


## Authors

- [@briSalvador](https://github.com/briSalvador)
- [@ernestbalderosa15](https://github.com/ernestbalderosa15)

## MP Specs
Perform Mapping from uint8 based integer grayscale to double precision float representation.

#### Example Input
```bash
3 4
64,  89,  114, 84
140, 166, 191, 84
216, 242, 38,  84
```

#### Example Output
```bash
0.25 0.35 0.45 0.33
0.55 0.65 0.75 0.33
0.85 0.95 0.15 0.33
```
## Performance Analysis
In this section, we will examine the average execute times for arrays with a height and width of: 10, 100, and 1000 which are case 1, 2 and 3 respectively

### Case 1
#### Input
```
10 10
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
11, 12, 13, 14, 15, 16, 17, 18, 19, 20
21, 22, 23, 24, 25, 26, 27, 28, 29, 30
31, 32, 33, 34, 35, 36, 37, 38, 39, 40
41, 42, 43, 44, 45, 46, 47, 48, 49, 50
51, 52, 53, 54, 55, 56, 57, 58, 59, 60
61, 62, 63, 64, 65, 66, 67, 68, 69, 70
71, 72, 73, 74, 75, 76, 77, 78, 79, 80
81, 82, 83, 84, 85, 86, 87, 88, 89, 90
91, 92, 93, 94, 95, 96, 97, 98, 99, 100
```

#### Output
```
Time taken to execute: 0.000367 ms
```

#### Screenshots
![image](https://github.com/user-attachments/assets/81bf4965-11ba-438e-be2e-1ff30999c418)
![image](https://github.com/user-attachments/assets/6296b019-07da-4227-ba75-8748497caf5f)

### Case 2
#### Input
```
100 100
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, ...
23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, ...
...
```

#### Output
```
Time taken to execute: 0.023210 ms
```

#### Screenshots
*Input and output screenshots do not their respective array displays for brevity*

![image](https://github.com/user-attachments/assets/9553a292-335a-486c-a999-7129ea5b79ad)
![image](https://github.com/user-attachments/assets/79b24158-62fe-4206-b7c1-61d1a6fede9b)

### Case 3
#### Input
```
1000 1000

```

#### Output
```
Time taken to execute: 0.023210 ms
```

#### Screenshots
*Input and output screenshots do not their respective array displays for brevity*

![image](https://github.com/user-attachments/assets/9553a292-335a-486c-a999-7129ea5b79ad)
![image](https://github.com/user-attachments/assets/79b24158-62fe-4206-b7c1-61d1a6fede9b)






