def swap_case(s):
    ans = ""
    for l in s:
        if l == l.upper():
            ans = ans + l.lower()
        else:
            ans = ans + l.upper()
    return ans

if __name__ == '__main__':