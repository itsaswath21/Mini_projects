def calculate_grade(marks):
    if marks >= 90:
        return "A"
    elif marks >= 80:
        return "B"
    elif marks >= 70:
        return "C"
    elif marks >= 60:
        return "D"
    else:
        return "F"


name = input("Enter student name: ")
subjects = int(input("Enter number of subjects: "))

total = 0

for i in range(subjects):
    mark = float(input(f"Enter marks for subject {i+1}: "))
    total += mark

average = total / subjects
grade = calculate_grade(average)

print("\nRESULTS")
print("Name:", name)
print("Average Marks:", average)
print("Grade:", grade)
