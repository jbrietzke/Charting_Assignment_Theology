#include <iostream>
using namespace std;

// These are variables that are all integers and exist even before any meditation practice is begun
int Concentration = 0; //Starts at zero and increases as one progresses throug meditations
int Hindrances = 5; // 5 for the five hindrances
int hindrancesToClarity = 8; // (sensual desire, ill will, will, sloth, torpor, restlessness, worry, doubt) (Shankman pg.10)
int jhanasStep = 1;

int main(int argc, char const *argv[])
{
  // This is the driver program and much like meditation it seems simple but a fastness of information comes through these short few lines similiar to information that flows when in single-pointed concentration.
  void Sati();
  Sati(); // This is calling the Sati function below
  cout << "This is the concentration level: " << Concentration << endl; // "cout" statements log what follows to the screen
  return 0;
}

/*
Sources: Pg. 89-99 The Buddhist Experience by Stephan Beyer,
p.149 – 160 of Mindfulness in Plain English by Venerable Henepola Gunaratana,
p. 44-50, 124-137 Analayo Satipatthana The Direct Path to Realization
*/
// This is the Sati function
void Sati()
{
  // The long term goal for Sati is to understand the 3 prime characteristics in everything in the Universe. The steps lead to this goal through focusing on the breathe and body and seeing the characteristics present within them. Then ones thoughts one doesn't control come in to our minds we also see the characteristics in them. Then everything there is one can find the 3 characteristics present, until one truly knows there are no things that defy the 3 prime characteristics.
  cout << "You are in Sati. Sati can be understood to represent the ability to simultaneously maintain in one's mind the various elements and facets of a particular situation\n\n"; // (Analayo pg. 49)
  void Samadhi();
  bool isInProperLocation = false; // This is a variable for marking whether the person is in the right place, initially it is false
  bool Anicca, Dukkha, Anatta = true; // "Mindfulness and only mindfulness can perceive that the three prime characteristics that Buddhism teaches are the deepest truths of existence" (Gunaratana pg. 156).
  char local;
  if(Concentration > 6 && jhanasStep >= 4) return; // Long term goal to see things how they truly are
  cout << "Are you in a forest or roof of a tree or empty hut? (y/n): "; // The location necessary to practice Mindfulness (Satipatthana Sutta)
  cin >> local; // This is taking in User input, if they type in y than they are stating they are in the proper place
  if (local == 'n') return; // If you are not in the proper location then you can't proceed
  for(int i=0; i < 5; i++) cout << "Breathe in and Breathe out\n"; // We are telling the User to breathe in and out 5 times
  // Something for "Awareness moves through sixteen steps, which proceed from bodily phenomena of breathing to feelings, mental events, and the development of insight" (Analayo pg. 131)

  cout << "We are experiencing our whole body and bodily formation\n";
  Concentration++; // "Mindfulness of the body will lead easily too the development of deep concentration"(Analayo pg.124), in the code the Concentration variable is increasing by one
  Hindrances--; // "There is but one path for the purification of beings... and this is the four-fold establishment of mindfulness"(Beyer pg90)
  // "Once mindfulness has pushed these mental defilements aside, more wholesome states of mind can take their place" (Gunaratana pg. 159), in the code the Hindrances variable in decreasing
  hindrancesToClarity--; // Sati reduces hindrances to clarity, which is a prereq for Samadhi
  Samadhi(); // Short term goal is being able to practice Samadhi. Samadhi leads to right concentration and the ability to see things as they really are. The steps lead to Samadhi because they withdrawal the senses and guard the sense doors to allow for external support to delve into single pointed concentration.

}

// Source The Experience of Samadhi An In-depth Exploration of Buddhist Meditation by Richard Shankman
// This is the Samadhi function
void Samadhi()
{
  // We are coming from Sati so our sense doors are guarded. The short term goal for this meditation is to raise in levels of concentration from prepatory, to access, to fixed. It is done through iteration and enhancing single-pointed concentration.
  void Jhanas(); // This is calling the Jhanas function
  void Sati(); // This is calling the Sati function
  char local;
  int rightConcentration = 0; // "The knowledge and vision of things as they really are, too, has a proximate cause; it does not lack a proximate cause. And what is the proximate cause fo knowledge and vision of things as they really are? It shoud be said: concentration" (Shankman pg 15)
  if(hindrancesToClarity > 3) Sati(); // "To attain any degree of samadhi, the meditator must begin by diminishing, and then proceeding to remove, the hindrances to samadhi" (Shankman pg. 10)
  cout << "You are in Samadhi\n\n";
  cout << "Samadhi means Undistractedness, including one-pointedness of mind and unification of mind\n"; // (Shankman pg. 4)
  if(Concentration > 8) cout << "We no longer need to be in a secluded place\n"; // "Once concentration is strong, the mind is much less susceptible to external disturbances" (Shankman pg. 12)
  cout << "Choose an approach to Samadhi: \nA) Happiness through Jhanas\nB)Mind of brightness that leads to knowledge and wisdom\nC)Giving rise to mindfulness\nD)The arising and passing of the 5 aggregates\n\n"; // (Shankman pgs 4-5)
  cin >> local;
  if(local != 'A') Sati(); // If the user chooses the option "A" then the Sati function is called
  rightConcentration++; // Samadhi develops right concentration thus it is incremented here
  Concentration += rightConcentration; // We are adding to our whole Concentration level the rightConcentration we created in Samadhi
  Jhanas(); //The Jhanas function is called
  // The long term goal for this meditation is reaching Jhanas. This is done reaching right concentration, which is then Jhanas. Right concentration occurs once the hindrances to clarity are eliminated and the three levels of concentration are reached. The three levels of concentration are prepatory, access, and fixed (Shankman pgs. 56-57). Each level of concentration builds on the previous the first occuring in our every day lives, the second is undistracted awareness, and the third is the concentration present in Jhanas.
}

// Source The Experience of Samadhi An In-depth Exploration of Buddhist Meditation by Richard Shankman and Ajahn Brahm on Jhana Meditation
// This is the Jhanas function
void Jhanas()
{
  // The short term goal for Jhanas is to move up a step through mastery of a step. This is achieved through a high level of Samadhi and having the object of meditation be that of the step you are on. As well, repeating this process until one can stay indefinetly in this state, without withdrawling to simply Samadhi meditation.
  void Sati();
  cout << "You are in Jhanas\n\n";
  cout << "The more still the mind the closer you are to Jhanas\n"; // (Ajahn Brahm)
  if (jhanasStep == 1)
  {
    cout << "The first Jhana is said to be born of seclusion since it is well protected from hindrances\n"; // (Shankman pg 67)
  }else if (jhanasStep == 2)
  {
    cout << "With the stilling of applied and sustained thought, he enters abides in the second jhana[which is characterized by] rapture and pleasure born of concentration, and accompanied by inner composure and singleness of mind, without applied and sustained thought\n"; // (Shankman pg 69)
  }else if (jhanasStep == 3)
  {
    cout << "With the fading away of rapture he abides in equanimity, mindful and clearly aware, feeling pleasure with the body, he enters and abides in the third jhana\n"; // (Shankman pg. 70)
  }else
  {
    cout << "With the abandoning of pleasure and pain, and with the previous disappearance of joy and grief, he enters and abides in the fourth hana\n"; // (Shankman pg 71)
  }
  jhanasStep++; // The step you are on in Jhanas goes up by one
  Sati();
  // The long term goal of Jhanas is to master the Eight Attainment where both perception and non-perception are not present. There is no perception because everything is at its most subtle state and alls there is nothing (Shankman 75). The steps that lead to this Jhana are rising through each attainment in Jhanas and mastering them.
}
