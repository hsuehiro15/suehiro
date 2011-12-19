use strict;
use warnings;
use Test::More "no_plan";
use_ok('BMI');

my $bmi = BMI->new; 
$bmi->height(1.6);
$bmi->weight(90); 
$bmi->weekyear(45);

is($bmi->body(),35.15625);
is($bmi->man(),"obese");
is($bmi->ninpu(),"ijo");