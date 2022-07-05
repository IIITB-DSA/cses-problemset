recursiverm() {
  for d in *; do
    if [ -d "$d" ]; then
      (cd -- "$d" && recursiverm)
    fi
    rm -f *.out
    rm -f *.txt
  done
}

(recursiverm)