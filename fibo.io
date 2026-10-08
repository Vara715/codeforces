n := File standardInput readLine asNumber

prev1 := 1
prev2 := 1

2 to(n, i,
    tmp := prev1 + prev2
    prev1 = prev2
    prev2 = tmp
)

prev2 println