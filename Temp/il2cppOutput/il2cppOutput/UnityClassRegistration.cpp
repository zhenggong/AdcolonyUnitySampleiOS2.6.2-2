struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

}

void RegisterAllClasses()
{
	//Total: 59 classes
	//0. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//1. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//2. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//3. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//4. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//13. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//14. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//15. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//16. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//17. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//18. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//19. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//20. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//21. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//22. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//25. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//26. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//27. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//28. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//29. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//30. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//31. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//32. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//33. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//34. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//35. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//36. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//37. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//38. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//39. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//40. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//41. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//42. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//43. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//44. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//45. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//46. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//47. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//48. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//49. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//50. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//51. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//52. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//53. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//54. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//55. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//56. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//57. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//58. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
