use strict;
use warnings;
use Test::More "no_plan";
use_ok('Train');

my $train = Train->new(api => "http://express.heartrails.com/api/json?method=getLines&area=",area => "関東");


is($train->train(),"aiueo");
