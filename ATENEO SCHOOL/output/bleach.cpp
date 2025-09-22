#include <iostream>
using namespace std; 

int main() {
int main_ATK, main_DEF, main_HP, option;
int boss_ATK, boss_DEF, boss_HP;
bool hasRustbite, hasRapier, hasNet, hasSunglasses, hasAmulet; 

main_ATK = 12;
main_HP = 40; 
main_DEF = 5; 

cout<<"BLEACH TEXT GAME"<<endl<<endl;
cout<<"BLEACH: District 67 > A Text-Based Adventure"<<endl;
cout<<"Disclaimer: This is a fan-made educational project. Bleach is created by Tite Kubo."<<endl;
cout<<"All rights belong to their respective owners. For classroom use only."<<endl<<endl;
cout<<"You are Jun Arashi, a soul living in District 67 of Rukongai."<<endl;
cout<<"One night, a terrible presence descends - a rogue Hollow stalks the district."<<endl;
cout<<"You must prepare yourself for the coming battle."<<endl<<endl;

cout<<"Press ENTER To Continue..."<<endl;
cin.ignore(); 
cin.get();

cout<<"SCENE 1  PROLOGUE"<<endl<<endl;
cout<<"District 67, outskirts of Rukongai."<<endl<<endl;
cout<<"Jun stands in a dark alley as screams echo through the streets."<<endl;
cout<<"The night sky trembles as a Hollow's roar shakes the rooftops."<<endl;
cout<<"Jun clenches his fists - there is no running now."<<endl<<endl<<endl; 

cout<<"Press ENTER To Continue..."<<endl;
cin.ignore(); 
cin.get();

cout<<"SCENE 2  The Saint (Hanae)"<<endl;
cout<<"Hanae, the district's wandering saint, approaches you."<<endl<<endl; 
cout<<"Hanae: You look pale, Jun. The night is cruel... let me bless you with light."<<endl; 
cout<<"Choose:"<<endl;
cout<<"1. Safe - Just a little strength will do. (+4 ATK)"<<endl;
cout<<"2. Mid - I'll take whatever you can give. (+1 ATK, +1 DEF, +7 HP)"<<endl;
cout<<"3. Risky - Give me everything you have! (+11 ATK, +3 DEF, -5 HP)"<<endl;
cout<<"Pick (1/2/3): ";
cin>>option;

switch (option) {
    case 1: 
        main_ATK += 4;
        break;
    case 2: 
        main_ATK += 1;
        main_DEF += 1;
        main_HP += 7;
        break;
    case 3: 
        main_ATK += 11;
        main_DEF += 3;
        main_HP -= 5;
        break;
    default:
        cout << "Invalid option! No stat changes applied. " << endl << endl;
    }
cout<<"Stat Changes: "<<endl<<endl;
cout<<"ATK: "<<main_ATK<<", ";
cout<<"DEF: "<<main_DEF<<", ";
cout<<"HP: "<<main_HP<<". "<<endl;

cout << "Press ENTER to continue..." << endl;
    cin.ignore();
    cin.get();

cout << "SCENE 3  The Tinkerer (Riku)" << endl;
cout << "You find Riku, a tinkerer surrounded by scraps of strange metal." << endl << endl;
cout << "Riku: You'll need more than fists against a Hollow. I can forge something quick." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - Just give me something simple. (+4 ATK)" << endl;
cout << "2. Mid - Make me sturdier. (+1 DEF, -2 HP)" << endl;
cout << "3. Risky - Push the limits! (+5 ATK, +3 DEF, -5 HP, gain Rustbite: -6 Boss DEF)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 4;
        break;
    case 2:
        main_DEF += 1;
        main_HP -= 2;
        break;
    case 3:
        main_ATK += 5;
        main_DEF += 3;
        main_HP -= 5;
        hasRustbite = true;
        break;
    default:
        cout << "Invalid option! No stat changes applied." << endl;
    }
cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;
if (option == 3){ 
    cout<<"Gain item: Rustbite (-6 Boss DEF)"<<endl; 
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();

cout << "SCENE 4 - Sister Midori (Shrine)" << endl;
cout << "You pass a ruined shrine. Sister Midori kneels in prayer." << endl << endl;
cout << "Midori: Child... I can offer a charm. But the gods ask for something in return." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A small blessing, please. (+4 ATK)" << endl;
cout << "2. Mid - I'll take the charm. (Gain Net, -2 HP)" << endl;
cout << "3. Risky - I want true power! (+9 ATK, -4 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 4;
        break;
    case 2:
        hasNet = true;
        main_HP -= 2;
        break;
    case 3:
        main_ATK += 9;
        main_HP -= 4;
        break;
    default:
        cout << "Invalid option! No status changes applied." << endl;
        break;
    }

cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;

if (option == 2) {
    cout << "Item Gained: Net" << endl;
    }

cout << "Press ENTER to continue..." << endl;
cin.get();

cout << "SCENE 5 - Yumi the Smuggler" << endl;
cout << "A shadow in the corner alley beckons you. Yumi, the smuggler, grins." << endl << endl;
cout << "Yumi: Dangerous times, dangerous goods. I can sell you power, if you're willing to pay the price." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - Something reliable. (+11 ATK)" << endl;
cout << "2. Mid - The Armlet of Mordiggan... (+15 ATK, -1 DEF, -2 HP)" << endl;
cout << "3. Risky - What's your strongest weapon? (Gain Divine Rapier, -10 HP, -3 DEF, -3 ATK)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;
    
switch (option) {
    case 1:
        main_ATK += 11;
        break;
    case 2:
        main_ATK += 15;
        main_DEF -= 1;
        main_HP -= 2;
        break;
    case 3:
        hasRapier = true;
        main_ATK -= 3;
        main_DEF -= 3;
        main_HP -= 10;
        break;
    default:
        cout << "Invalid option! Yumi shrugs and disappears into the shadows." << endl;
        break;
    }
cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;
if (option == 3) {
    cout <<"Item Gained: The Divine Rapier"<<endl;
}  

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();

cout << "SCENE 6 - Kaji the Peddler" << endl;
cout << "An old peddler, Kaji, rattles his cart of bottles and charms." << endl << endl;
cout << "Kaji: Spare change for power? Every blessing has a price." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A minor boost. (+4 ATK)" << endl;
cout << "2. Mid - Something stronger. (+8 ATK, -2 HP)" << endl;
cout << "3. Risky - Everything you've got! (+15 ATK, -2 DEF, -5 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;


switch (option) {
    case 1:
        main_ATK += 4;
        break;
    case 2:
        main_ATK += 8;
        main_HP -= 2;
        break;
    case 3:
        main_ATK += 15;
        main_DEF -= 2;
        main_HP -= 5;
        break;
    default:
        cout << "Invalid option! Kaji cackles and wheels his cart away." << endl;
        break;
    }
cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;
    
cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();

cout << "SCENE 7 - Aiko the child" << endl;
cout << "Aiko, a small child, tugs at your sleeve with pleading eyes." << endl << endl;
cout << "Aiko: Please… help us. You're the only one who can stand against the Hollow." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - I'll do my best. (+2 ATK)" << endl;
cout << "2. Mid - I'll push myself harder. (+1 ATK, +1 DEF, -1 HP)" << endl;
cout << "3. Risky - I'll protect everyone at any cost! (+8 ATK, +3 DEF, -5 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 2;
        break;
    case 2:
        main_ATK += 1;
        main_DEF += 1;
        main_HP -= 1;
        break;
    case 3:
        main_ATK += 8;
        main_DEF += 3;
        main_HP -= 5;
        break;
    default:
        cout << "Invalid option! Aiko's hopeful smile fades." << endl;
        break;
    }
cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();

cout << "SCENE 8 - Master Renga" << endl;
cout << "Your old mentor, Renga, leans on his cane and lowers his sunglasses." << endl << endl;
cout << "Renga: Jun... take these. You'll need sharp eyes more than a sharp blade." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A steady path will do. (+5 ATK)" << endl;
cout << "2. Mid - I'll endure the strain. (+7 ATK, -2 HP)" << endl;
cout << "3. Risky - I'll fight with your spirit! (Gain Sunglasses, +2 DEF, -5 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
         main_ATK += 5;
        break;
    case 2:
        main_ATK += 7;
        main_HP -= 2;
        break;
    case 3:
        main_DEF += 2;
        main_HP -= 5;
        hasSunglasses = true;
        break;
    default:
        cout << "Invalid option! Renga shakes his head and walks away." << endl;
        break;
    }
cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;
if (option == 3){
    cout << "Item Acquired: Sunglasses"<<endl;
}

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();

cout << "SCENE 9 - Mika the Charm Seller" << endl;
cout << "Mika holds a tray of strange charms." << endl << endl;
cout << "Mika: These trinkets are cursed and blessed alike. What will you take?" << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A small charm. (+2 ATK)" << endl;
cout << "2. Mid - That one... it glows faintly. (Gain Schala's Amulet, -3 HP)" << endl;
cout << "3. Risky - I want the strongest one! (+11 ATK, +2 DEF, -7 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 2;
        break;
    case 2:
        main_HP -= 3;
        hasAmulet = true;
        break;
    case 3:
        main_ATK += 11;
        main_DEF += 2;
        main_HP -= 7;
        break;
    default:
        cout << "Invalid option! Mika hides the tray away from you." << endl;
        break;
    }
cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;
if (option == 2){
    cout << "Item Acquired: Amulet"<<endl;
}

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();

cout << "SCENE 10 - Supply Cache" << endl;
cout << "You find a hidden cache of supplies — medicine, weapons, armor." << endl << endl;
cout << "Choose:" << endl;
cout << "1. Safe - Patch me up completely. (Set HP to 50)" << endl;
cout << "2. Mid - I'll take the sharper blades. (+12 ATK, -3 HP)" << endl;
cout << "3. Risky - Load me with everything! (+23 ATK, +2 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_HP = 50;
        break;
    case 2:
        main_ATK += 12;
        main_HP -= 3;
        break;
    case 3:
        main_ATK += 23;
        main_HP += 2;
        break;
    default:
        cout << "Invalid option! The cache crumbles to dust before you can act." << endl;
        break;
    }
    
cout << "Stat Changes" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << "." << endl;

}