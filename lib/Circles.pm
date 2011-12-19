package Circles;
use Moose;

has 'message' => (
   is => 'rw',
   isa=> 'Str',
);

has 'hankei' => (
    is => 'rw',
    isa => 'Int',
    default => 2,
 );

sub menseki{
    $pai = 3.14,
    $hankei = hankei**2*$pai;
}

sub pmessage{
    $message = message;
    return $message;
}

__PACKAGE__->meta->make_immutable;

no Moose;

1;
