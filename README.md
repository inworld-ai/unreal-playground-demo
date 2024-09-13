# Inworld AI Unreal Playground Demo
The Playground Demo is a great way to get started with Inworld SDK for Unreal Engine. The project aims to serve as a frequently updated demo project to show off new Inworld features as they release.

For more in-depth documentation of the playground, visit the [Inworld AI docs](https://docs.inworld.ai/docs/tutorial-integrations/unreal-engine/playground/).

## MetaHuman Setup

To interact with and see how MetaHumans are supported by Inworld in the Playground Demo please follow the steps below:

![Missing MetaHuman](/Resources/Images/MissingMetaHuman.png)

1. Follow this guide to import and setup a MetaHuman in your project: [https://docs.inworld.ai/docs/tutorial-integrations/unreal-engine/sdk-structure/inworld-metahuman/](https://docs.inworld.ai/docs/tutorial-integrations/unreal-engine/sdk-structure/inworld-metahuman/).
2. Open the `MAP_Avatars_Room` level.
3. Add your imported MetaHuman to the level as a child to the BP_MetaHuman_Owner actor and set the exposed `Meta Human Character` field. ![MetaHuman Owner Details](/Resources/Images/MetaHumanOwner.png)
4. Reset the MetaHuman's transform. ![MetaHuman Details](/Resources/Images/MetaHumanDetails.png)
5. Done. ![MetaHuman Avatar Showcase](/Resources/Images/MetaHumanInLevel.png)
