$orig = "     group (   admin 'grp1 grp2 grep3   ' )  ";

$test = $orig =~ /'([^']+)'/;
print($1."\n");

$orig =~ /group\ \(([^)]+)\)/;
print($1."\n");