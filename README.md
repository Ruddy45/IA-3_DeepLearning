IA-3_SteerBehavior

Projet basé sur le chapitre 7 à 10 du livre de Mat Buckland "Programming Game AI by Example" (http://www.ai-junkie.com/books/toc_pgaibe.html).


Équipes :

ARMAND Sylvain
PETIT Wesley
MARTIN Alexandre
RUER Guiaume
SZYMANEK Arnaud


Ajout effectué :

Ajout de règle concernant le choix d’une arme de type RocketLauncher. Le nombre d’ensembles pour les variables floues est maintenant de 5.

La visée et le tir de l’agent sont modifiés en introduisant un comportement flou. La déviation d’un tir (trajectoire d’une balle) se fait en fonction des variables floues suivantes : la distance à la cible, la vélocité, et la période pendant laquelle la cible est demeurée visible.

Introduction d'un joueur (humain) dans le jeu qui crée une équipe d’agent-raven. Quand on double clique droit sur un bot, il devient le leader de l'équipe, puis un à deux autres des bots présents sont rajouté à son équipe, cela veut dire qu'ils attendent que le joueur attaque une cible pour pouvoir l'attaquer. Quand un des membres de l'équipe meurt, il laisse ses armes à ces coéquipiers dans un endroit connu et dédié à l'équipe.

Sauvegarder des données de la fonction de décision de tir sur un autre bot d'une partie humaine, échantillonnage de ces données, puis entrainement d'un bot avec ces échantillons.

Le comportement de l’agent-raven a été amélioré en introduisant un nouveau but : quand un agent à un couteau sur lui, il se met à courir au lieu de marcher.

Deux armes ont été ajoutées :
   - le couteau : il ne peut être lancé qu'au corps à corps, il tue en un coup, et il avance doucement (pour laisser une chance de l'esquiver)

   - les grenades : elles se lancent de loin (distance minimum), et avancent doucement. Si elles touchent un bot, elles explosent à l'impact. 
     Sinon si elles touchent un mur, elles se fixent dessus, puis explosent au bout d'un certain temps.
     Sinon elles avancent jusqu'à leurs distances max et tombent à terre, puis explosent au bout d'un certain temps. 
     Quand elles explosent, elles infligent des dégâts à tous les bots présents dans la zone d'explosion.


En cas de problème sur le SDK :

Propriétés de la solution < Général
Adapter la "Version du Windows SDK" et "Ensemble d'outils de plateforme" aux versions que vous utilisez.