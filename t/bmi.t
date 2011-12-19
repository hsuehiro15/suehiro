use strict;
use warnings;
use Test::More "no_plan";
use_ok('BMI');

my $bmi = BMI->new(height => 1.6,weight => 90,weekyear => 45); 


is($bmi->bmi(),35.15625);

is($bmi->ninpu(),"ijo");

is($bmi->man(),"obese");
