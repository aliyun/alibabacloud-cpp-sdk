// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEQUERYSCENELISTBYNAMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEQUERYSCENELISTBYNAMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DsgSceneQuerySceneListByNameResponseBodyDataProjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgSceneQuerySceneListByNameResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneQuerySceneListByNameResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SceneLevel, sceneLevel_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneQuerySceneListByNameResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SceneLevel, sceneLevel_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    DsgSceneQuerySceneListByNameResponseBodyData() = default ;
    DsgSceneQuerySceneListByNameResponseBodyData(const DsgSceneQuerySceneListByNameResponseBodyData &) = default ;
    DsgSceneQuerySceneListByNameResponseBodyData(DsgSceneQuerySceneListByNameResponseBodyData &&) = default ;
    DsgSceneQuerySceneListByNameResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneQuerySceneListByNameResponseBodyData() = default ;
    DsgSceneQuerySceneListByNameResponseBodyData& operator=(const DsgSceneQuerySceneListByNameResponseBodyData &) = default ;
    DsgSceneQuerySceneListByNameResponseBodyData& operator=(DsgSceneQuerySceneListByNameResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->children_ != nullptr
        && this->desc_ != nullptr && this->id_ != nullptr && this->projects_ != nullptr && this->sceneCode_ != nullptr && this->sceneLevel_ != nullptr
        && this->sceneName_ != nullptr && this->userGroups_ != nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Darabonba::Json> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> children() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<Models::DsgSceneQuerySceneListByNameResponseBodyDataProjects> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Models::DsgSceneQuerySceneListByNameResponseBodyDataProjects>) };
    inline vector<Models::DsgSceneQuerySceneListByNameResponseBodyDataProjects> projects() { DARABONBA_PTR_GET(projects_, vector<Models::DsgSceneQuerySceneListByNameResponseBodyDataProjects>) };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setProjects(const vector<Models::DsgSceneQuerySceneListByNameResponseBodyDataProjects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setProjects(vector<Models::DsgSceneQuerySceneListByNameResponseBodyDataProjects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sceneLevel Field Functions 
    bool hasSceneLevel() const { return this->sceneLevel_ != nullptr;};
    void deleteSceneLevel() { this->sceneLevel_ = nullptr;};
    inline int32_t sceneLevel() const { DARABONBA_PTR_GET_DEFAULT(sceneLevel_, 0) };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setSceneLevel(int32_t sceneLevel) { DARABONBA_PTR_SET_VALUE(sceneLevel_, sceneLevel) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline string userGroups() const { DARABONBA_PTR_GET_DEFAULT(userGroups_, "") };
    inline DsgSceneQuerySceneListByNameResponseBodyData& setUserGroups(string userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };


  protected:
    // The information about multiple levels of data masking scenarios.
    std::shared_ptr<vector<Darabonba::Json>> children_ = nullptr;
    // The description of the data masking scenario.
    std::shared_ptr<string> desc_ = nullptr;
    // The ID of the data masking scenario.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The information about the compute engine for which the data masking scenario takes effect.
    std::shared_ptr<vector<Models::DsgSceneQuerySceneListByNameResponseBodyDataProjects>> projects_ = nullptr;
    // The code of the level-1 data masking scenario. Valid values:
    // 
    // *   dataworks_display_desense_code: masking of displayed data in DataStudio and Data Map
    // *   maxcompute_desense_code: data masking at the MaxCompute compute engine layer
    // *   maxcompute_new_desense_code: data masking at the MaxCompute compute engine layer (new)
    // *   hologres_display_desense_code: data masking at the Hologres compute engine layer
    // *   dataworks_data_integration_desense_code: static data masking in Data Integration
    // *   dataworks_analysis_desense_code: masking of displayed data in DataAnalysis
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The level of the data masking scenario. Valid values:
    // 
    // *   0: level-1 data masking scenario
    // *   1: level-2 data masking scenario
    std::shared_ptr<int32_t> sceneLevel_ = nullptr;
    // The name of the data masking scenario.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The list of user groups in the data masking scenario. Separate user groups with commas (,).
    std::shared_ptr<string> userGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
