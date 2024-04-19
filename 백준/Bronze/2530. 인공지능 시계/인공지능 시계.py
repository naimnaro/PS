a, b, c = map(int, input().split())  # 초기 시간 입력

time = int(input())  # 경과 시간 입력

# 초를 시, 분, 초로 변환하는 함수
def convert_time(seconds):
    hours = seconds // 3600
    minutes = (seconds % 3600) // 60
    seconds = (seconds % 3600) % 60
    return hours, minutes, seconds

# 초기 시간을 초로 변환
initial_time = a * 3600 + b * 60 + c

# 총 경과 시간을 초 단위로 계산
total_time = initial_time + time

# 초를 시, 분, 초로 다시 변환
a, b, c = convert_time(total_time)

# 시간이 24시를 넘어가면 24시로 보정
a %= 24

print(a, b, c)
