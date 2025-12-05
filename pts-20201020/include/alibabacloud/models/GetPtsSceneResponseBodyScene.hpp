// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENE_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneAdvanceSetting.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneFileParameterList.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneGlobalParameterList.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneHeaders.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneLoadConfig.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneRelationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodyScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodyScene& obj) { 
      DARABONBA_PTR_TO_JSON(AdvanceSetting, advanceSetting_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FileParameterList, fileParameterList_);
      DARABONBA_PTR_TO_JSON(GlobalParameterList, globalParameterList_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(LoadConfig, loadConfig_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RelationList, relationList_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodyScene& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvanceSetting, advanceSetting_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FileParameterList, fileParameterList_);
      DARABONBA_PTR_FROM_JSON(GlobalParameterList, globalParameterList_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(LoadConfig, loadConfig_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetPtsSceneResponseBodyScene() = default ;
    GetPtsSceneResponseBodyScene(const GetPtsSceneResponseBodyScene &) = default ;
    GetPtsSceneResponseBodyScene(GetPtsSceneResponseBodyScene &&) = default ;
    GetPtsSceneResponseBodyScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodyScene() = default ;
    GetPtsSceneResponseBodyScene& operator=(const GetPtsSceneResponseBodyScene &) = default ;
    GetPtsSceneResponseBodyScene& operator=(GetPtsSceneResponseBodyScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advanceSetting_ == nullptr
        && return this->createTime_ == nullptr && return this->fileParameterList_ == nullptr && return this->globalParameterList_ == nullptr && return this->headers_ == nullptr && return this->loadConfig_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->relationList_ == nullptr && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr && return this->status_ == nullptr; };
    // advanceSetting Field Functions 
    bool hasAdvanceSetting() const { return this->advanceSetting_ != nullptr;};
    void deleteAdvanceSetting() { this->advanceSetting_ = nullptr;};
    inline const Models::GetPtsSceneResponseBodySceneAdvanceSetting & advanceSetting() const { DARABONBA_PTR_GET_CONST(advanceSetting_, Models::GetPtsSceneResponseBodySceneAdvanceSetting) };
    inline Models::GetPtsSceneResponseBodySceneAdvanceSetting advanceSetting() { DARABONBA_PTR_GET(advanceSetting_, Models::GetPtsSceneResponseBodySceneAdvanceSetting) };
    inline GetPtsSceneResponseBodyScene& setAdvanceSetting(const Models::GetPtsSceneResponseBodySceneAdvanceSetting & advanceSetting) { DARABONBA_PTR_SET_VALUE(advanceSetting_, advanceSetting) };
    inline GetPtsSceneResponseBodyScene& setAdvanceSetting(Models::GetPtsSceneResponseBodySceneAdvanceSetting && advanceSetting) { DARABONBA_PTR_SET_RVALUE(advanceSetting_, advanceSetting) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPtsSceneResponseBodyScene& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // fileParameterList Field Functions 
    bool hasFileParameterList() const { return this->fileParameterList_ != nullptr;};
    void deleteFileParameterList() { this->fileParameterList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneFileParameterList> & fileParameterList() const { DARABONBA_PTR_GET_CONST(fileParameterList_, vector<Models::GetPtsSceneResponseBodySceneFileParameterList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneFileParameterList> fileParameterList() { DARABONBA_PTR_GET(fileParameterList_, vector<Models::GetPtsSceneResponseBodySceneFileParameterList>) };
    inline GetPtsSceneResponseBodyScene& setFileParameterList(const vector<Models::GetPtsSceneResponseBodySceneFileParameterList> & fileParameterList) { DARABONBA_PTR_SET_VALUE(fileParameterList_, fileParameterList) };
    inline GetPtsSceneResponseBodyScene& setFileParameterList(vector<Models::GetPtsSceneResponseBodySceneFileParameterList> && fileParameterList) { DARABONBA_PTR_SET_RVALUE(fileParameterList_, fileParameterList) };


    // globalParameterList Field Functions 
    bool hasGlobalParameterList() const { return this->globalParameterList_ != nullptr;};
    void deleteGlobalParameterList() { this->globalParameterList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneGlobalParameterList> & globalParameterList() const { DARABONBA_PTR_GET_CONST(globalParameterList_, vector<Models::GetPtsSceneResponseBodySceneGlobalParameterList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneGlobalParameterList> globalParameterList() { DARABONBA_PTR_GET(globalParameterList_, vector<Models::GetPtsSceneResponseBodySceneGlobalParameterList>) };
    inline GetPtsSceneResponseBodyScene& setGlobalParameterList(const vector<Models::GetPtsSceneResponseBodySceneGlobalParameterList> & globalParameterList) { DARABONBA_PTR_SET_VALUE(globalParameterList_, globalParameterList) };
    inline GetPtsSceneResponseBodyScene& setGlobalParameterList(vector<Models::GetPtsSceneResponseBodySceneGlobalParameterList> && globalParameterList) { DARABONBA_PTR_SET_RVALUE(globalParameterList_, globalParameterList) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<Models::GetPtsSceneResponseBodySceneHeaders>) };
    inline vector<Models::GetPtsSceneResponseBodySceneHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<Models::GetPtsSceneResponseBodySceneHeaders>) };
    inline GetPtsSceneResponseBodyScene& setHeaders(const vector<Models::GetPtsSceneResponseBodySceneHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetPtsSceneResponseBodyScene& setHeaders(vector<Models::GetPtsSceneResponseBodySceneHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // loadConfig Field Functions 
    bool hasLoadConfig() const { return this->loadConfig_ != nullptr;};
    void deleteLoadConfig() { this->loadConfig_ = nullptr;};
    inline const Models::GetPtsSceneResponseBodySceneLoadConfig & loadConfig() const { DARABONBA_PTR_GET_CONST(loadConfig_, Models::GetPtsSceneResponseBodySceneLoadConfig) };
    inline Models::GetPtsSceneResponseBodySceneLoadConfig loadConfig() { DARABONBA_PTR_GET(loadConfig_, Models::GetPtsSceneResponseBodySceneLoadConfig) };
    inline GetPtsSceneResponseBodyScene& setLoadConfig(const Models::GetPtsSceneResponseBodySceneLoadConfig & loadConfig) { DARABONBA_PTR_SET_VALUE(loadConfig_, loadConfig) };
    inline GetPtsSceneResponseBodyScene& setLoadConfig(Models::GetPtsSceneResponseBodySceneLoadConfig && loadConfig) { DARABONBA_PTR_SET_RVALUE(loadConfig_, loadConfig) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetPtsSceneResponseBodyScene& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // relationList Field Functions 
    bool hasRelationList() const { return this->relationList_ != nullptr;};
    void deleteRelationList() { this->relationList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneRelationList> & relationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<Models::GetPtsSceneResponseBodySceneRelationList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneRelationList> relationList() { DARABONBA_PTR_GET(relationList_, vector<Models::GetPtsSceneResponseBodySceneRelationList>) };
    inline GetPtsSceneResponseBodyScene& setRelationList(const vector<Models::GetPtsSceneResponseBodySceneRelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
    inline GetPtsSceneResponseBodyScene& setRelationList(vector<Models::GetPtsSceneResponseBodySceneRelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetPtsSceneResponseBodyScene& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline GetPtsSceneResponseBodyScene& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPtsSceneResponseBodyScene& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The advanced settings.
    std::shared_ptr<Models::GetPtsSceneResponseBodySceneAdvanceSetting> advanceSetting_ = nullptr;
    // The creation time of the scenario.
    std::shared_ptr<string> createTime_ = nullptr;
    // The file parameters.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneFileParameterList>> fileParameterList_ = nullptr;
    // Global parameters
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneGlobalParameterList>> globalParameterList_ = nullptr;
    // The global headers for the scenario.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneHeaders>> headers_ = nullptr;
    // The load settings.
    std::shared_ptr<Models::GetPtsSceneResponseBodySceneLoadConfig> loadConfig_ = nullptr;
    // The last modification time of the scenario.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The sessions.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneRelationList>> relationList_ = nullptr;
    // The ID of the scenario.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The name of the scenario
    std::shared_ptr<string> sceneName_ = nullptr;
    // The status of the scenario.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
