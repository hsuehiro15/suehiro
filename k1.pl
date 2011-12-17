my($second,$minute,$hour,$mday,$month,$year) = localtime;
$month += 1;
$year += 1900;
print("本日の日付\n");
print("$year/$month/$mday\n");
my $n = -999;
if($n < 0){
    print("本日の日付と$n日前までの日付\n");
}elsif($n > 0){
    print("本日の日付と$n日後までの日付\n");
}
print("$year/$month/$mday\n");
if($n < 0){
    while($n < 0){
       	$mday--;
	if($mday < 1){
	      $month--;
	  if($month < 1){
	      $month = 12;
              $year--;
}
      my $end_of_month = end_of_month($year,$month);
      $mday = $end_of_month;
    }
	print("$year/$month/$mday\n");
	$n++;
 }
}elsif($n > 0){
    while($n > 0){
        my $end_of_month = end_of_month($year,$month);
	$mday++;
        if($mday > $end_of_month){
	    $mday = 1;
            $month++;
            if($month > 12){
		$month = 1;
                $year++;
	    }
}  
        print("$year/$month/$mday\n");
	$n--;
    }
} 

sub end_of_month{

    my($year,$month) = @_;
    return if !$year || !$month;

    $year -= 1900;
    $month--;

    my @days = (31,30,29,28);

    require Time::Local;

    foreach my $day(@days) {
	eval {
	    Time::Local::timelocal(0,0,0,$day,$month,$year);
	};
    return $day unless $@;
}
    return;
}
