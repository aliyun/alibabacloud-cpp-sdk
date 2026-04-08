// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEQUERYSCENELISTBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEQUERYSCENELISTBYNAMERESPONSEBODY_HPP_
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
  class DsgSceneQuerySceneListByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgSceneQuerySceneListByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DsgSceneQuerySceneListByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DsgSceneQuerySceneListByNameResponseBody() = default ;
    DsgSceneQuerySceneListByNameResponseBody(const DsgSceneQuerySceneListByNameResponseBody &) = default ;
    DsgSceneQuerySceneListByNameResponseBody(DsgSceneQuerySceneListByNameResponseBody &&) = default ;
    DsgSceneQuerySceneListByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgSceneQuerySceneListByNameResponseBody() = default ;
    DsgSceneQuerySceneListByNameResponseBody& operator=(const DsgSceneQuerySceneListByNameResponseBody &) = default ;
    DsgSceneQuerySceneListByNameResponseBody& operator=(DsgSceneQuerySceneListByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Children, children_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Projects, projects_);
        DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
        DARABONBA_PTR_TO_JSON(SceneLevel, sceneLevel_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
        DARABONBA_PTR_TO_JSON(scenceDbType, scenceDbType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Children, children_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Projects, projects_);
        DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
        DARABONBA_PTR_FROM_JSON(SceneLevel, sceneLevel_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
        DARABONBA_PTR_FROM_JSON(scenceDbType, scenceDbType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Projects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Projects& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, Projects& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
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
        // The ID of the EMR cluster. This parameter is returned only when the data scope that takes effect in the data masking scenario is an EMR compute engine.
        shared_ptr<string> clusterId_ {};
        // The type of the compute engine. Valid values:
        // 
        // *   ODPS: ODPS.ODPS
        // *   HOLO: HOLO.POSTGRES
        // *   EMR: EMR
        shared_ptr<string> dbType_ {};
        // The name of the compute engine.
        shared_ptr<string> projectName_ {};
      };

      virtual bool empty() const override { return this->children_ == nullptr
        && this->desc_ == nullptr && this->id_ == nullptr && this->projects_ == nullptr && this->sceneCode_ == nullptr && this->sceneLevel_ == nullptr
        && this->sceneName_ == nullptr && this->userGroups_ == nullptr && this->scenceDbType_ == nullptr; };
      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<Darabonba::Json> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getChildren() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
      inline Data& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline Data& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Data& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<Data::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Data::Projects>) };
      inline vector<Data::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<Data::Projects>) };
      inline Data& setProjects(const vector<Data::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline Data& setProjects(vector<Data::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      // sceneCode Field Functions 
      bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
      void deleteSceneCode() { this->sceneCode_ = nullptr;};
      inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
      inline Data& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


      // sceneLevel Field Functions 
      bool hasSceneLevel() const { return this->sceneLevel_ != nullptr;};
      void deleteSceneLevel() { this->sceneLevel_ = nullptr;};
      inline int32_t getSceneLevel() const { DARABONBA_PTR_GET_DEFAULT(sceneLevel_, 0) };
      inline Data& setSceneLevel(int32_t sceneLevel) { DARABONBA_PTR_SET_VALUE(sceneLevel_, sceneLevel) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Data& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // userGroups Field Functions 
      bool hasUserGroups() const { return this->userGroups_ != nullptr;};
      void deleteUserGroups() { this->userGroups_ = nullptr;};
      inline string getUserGroups() const { DARABONBA_PTR_GET_DEFAULT(userGroups_, "") };
      inline Data& setUserGroups(string userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };


      // scenceDbType Field Functions 
      bool hasScenceDbType() const { return this->scenceDbType_ != nullptr;};
      void deleteScenceDbType() { this->scenceDbType_ = nullptr;};
      inline string getScenceDbType() const { DARABONBA_PTR_GET_DEFAULT(scenceDbType_, "") };
      inline Data& setScenceDbType(string scenceDbType) { DARABONBA_PTR_SET_VALUE(scenceDbType_, scenceDbType) };


    protected:
      // The information about multiple levels of data masking scenarios.
      shared_ptr<vector<Darabonba::Json>> children_ {};
      // The description of the data masking scenario.
      shared_ptr<string> desc_ {};
      // The ID of the data masking scenario.
      shared_ptr<int64_t> id_ {};
      // The information about the compute engine for which the data masking scenario takes effect.
      shared_ptr<vector<Data::Projects>> projects_ {};
      // The code of the level-1 data masking scenario. Valid values:
      // 
      // *   dataworks_display_desense_code: masking of displayed data in DataStudio and Data Map
      // *   maxcompute_desense_code: data masking at the MaxCompute compute engine layer
      // *   maxcompute_new_desense_code: data masking at the MaxCompute compute engine layer (new)
      // *   hologres_display_desense_code: data masking at the Hologres compute engine layer
      // *   dataworks_data_integration_desense_code: static data masking in Data Integration
      // *   dataworks_analysis_desense_code: masking of displayed data in DataAnalysis
      shared_ptr<string> sceneCode_ {};
      // The level of the data masking scenario. Valid values:
      // 
      // *   0: level-1 data masking scenario
      // *   1: level-2 data masking scenario
      shared_ptr<int32_t> sceneLevel_ {};
      // The name of the data masking scenario.
      shared_ptr<string> sceneName_ {};
      // The list of user groups in the data masking scenario. Separate user groups with commas (,).
      shared_ptr<string> userGroups_ {};
      shared_ptr<string> scenceDbType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DsgSceneQuerySceneListByNameResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DsgSceneQuerySceneListByNameResponseBody::Data>) };
    inline vector<DsgSceneQuerySceneListByNameResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DsgSceneQuerySceneListByNameResponseBody::Data>) };
    inline DsgSceneQuerySceneListByNameResponseBody& setData(const vector<DsgSceneQuerySceneListByNameResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DsgSceneQuerySceneListByNameResponseBody& setData(vector<DsgSceneQuerySceneListByNameResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DsgSceneQuerySceneListByNameResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DsgSceneQuerySceneListByNameResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DsgSceneQuerySceneListByNameResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DsgSceneQuerySceneListByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DsgSceneQuerySceneListByNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<vector<DsgSceneQuerySceneListByNameResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
