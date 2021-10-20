def minion_game(string):
    # your code goes here
    s = string
    vowels = 'AEIOU'

    kevSc = 0
    stuSc = 0
    for i in range(len(s)):
        if s[i] in vowels:
            kevSc += (len(s)-i)
        else:
            stuSc += (len(s)-i)

    if kevSc > stuSc:
        print("Kevin", kevSc)
    elif kevSc < stuSc:
        print("Stuart", stuSc)
    else:
        print ("Draw")

if __name__ == '__main__':