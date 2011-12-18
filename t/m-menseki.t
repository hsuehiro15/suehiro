use strict;
use warnings;
use Test::More;
use_ok('Circles');

my $circle = Circles->new();

 $circle->hankei(3);
 $circle->chokei(6);

is ($circle->menseki(),24);

is ($circle->enshu,33);

