# PRJ_Starshot
Project Starshot is being built in Unreal Engine 4.23, targetted to the PC platform. Linux support is expected, and MacOS may be pursued, but is not expected to be included in the intial release passes.<br>

Be warned, the following information is subject to change as development continues.<br>
# Description
## Story
Starshot is largely based around providing a story that can shift heavily based on the player's actions, with enough meta-level customization to allow for a great deal of replayability, fine-tuning, and even modification. This is done through the "story card" system at the start of the game. The player is able to select cards for various attributes that impact the core gameplay, such as the actual story the player plays- which itself determines core beats the player will encounter, as well as what their end goal is and how to accomplish that, if any.- the fleet the player starts with, and the overall personalities of their captain character, first officers, and crew, each of which providing a number of alterations to combat, asset management, and story choices.<br>
Starshot is intended to play on a number of sci-fi action-adventure tropes, such as the story beats produced by differences between the personalities of the different tiers of cast (captain, first officer, and crew), the inclusion of friendly and oppositional stalkers, and the core story types and asset compositions the player has access to. In the cases of anything to do with the story, however, it is intentionally designed to be as modular and adaptive as possible, allowing for a good degree of modding potential.
## Combat
Combat plays out largely the same as XCOM's does, however there is an emphasis on the idea of commanding a fleet- an idea largely reinforced by the nature of the combat itself. The effects of the combat and story play into each other, however- taking on losses during battle can cause events such as a fatigued crew, or unexpected malfunctions, while various traits and items collected through story beats can be used in battle, or otherwise influence the balance of power.<br>
### Stalkers
One way the balance can be influenced is through the "Stalker" system. Like many sci-fi series, the player can pick up recurring characters to either assist or target them. These characters can have a unique set of traits and personalities, that can impact how they interact with the player.<br>
## Backend
### Meta Layer (Planned only.)
#### Planned Cards
<br><br>
### Story Layer (In progress.)
The key design features of how the story system works is best described through its datatable-oriented design. While not an uncommon trait by any means, storing the vast majority of information- including text blocks and response data- in datatables does allow for the system to immediately be particularly adaptable, as provided the ID strings for responses, items, and further text blocks match, and an entry point of some kind is established, any content in these tables can be accessed.<br>
In terms of storage, only the actors that actually use a given datatable entry retain the information from it, however the gameinstance will be responsible for storing more permanent information.
#### Planned Beats/Questlines
<br><br>
### Combat Layer (Planned only.)
Combat takes place on a 2D grid, with the player's fleet, other fleet(s), an objective of some form, and environmental features as key objects.<br>
Combat scenes are generated based on information from the story beat that initiated it, with the most notable information being taken being the enemies, objectives, general environment, and the presence of any special conditions, such as allied fleets or status effects.<br>
#### Actions
As is standard for strategy games, the player can only take a limited number of actions per turn. One feature I want to experiment with however is the idea of a stamina meter- effectively the same as a regular action count, however far more flexible in practice, allowing for abilities to take a specific amount of stamina, or movement to limit what other actions can be taken because of the precise amount of "stamina" used.<br>
If implemented in any public build, this will likely be a toggleable option, with the alternative being a more standard action limit.<br>
Certain abilities will draw from the player's inventory, be they limited-use items or perks.
