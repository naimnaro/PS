n = int(input())
word_list = []

for i in range(n):
    word_list.append(input().lower())  

word_list.sort()
word_list.sort(key=len)

unique_word_list = list(set(word_list))

for word in unique_word_list:
    print(word)
