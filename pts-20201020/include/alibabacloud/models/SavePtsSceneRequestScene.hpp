// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENE_HPP_
#define ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneAdvanceSetting.hpp>
#include <vector>
#include <alibabacloud/models/SavePtsSceneRequestSceneFileParameterList.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneGlobalParameterList.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneLoadConfig.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneRelationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SavePtsSceneRequestScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavePtsSceneRequestScene& obj) { 
      DARABONBA_PTR_TO_JSON(AdvanceSetting, advanceSetting_);
      DARABONBA_PTR_TO_JSON(FileParameterList, fileParameterList_);
      DARABONBA_PTR_TO_JSON(GlobalParameterList, globalParameterList_);
      DARABONBA_PTR_TO_JSON(LoadConfig, loadConfig_);
      DARABONBA_PTR_TO_JSON(RelationList, relationList_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
    };
    friend void from_json(const Darabonba::Json& j, SavePtsSceneRequestScene& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvanceSetting, advanceSetting_);
      DARABONBA_PTR_FROM_JSON(FileParameterList, fileParameterList_);
      DARABONBA_PTR_FROM_JSON(GlobalParameterList, globalParameterList_);
      DARABONBA_PTR_FROM_JSON(LoadConfig, loadConfig_);
      DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
    };
    SavePtsSceneRequestScene() = default ;
    SavePtsSceneRequestScene(const SavePtsSceneRequestScene &) = default ;
    SavePtsSceneRequestScene(SavePtsSceneRequestScene &&) = default ;
    SavePtsSceneRequestScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavePtsSceneRequestScene() = default ;
    SavePtsSceneRequestScene& operator=(const SavePtsSceneRequestScene &) = default ;
    SavePtsSceneRequestScene& operator=(SavePtsSceneRequestScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advanceSetting_ == nullptr
        && return this->fileParameterList_ == nullptr && return this->globalParameterList_ == nullptr && return this->loadConfig_ == nullptr && return this->relationList_ == nullptr && return this->sceneId_ == nullptr
        && return this->sceneName_ == nullptr; };
    // advanceSetting Field Functions 
    bool hasAdvanceSetting() const { return this->advanceSetting_ != nullptr;};
    void deleteAdvanceSetting() { this->advanceSetting_ = nullptr;};
    inline const Models::SavePtsSceneRequestSceneAdvanceSetting & advanceSetting() const { DARABONBA_PTR_GET_CONST(advanceSetting_, Models::SavePtsSceneRequestSceneAdvanceSetting) };
    inline Models::SavePtsSceneRequestSceneAdvanceSetting advanceSetting() { DARABONBA_PTR_GET(advanceSetting_, Models::SavePtsSceneRequestSceneAdvanceSetting) };
    inline SavePtsSceneRequestScene& setAdvanceSetting(const Models::SavePtsSceneRequestSceneAdvanceSetting & advanceSetting) { DARABONBA_PTR_SET_VALUE(advanceSetting_, advanceSetting) };
    inline SavePtsSceneRequestScene& setAdvanceSetting(Models::SavePtsSceneRequestSceneAdvanceSetting && advanceSetting) { DARABONBA_PTR_SET_RVALUE(advanceSetting_, advanceSetting) };


    // fileParameterList Field Functions 
    bool hasFileParameterList() const { return this->fileParameterList_ != nullptr;};
    void deleteFileParameterList() { this->fileParameterList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneFileParameterList> & fileParameterList() const { DARABONBA_PTR_GET_CONST(fileParameterList_, vector<Models::SavePtsSceneRequestSceneFileParameterList>) };
    inline vector<Models::SavePtsSceneRequestSceneFileParameterList> fileParameterList() { DARABONBA_PTR_GET(fileParameterList_, vector<Models::SavePtsSceneRequestSceneFileParameterList>) };
    inline SavePtsSceneRequestScene& setFileParameterList(const vector<Models::SavePtsSceneRequestSceneFileParameterList> & fileParameterList) { DARABONBA_PTR_SET_VALUE(fileParameterList_, fileParameterList) };
    inline SavePtsSceneRequestScene& setFileParameterList(vector<Models::SavePtsSceneRequestSceneFileParameterList> && fileParameterList) { DARABONBA_PTR_SET_RVALUE(fileParameterList_, fileParameterList) };


    // globalParameterList Field Functions 
    bool hasGlobalParameterList() const { return this->globalParameterList_ != nullptr;};
    void deleteGlobalParameterList() { this->globalParameterList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneGlobalParameterList> & globalParameterList() const { DARABONBA_PTR_GET_CONST(globalParameterList_, vector<Models::SavePtsSceneRequestSceneGlobalParameterList>) };
    inline vector<Models::SavePtsSceneRequestSceneGlobalParameterList> globalParameterList() { DARABONBA_PTR_GET(globalParameterList_, vector<Models::SavePtsSceneRequestSceneGlobalParameterList>) };
    inline SavePtsSceneRequestScene& setGlobalParameterList(const vector<Models::SavePtsSceneRequestSceneGlobalParameterList> & globalParameterList) { DARABONBA_PTR_SET_VALUE(globalParameterList_, globalParameterList) };
    inline SavePtsSceneRequestScene& setGlobalParameterList(vector<Models::SavePtsSceneRequestSceneGlobalParameterList> && globalParameterList) { DARABONBA_PTR_SET_RVALUE(globalParameterList_, globalParameterList) };


    // loadConfig Field Functions 
    bool hasLoadConfig() const { return this->loadConfig_ != nullptr;};
    void deleteLoadConfig() { this->loadConfig_ = nullptr;};
    inline const Models::SavePtsSceneRequestSceneLoadConfig & loadConfig() const { DARABONBA_PTR_GET_CONST(loadConfig_, Models::SavePtsSceneRequestSceneLoadConfig) };
    inline Models::SavePtsSceneRequestSceneLoadConfig loadConfig() { DARABONBA_PTR_GET(loadConfig_, Models::SavePtsSceneRequestSceneLoadConfig) };
    inline SavePtsSceneRequestScene& setLoadConfig(const Models::SavePtsSceneRequestSceneLoadConfig & loadConfig) { DARABONBA_PTR_SET_VALUE(loadConfig_, loadConfig) };
    inline SavePtsSceneRequestScene& setLoadConfig(Models::SavePtsSceneRequestSceneLoadConfig && loadConfig) { DARABONBA_PTR_SET_RVALUE(loadConfig_, loadConfig) };


    // relationList Field Functions 
    bool hasRelationList() const { return this->relationList_ != nullptr;};
    void deleteRelationList() { this->relationList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneRelationList> & relationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<Models::SavePtsSceneRequestSceneRelationList>) };
    inline vector<Models::SavePtsSceneRequestSceneRelationList> relationList() { DARABONBA_PTR_GET(relationList_, vector<Models::SavePtsSceneRequestSceneRelationList>) };
    inline SavePtsSceneRequestScene& setRelationList(const vector<Models::SavePtsSceneRequestSceneRelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
    inline SavePtsSceneRequestScene& setRelationList(vector<Models::SavePtsSceneRequestSceneRelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline SavePtsSceneRequestScene& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline SavePtsSceneRequestScene& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


  protected:
    // The advanced settings.
    std::shared_ptr<Models::SavePtsSceneRequestSceneAdvanceSetting> advanceSetting_ = nullptr;
    // The file parameters.
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneFileParameterList>> fileParameterList_ = nullptr;
    // The global customization parameters.
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneGlobalParameterList>> globalParameterList_ = nullptr;
    // The load settings.
    // 
    // This parameter is required.
    std::shared_ptr<Models::SavePtsSceneRequestSceneLoadConfig> loadConfig_ = nullptr;
    // The sessions.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneRelationList>> relationList_ = nullptr;
    // The ID of the scenario. To save a new scenario, leave this parameter empty. To update an existing scenario, specify the ID of the scenario.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The name of the scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
