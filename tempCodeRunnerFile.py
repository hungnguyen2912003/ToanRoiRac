def main():
    setA = list(map(int, input().split()))
    setB = list(map(int, input().split()))

    # Tìm tập giao của A và B
    intersection = sorted(list(set(setA) & set(setB)))
    if not intersection:
        print("none")
    else:
        print(" ".join(map(str, intersection)))

    # Tìm tập hợp của A và B
    unionSet = sorted(list(set(setA) | set(setB)))
    print(" ".join(map(str, unionSet)))

if __name__ == "__main__":
    main()