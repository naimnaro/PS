word = input()

alphabet = [0] * 26

for char in word:
    if char.isalpha(): 
        index = ord(char.lower()) - ord('a') 
        alphabet[index] += 1


for count in alphabet:

    print(count, end=' ')
