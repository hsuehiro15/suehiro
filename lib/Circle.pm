package Circle;
#!/usr/bin/perl
# lib/Circle.pm

use strict;
use warnings;



sub new{
    my $class = shift;
    my $self = { r => shift };
    bless $self,$class;
}

sub hankei {
  return shift->{r};
}

sub menseki{
  my  $pai = 3.14;
  return shift->hankei()**2*$pai;
}

1;
