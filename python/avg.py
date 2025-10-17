def calculate_average(marks):
    return sum(marks) / len(marks)
m = []
for i in range(1, 6):
    mark = float(input(f"Enter subject marks {i}: "))
    m.append(mark)
average = calculate_average(m)
print(f"Average marks: {average}")
