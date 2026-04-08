// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEADDORUPDATESCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgSceneAddOrUpdateSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneAddOrUpdateSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scenes, scenes_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneAddOrUpdateSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scenes, scenes_);
    };
    DsgSceneAddOrUpdateSceneRequest() = default ;
    DsgSceneAddOrUpdateSceneRequest(const DsgSceneAddOrUpdateSceneRequest &) = default ;
    DsgSceneAddOrUpdateSceneRequest(DsgSceneAddOrUpdateSceneRequest &&) = default ;
    DsgSceneAddOrUpdateSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneAddOrUpdateSceneRequest() = default ;
    DsgSceneAddOrUpdateSceneRequest& operator=(const DsgSceneAddOrUpdateSceneRequest &) = default ;
    DsgSceneAddOrUpdateSceneRequest& operator=(DsgSceneAddOrUpdateSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scenes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scenes& obj) { 
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(projects, projects_);
        DARABONBA_PTR_TO_JSON(sceneCode, sceneCode_);
        DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
      };
      friend void from_json(const Darabonba::Json& j, Scenes& obj) { 
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(projects, projects_);
        DARABONBA_PTR_FROM_JSON(sceneCode, sceneCode_);
        DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
      };
      Scenes() = default ;
      Scenes(const Scenes &) = default ;
      Scenes(Scenes &&) = default ;
      Scenes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scenes() = default ;
      Scenes& operator=(const Scenes &) = default ;
      Scenes& operator=(Scenes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Projects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Projects& obj) { 
          DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(dbType, dbType_);
          DARABONBA_PTR_TO_JSON(projectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, Projects& obj) { 
          DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(dbType, dbType_);
          DARABONBA_PTR_FROM_JSON(projectName, projectName_);
        };
        Projects() = default ;
        Projects(const Projects &) = default ;
        Projects(Projects &&) = default ;
        Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Projects() = default ;
        Projects& operator=(const Projects &) = default ;
        Projects& operator=(Projects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dbType_ == nullptr && this->projectName_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Projects& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline Projects& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Projects& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      protected:
        // If the data masking scenario takes effect for an E-MapReduce (EMR) compute engine, enter the ID of an EMR cluster. This parameter is required only when you use an EMR compute engine.
        shared_ptr<string> clusterId_ {};
        // The type of the compute engine for which the data masking scenario takes effect. Valid values:
        // 
        // *   ODPS: ODPS.ODPS
        // *   HOLO: HOLO.POSTGRES
        // *   EMR: EMR
        shared_ptr<string> dbType_ {};
        // The name of the compute engine instance for which the data masking scenario takes effect.
        shared_ptr<string> projectName_ {};
      };

      virtual bool empty() const override { return this->desc_ == nullptr
        && this->id_ == nullptr && this->projects_ == nullptr && this->sceneCode_ == nullptr && this->sceneName_ == nullptr && this->userGroupIds_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Scenes& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Scenes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<Scenes::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Scenes::Projects>) };
      inline vector<Scenes::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<Scenes::Projects>) };
      inline Scenes& setProjects(const vector<Scenes::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline Scenes& setProjects(vector<Scenes::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      // sceneCode Field Functions 
      bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
      void deleteSceneCode() { this->sceneCode_ = nullptr;};
      inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
      inline Scenes& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Scenes& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<int64_t> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<int64_t>) };
      inline vector<int64_t> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<int64_t>) };
      inline Scenes& setUserGroupIds(const vector<int64_t> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline Scenes& setUserGroupIds(vector<int64_t> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    protected:
      // The description.
      shared_ptr<string> desc_ {};
      // The ID of the level-2 data masking scenario.
      // 
      // *   If you do not configure this parameter, the current operation is to add a level-2 data masking scenario.
      // *   If you configure this parameter, the current operation is to modify a level-2 data masking scenario. You can call the [DsgSceneQuerySceneListByName](https://help.aliyun.com/document_detail/2786322.html) operation to query the ID of the level-2 data masking scenario.
      shared_ptr<string> id_ {};
      // The information about the compute engine for which the data masking scenario takes effect.
      shared_ptr<vector<Scenes::Projects>> projects_ {};
      // The code of the level-1 data masking scenario to which the level-2 data masking scenario belongs. Valid values:
      // 
      // *   dataworks_display_desense_code: masking of displayed data in DataStudio and Data Map
      // *   maxcompute_desense_code: data masking at the MaxCompute compute engine layer
      // *   maxcompute_new_desense_code: data masking at the MaxCompute compute engine layer (new)
      // *   dataworks_analysis_desense_code: masking of displayed data in DataAnalysis
      // 
      // This parameter is required.
      shared_ptr<string> sceneCode_ {};
      // The name of the level-2 data masking scenario.
      // 
      // This parameter is required.
      shared_ptr<string> sceneName_ {};
      // The information about the user group for which the data masking scenario takes effect.
      shared_ptr<vector<int64_t>> userGroupIds_ {};
    };

    virtual bool empty() const override { return this->scenes_ == nullptr; };
    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline const vector<DsgSceneAddOrUpdateSceneRequest::Scenes> & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<DsgSceneAddOrUpdateSceneRequest::Scenes>) };
    inline vector<DsgSceneAddOrUpdateSceneRequest::Scenes> getScenes() { DARABONBA_PTR_GET(scenes_, vector<DsgSceneAddOrUpdateSceneRequest::Scenes>) };
    inline DsgSceneAddOrUpdateSceneRequest& setScenes(const vector<DsgSceneAddOrUpdateSceneRequest::Scenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
    inline DsgSceneAddOrUpdateSceneRequest& setScenes(vector<DsgSceneAddOrUpdateSceneRequest::Scenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


  protected:
    // The information about the level-2 data masking scenario.
    // 
    // This parameter is required.
    shared_ptr<vector<DsgSceneAddOrUpdateSceneRequest::Scenes>> scenes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
