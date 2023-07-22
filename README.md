# Deep learning in Raven
## About The Project
It's based on a project of Mat Buckland : *"Raven"*.  

My goal was to train bots with neural networks by introducing a fuzzy logic on datasets.  
My goal was to add Fuzzy Logic on agent trained by neural network and to train them.  

Agent aiming and shooting are modified by the deviation of a shot (bullet trajectory) with the following fuzzy variables: distance to target, velocity, and the period during which the target has remained visible.

I also

<p align="center">
  <img src="assets/1-steering-behavior.png" alt="Steering Behavior" />
</p>

## Getting Started
### Usage

Introduction of a (human) player into the game who creates a team of agent-raven. When a bot is double-right-clicked, it becomes the team leader, and one or two of the other bots present are added to its team, meaning that they wait for the player to attack a target before being able to attack it. When a team member dies, he leaves his weapons with his team-mates in a known location dedicated to the team.

Agent-raven behavior has been improved by introducing a new goal: when an agent has a knife on him, he starts running instead of walking.

Two new weapons have been added:
   - the knife: can only be thrown in close combat, kills in a single blow, and moves slowly (to give you a chance to dodge it)

   - grenades: can be thrown from a distance (minimum distance), and advance slowly. If they hit a bot, they explode on impact. 
     Otherwise, if they hit a wall, they attach themselves to it, then explode after a certain time.
     Otherwise, they advance to their maximum distance and fall to the ground, then explode after a certain time. 
     When they explode, they inflict damage on all bots in the explosion zone.



## License
Distributed under the MIT License. See `LICENSE` for more information.

## Contact
- Wesley Petit
- Sylvain Armand
- Guillaume Ruer
- Alexandre Martin
- Arnaud Szymanek

## Credits
- [Mat Buckland, *"Programming Game AI by Example"*, Chapter 7 to 10](http://www.ai-junkie.com/books/toc_pgaibe.html).
