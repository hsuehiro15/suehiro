use strict;
use warnings;

use lib qw(./lib );
use Test::More "no_plan";

use_ok("Circle");
use Circle;

my $circle = Circle->new(3);

is(28.26,$circle->menseki());

