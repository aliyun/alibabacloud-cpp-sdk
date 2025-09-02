// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUESTSCENES_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUESTSCENES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DsgSceneAddOrUpdateSceneRequestScenesProjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgSceneAddOrUpdateSceneRequestScenes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneAddOrUpdateSceneRequestScenes& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(projects, projects_);
      DARABONBA_PTR_TO_JSON(sceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneAddOrUpdateSceneRequestScenes& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(projects, projects_);
      DARABONBA_PTR_FROM_JSON(sceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
    };
    DsgSceneAddOrUpdateSceneRequestScenes() = default ;
    DsgSceneAddOrUpdateSceneRequestScenes(const DsgSceneAddOrUpdateSceneRequestScenes &) = default ;
    DsgSceneAddOrUpdateSceneRequestScenes(DsgSceneAddOrUpdateSceneRequestScenes &&) = default ;
    DsgSceneAddOrUpdateSceneRequestScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneAddOrUpdateSceneRequestScenes() = default ;
    DsgSceneAddOrUpdateSceneRequestScenes& operator=(const DsgSceneAddOrUpdateSceneRequestScenes &) = default ;
    DsgSceneAddOrUpdateSceneRequestScenes& operator=(DsgSceneAddOrUpdateSceneRequestScenes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->id_ != nullptr && this->projects_ != nullptr && this->sceneCode_ != nullptr && this->sceneName_ != nullptr && this->userGroupIds_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<Models::DsgSceneAddOrUpdateSceneRequestScenesProjects> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Models::DsgSceneAddOrUpdateSceneRequestScenesProjects>) };
    inline vector<Models::DsgSceneAddOrUpdateSceneRequestScenesProjects> projects() { DARABONBA_PTR_GET(projects_, vector<Models::DsgSceneAddOrUpdateSceneRequestScenesProjects>) };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setProjects(const vector<Models::DsgSceneAddOrUpdateSceneRequestScenesProjects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setProjects(vector<Models::DsgSceneAddOrUpdateSceneRequestScenesProjects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<int64_t> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<int64_t>) };
    inline vector<int64_t> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<int64_t>) };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setUserGroupIds(const vector<int64_t> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline DsgSceneAddOrUpdateSceneRequestScenes& setUserGroupIds(vector<int64_t> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    // The description.
    std::shared_ptr<string> desc_ = nullptr;
    // The ID of the level-2 data masking scenario.
    // 
    // *   If you do not configure this parameter, the current operation is to add a level-2 data masking scenario.
    // *   If you configure this parameter, the current operation is to modify a level-2 data masking scenario. You can call the [DsgSceneQuerySceneListByName](https://help.aliyun.com/document_detail/2786322.html) operation to query the ID of the level-2 data masking scenario.
    std::shared_ptr<string> id_ = nullptr;
    // The information about the compute engine for which the data masking scenario takes effect.
    std::shared_ptr<vector<Models::DsgSceneAddOrUpdateSceneRequestScenesProjects>> projects_ = nullptr;
    // The code of the level-1 data masking scenario to which the level-2 data masking scenario belongs. Valid values:
    // 
    // *   dataworks_display_desense_code: masking of displayed data in DataStudio and Data Map
    // *   maxcompute_desense_code: data masking at the MaxCompute compute engine layer
    // *   maxcompute_new_desense_code: data masking at the MaxCompute compute engine layer (new)
    // *   dataworks_analysis_desense_code: masking of displayed data in DataAnalysis
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The name of the level-2 data masking scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The information about the user group for which the data masking scenario takes effect.
    std::shared_ptr<vector<int64_t>> userGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
