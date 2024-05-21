def insertion_sort(input_list):
    for index in range(1, len(input_list)):
        current_value = input_list[index]
        position = index

        while position > 0 and input_list[position - 1] > current_value:
            input_list[position] = input_list[position - 1]
            position -= 1

        input_list[position] = current_value

    return input_list

def main():
    a = [4, 3, 2, 10, 12, 1, 5, 6]
    sorted_a = insertion_sort(a)
    print(sorted_a)

if __name__ == '__main__':
    main()

