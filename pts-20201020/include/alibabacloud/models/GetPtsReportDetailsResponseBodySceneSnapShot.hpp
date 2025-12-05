// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotRelationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShot& obj) { 
      DARABONBA_PTR_TO_JSON(AdvanceSetting, advanceSetting_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileParameterList, fileParameterList_);
      DARABONBA_PTR_TO_JSON(GlobalParameterList, globalParameterList_);
      DARABONBA_PTR_TO_JSON(LoadConfig, loadConfig_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RelationList, relationList_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShot& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvanceSetting, advanceSetting_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileParameterList, fileParameterList_);
      DARABONBA_PTR_FROM_JSON(GlobalParameterList, globalParameterList_);
      DARABONBA_PTR_FROM_JSON(LoadConfig, loadConfig_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShot() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShot(const GetPtsReportDetailsResponseBodySceneSnapShot &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShot(GetPtsReportDetailsResponseBodySceneSnapShot &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShot() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShot& operator=(const GetPtsReportDetailsResponseBodySceneSnapShot &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShot& operator=(GetPtsReportDetailsResponseBodySceneSnapShot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advanceSetting_ == nullptr
        && return this->createTime_ == nullptr && return this->fileParameterList_ == nullptr && return this->globalParameterList_ == nullptr && return this->loadConfig_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->relationList_ == nullptr && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr && return this->status_ == nullptr; };
    // advanceSetting Field Functions 
    bool hasAdvanceSetting() const { return this->advanceSetting_ != nullptr;};
    void deleteAdvanceSetting() { this->advanceSetting_ = nullptr;};
    inline const Models::GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting & advanceSetting() const { DARABONBA_PTR_GET_CONST(advanceSetting_, Models::GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting) };
    inline Models::GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting advanceSetting() { DARABONBA_PTR_GET(advanceSetting_, Models::GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setAdvanceSetting(const Models::GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting & advanceSetting) { DARABONBA_PTR_SET_VALUE(advanceSetting_, advanceSetting) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setAdvanceSetting(Models::GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting && advanceSetting) { DARABONBA_PTR_SET_RVALUE(advanceSetting_, advanceSetting) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileParameterList Field Functions 
    bool hasFileParameterList() const { return this->fileParameterList_ != nullptr;};
    void deleteFileParameterList() { this->fileParameterList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList> & fileParameterList() const { DARABONBA_PTR_GET_CONST(fileParameterList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList> fileParameterList() { DARABONBA_PTR_GET(fileParameterList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setFileParameterList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList> & fileParameterList) { DARABONBA_PTR_SET_VALUE(fileParameterList_, fileParameterList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setFileParameterList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList> && fileParameterList) { DARABONBA_PTR_SET_RVALUE(fileParameterList_, fileParameterList) };


    // globalParameterList Field Functions 
    bool hasGlobalParameterList() const { return this->globalParameterList_ != nullptr;};
    void deleteGlobalParameterList() { this->globalParameterList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList> & globalParameterList() const { DARABONBA_PTR_GET_CONST(globalParameterList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList> globalParameterList() { DARABONBA_PTR_GET(globalParameterList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setGlobalParameterList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList> & globalParameterList) { DARABONBA_PTR_SET_VALUE(globalParameterList_, globalParameterList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setGlobalParameterList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList> && globalParameterList) { DARABONBA_PTR_SET_RVALUE(globalParameterList_, globalParameterList) };


    // loadConfig Field Functions 
    bool hasLoadConfig() const { return this->loadConfig_ != nullptr;};
    void deleteLoadConfig() { this->loadConfig_ = nullptr;};
    inline const Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig & loadConfig() const { DARABONBA_PTR_GET_CONST(loadConfig_, Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig) };
    inline Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig loadConfig() { DARABONBA_PTR_GET(loadConfig_, Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setLoadConfig(const Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig & loadConfig) { DARABONBA_PTR_SET_VALUE(loadConfig_, loadConfig) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setLoadConfig(Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig && loadConfig) { DARABONBA_PTR_SET_RVALUE(loadConfig_, loadConfig) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // relationList Field Functions 
    bool hasRelationList() const { return this->relationList_ != nullptr;};
    void deleteRelationList() { this->relationList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationList> & relationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationList> relationList() { DARABONBA_PTR_GET(relationList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setRelationList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setRelationList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The advanced settings of the scenario.
    std::shared_ptr<Models::GetPtsReportDetailsResponseBodySceneSnapShotAdvanceSetting> advanceSetting_ = nullptr;
    // The time when the scenario was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The file used in the scenario.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotFileParameterList>> fileParameterList_ = nullptr;
    // The global parameters.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotGlobalParameterList>> globalParameterList_ = nullptr;
    // The load settings.
    std::shared_ptr<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig> loadConfig_ = nullptr;
    // The last modification time of the scenario.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The sessions.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationList>> relationList_ = nullptr;
    // The ID of the scenario.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The name of the scenario.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The status of the scenario.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
