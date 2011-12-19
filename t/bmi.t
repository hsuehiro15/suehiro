use strict;
use warnings;
use Test::More "no_plan";
use_ok('BMI');

my $bmi = BMI->new(height => 1.6,weight => 90); 
$bmi->weekyear(34);

is($bmi->bmi(),35.15625);

is($bmi->ninpu(),"ijo");

is($bmi->man(),"obese");
