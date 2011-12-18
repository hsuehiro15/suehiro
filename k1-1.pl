my($second,$minute,$hour,$mday,$month,$year) = localtime;
$month += 1;
$year += 1900;
print("本日の日付\n");
print("$year/$month/$mday\n");
print("please input number\n");
my $days = <STDIN>;
die 'please input number' if $days !~/^\-?\d+$/;
my $add_days = $days < 0 ? -1:1;
for(1..$days*$add_days){
($second,$minute,$hour,$mday,$month,$year) = (localtime(time + 86400*$add_days))[0,1,2,3,4,5];
$month += 1;
$year  += 1900;
print "$year/$month/$mday\n";
 $add_days < 0 ? $add_days-- : $add_days++;
}
