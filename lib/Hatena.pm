package Hatena;
use LWP::Simple;
use XML::Simple;
use Moose;


has 'url' => (
   is => 'rw',
   isa =>'Str',
   required => 1,
  default => "https://twitter.com/",
);

__PACKAGE__->meta->make_immutable;

no Moose;

sub diary{
    my $self =shift;
    my $api = "http://d.hatena.ne.jp/exist?mode=xml&url=";
    my $url = $self->url;
    my $document = LWP::Simple::get($api.$url) or die "cannot get content from $url";
    my $parser = XML::Simple->new; 
    my $data = $parser->XMLin($document);
    return $data->{count}->{diary}->{content};
}


1;
