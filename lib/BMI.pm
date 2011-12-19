package BMI;
use Moose;

has 'height' => (
     is => 'rw',
     isa => 'Num',
    );

has 'weight' => (
     is => 'rw',
     isa => 'Num',
    );
has 'weekyear' => (
     is => 'rw',
     isa => 'Int',
    );

sub body{
    my $self = shift;
    my $height = $self->height;
    my $weight = $self->weight;
    my $bmi = ($weight)/($height*$height);
    return $bmi;
}

sub man{
   my $self = shift;
   my $bmi = $self->body();   
   my $flag =
      ($bmi > 30) ? "obese" :
      ($bmi > 25) ? "overwieght":
      ($bmi <18.5 ) ? "lowweight":  
                      "hyoujyun";
   return $flag;
}

sub ninpu{
    my $self = shift;
    my $bmi = $self->body();
    my $week = $self->weekyear;
    my $flag;
    if($week >= 40){
        $flag = ($bmi > 22.7  &&  $bmi < 27.9 ) ? 1:0;	
    }elsif($week >= 36){
        $flag = ($bmi > 21.5  &&  $bmi < 22.2 ) ? 1:0;        
    }elsif($week >= 32){
        $flag = ($bmi > 20.6  &&  $bmi < 25.8)  ? 1:0;      
    }elsif($week >= 28){
        $flag = ($bmi > 20.0  &&  $bmi < 25.5)  ? 1:0;
    }elsif($week >= 24){
        $flag = ($bmi > 19.3  &&   $bmi < 24.3) ? 1:0;
    }elsif($week >= 20){
        $flag = ($bmi > 18.5  &&  $bmi < 23.7)  ? 1:0;
    }
    my $ok = ($flag)? "seijo":"ijo";
    return $ok;
}



__PACKAGE__->meta->make_immutable;

no Moose;

1;
