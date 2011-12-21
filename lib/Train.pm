ackage Train;
use Moose;
use LWP::Simple;
use XML::Simple;
use utf8;

has 'api' => (
   is => 'rw',
   isa => 'Str',
   required => 1,
    );

has 'area' => (
     is => 'rw',
     isa => 'Str',
     required => 1,
    );


__PACKAGE__->meta->make_immutable;

no Moose;

sub train{
    my $self = shift;
    my $document = LWP::Simple::get($self->api.$self->area) or die "cannot get content from $self->area";
    my $parser = XML::Simple->new;
    my $data = $parser->XMLin($document);
    return $data;
}


1;
