inteiro fibonacci(inteiro: n)
  inteiro: a, b, i, tmp
  a := 0
  b := 1
  se n = 0 então
    escreva(a)
  senão se n = 1 então
    escreva(b)
  fim
  escreva(a)
  escreva(" ")
  escreva(b)
  escreva(" ")
  i := 2
  repita
    tmp := b
    b := a + b
    a := tmp
    escreva(b, " ")
    i := i + 1
  até i > n
fim

inteiro principal()
  leia(n)
  fibonacci(n)
  retorna(0)
fim