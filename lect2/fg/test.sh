make all

echo "======Test begin======"


./fg-r > r.txt
./fg-nr > nr.txt

if diff -q r.txt nr.txt > /dev/null; then
    echo "passed"
else
    echo "failed"
    echo "recursive output:"
    cat r.txt
    echo "non-recursive output:"
    cat nr.txt

fi

echo "======Test end========"