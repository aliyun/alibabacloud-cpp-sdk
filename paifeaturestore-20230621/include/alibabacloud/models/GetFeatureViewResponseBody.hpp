// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetFeatureViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_TO_JSON(FeatureEntityName, featureEntityName_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtSyncTime, gmtSyncTime_);
      DARABONBA_PTR_TO_JSON(JoinId, joinId_);
      DARABONBA_PTR_TO_JSON(LastSyncConfig, lastSyncConfig_);
      DARABONBA_PTR_TO_JSON(MockTableName, mockTableName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(PublishTableScript, publishTableScript_);
      DARABONBA_PTR_TO_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_TO_JSON(RegisterDatasourceName, registerDatasourceName_);
      DARABONBA_PTR_TO_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncOnlineTable, syncOnlineTable_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WriteMethod, writeMethod_);
      DARABONBA_PTR_TO_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_FROM_JSON(FeatureEntityName, featureEntityName_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSyncTime, gmtSyncTime_);
      DARABONBA_PTR_FROM_JSON(JoinId, joinId_);
      DARABONBA_PTR_FROM_JSON(LastSyncConfig, lastSyncConfig_);
      DARABONBA_PTR_FROM_JSON(MockTableName, mockTableName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(PublishTableScript, publishTableScript_);
      DARABONBA_PTR_FROM_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_FROM_JSON(RegisterDatasourceName, registerDatasourceName_);
      DARABONBA_PTR_FROM_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncOnlineTable, syncOnlineTable_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WriteMethod, writeMethod_);
      DARABONBA_PTR_FROM_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    GetFeatureViewResponseBody() = default ;
    GetFeatureViewResponseBody(const GetFeatureViewResponseBody &) = default ;
    GetFeatureViewResponseBody(GetFeatureViewResponseBody &&) = default ;
    GetFeatureViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureViewResponseBody() = default ;
    GetFeatureViewResponseBody& operator=(const GetFeatureViewResponseBody &) = default ;
    GetFeatureViewResponseBody& operator=(GetFeatureViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Transform, transform_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Transform, transform_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Transform : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Transform& obj) { 
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(LLMConfigId, LLMConfigId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Transform& obj) { 
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(LLMConfigId, LLMConfigId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Transform() = default ;
        Transform(const Transform &) = default ;
        Transform(Transform &&) = default ;
        Transform(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Transform() = default ;
        Transform& operator=(const Transform &) = default ;
        Transform& operator=(Transform &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Input : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Input& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Input& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Input() = default ;
          Input(const Input &) = default ;
          Input(Input &&) = default ;
          Input(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Input() = default ;
          Input& operator=(const Input &) = default ;
          Input& operator=(Input &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Input& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->input_ == nullptr
        && this->LLMConfigId_ == nullptr && this->type_ == nullptr; };
        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const vector<Transform::Input> & getInput() const { DARABONBA_PTR_GET_CONST(input_, vector<Transform::Input>) };
        inline vector<Transform::Input> getInput() { DARABONBA_PTR_GET(input_, vector<Transform::Input>) };
        inline Transform& setInput(const vector<Transform::Input> & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline Transform& setInput(vector<Transform::Input> && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        // LLMConfigId Field Functions 
        bool hasLLMConfigId() const { return this->LLMConfigId_ != nullptr;};
        void deleteLLMConfigId() { this->LLMConfigId_ = nullptr;};
        inline int32_t getLLMConfigId() const { DARABONBA_PTR_GET_DEFAULT(LLMConfigId_, 0) };
        inline Transform& setLLMConfigId(int32_t LLMConfigId) { DARABONBA_PTR_SET_VALUE(LLMConfigId_, LLMConfigId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Transform& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<Transform::Input>> input_ {};
        shared_ptr<int32_t> LLMConfigId_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->name_ == nullptr && this->transform_ == nullptr && this->type_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
      inline vector<string> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
      inline Fields& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Fields& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // transform Field Functions 
      bool hasTransform() const { return this->transform_ != nullptr;};
      void deleteTransform() { this->transform_ = nullptr;};
      inline const vector<Fields::Transform> & getTransform() const { DARABONBA_PTR_GET_CONST(transform_, vector<Fields::Transform>) };
      inline vector<Fields::Transform> getTransform() { DARABONBA_PTR_GET(transform_, vector<Fields::Transform>) };
      inline Fields& setTransform(const vector<Fields::Transform> & transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };
      inline Fields& setTransform(vector<Fields::Transform> && transform) { DARABONBA_PTR_SET_RVALUE(transform_, transform) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<string>> attributes_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Fields::Transform>> transform_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->featureEntityId_ == nullptr && this->featureEntityName_ == nullptr && this->fields_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->gmtSyncTime_ == nullptr && this->joinId_ == nullptr && this->lastSyncConfig_ == nullptr && this->mockTableName_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->publishTableScript_ == nullptr && this->registerDatasourceId_ == nullptr
        && this->registerDatasourceName_ == nullptr && this->registerTable_ == nullptr && this->requestId_ == nullptr && this->syncOnlineTable_ == nullptr && this->TTL_ == nullptr
        && this->tags_ == nullptr && this->type_ == nullptr && this->writeMethod_ == nullptr && this->writeToFeatureDB_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetFeatureViewResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // featureEntityId Field Functions 
    bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
    void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
    inline string getFeatureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
    inline GetFeatureViewResponseBody& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


    // featureEntityName Field Functions 
    bool hasFeatureEntityName() const { return this->featureEntityName_ != nullptr;};
    void deleteFeatureEntityName() { this->featureEntityName_ = nullptr;};
    inline string getFeatureEntityName() const { DARABONBA_PTR_GET_DEFAULT(featureEntityName_, "") };
    inline GetFeatureViewResponseBody& setFeatureEntityName(string featureEntityName) { DARABONBA_PTR_SET_VALUE(featureEntityName_, featureEntityName) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetFeatureViewResponseBody::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetFeatureViewResponseBody::Fields>) };
    inline vector<GetFeatureViewResponseBody::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<GetFeatureViewResponseBody::Fields>) };
    inline GetFeatureViewResponseBody& setFields(const vector<GetFeatureViewResponseBody::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetFeatureViewResponseBody& setFields(vector<GetFeatureViewResponseBody::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetFeatureViewResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetFeatureViewResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtSyncTime Field Functions 
    bool hasGmtSyncTime() const { return this->gmtSyncTime_ != nullptr;};
    void deleteGmtSyncTime() { this->gmtSyncTime_ = nullptr;};
    inline string getGmtSyncTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSyncTime_, "") };
    inline GetFeatureViewResponseBody& setGmtSyncTime(string gmtSyncTime) { DARABONBA_PTR_SET_VALUE(gmtSyncTime_, gmtSyncTime) };


    // joinId Field Functions 
    bool hasJoinId() const { return this->joinId_ != nullptr;};
    void deleteJoinId() { this->joinId_ = nullptr;};
    inline string getJoinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
    inline GetFeatureViewResponseBody& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


    // lastSyncConfig Field Functions 
    bool hasLastSyncConfig() const { return this->lastSyncConfig_ != nullptr;};
    void deleteLastSyncConfig() { this->lastSyncConfig_ = nullptr;};
    inline string getLastSyncConfig() const { DARABONBA_PTR_GET_DEFAULT(lastSyncConfig_, "") };
    inline GetFeatureViewResponseBody& setLastSyncConfig(string lastSyncConfig) { DARABONBA_PTR_SET_VALUE(lastSyncConfig_, lastSyncConfig) };


    // mockTableName Field Functions 
    bool hasMockTableName() const { return this->mockTableName_ != nullptr;};
    void deleteMockTableName() { this->mockTableName_ = nullptr;};
    inline string getMockTableName() const { DARABONBA_PTR_GET_DEFAULT(mockTableName_, "") };
    inline GetFeatureViewResponseBody& setMockTableName(string mockTableName) { DARABONBA_PTR_SET_VALUE(mockTableName_, mockTableName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFeatureViewResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetFeatureViewResponseBody& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetFeatureViewResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetFeatureViewResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // publishTableScript Field Functions 
    bool hasPublishTableScript() const { return this->publishTableScript_ != nullptr;};
    void deletePublishTableScript() { this->publishTableScript_ = nullptr;};
    inline string getPublishTableScript() const { DARABONBA_PTR_GET_DEFAULT(publishTableScript_, "") };
    inline GetFeatureViewResponseBody& setPublishTableScript(string publishTableScript) { DARABONBA_PTR_SET_VALUE(publishTableScript_, publishTableScript) };


    // registerDatasourceId Field Functions 
    bool hasRegisterDatasourceId() const { return this->registerDatasourceId_ != nullptr;};
    void deleteRegisterDatasourceId() { this->registerDatasourceId_ = nullptr;};
    inline string getRegisterDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceId_, "") };
    inline GetFeatureViewResponseBody& setRegisterDatasourceId(string registerDatasourceId) { DARABONBA_PTR_SET_VALUE(registerDatasourceId_, registerDatasourceId) };


    // registerDatasourceName Field Functions 
    bool hasRegisterDatasourceName() const { return this->registerDatasourceName_ != nullptr;};
    void deleteRegisterDatasourceName() { this->registerDatasourceName_ = nullptr;};
    inline string getRegisterDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceName_, "") };
    inline GetFeatureViewResponseBody& setRegisterDatasourceName(string registerDatasourceName) { DARABONBA_PTR_SET_VALUE(registerDatasourceName_, registerDatasourceName) };


    // registerTable Field Functions 
    bool hasRegisterTable() const { return this->registerTable_ != nullptr;};
    void deleteRegisterTable() { this->registerTable_ = nullptr;};
    inline string getRegisterTable() const { DARABONBA_PTR_GET_DEFAULT(registerTable_, "") };
    inline GetFeatureViewResponseBody& setRegisterTable(string registerTable) { DARABONBA_PTR_SET_VALUE(registerTable_, registerTable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFeatureViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncOnlineTable Field Functions 
    bool hasSyncOnlineTable() const { return this->syncOnlineTable_ != nullptr;};
    void deleteSyncOnlineTable() { this->syncOnlineTable_ = nullptr;};
    inline bool getSyncOnlineTable() const { DARABONBA_PTR_GET_DEFAULT(syncOnlineTable_, false) };
    inline GetFeatureViewResponseBody& setSyncOnlineTable(bool syncOnlineTable) { DARABONBA_PTR_SET_VALUE(syncOnlineTable_, syncOnlineTable) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int32_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
    inline GetFeatureViewResponseBody& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline GetFeatureViewResponseBody& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetFeatureViewResponseBody& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFeatureViewResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // writeMethod Field Functions 
    bool hasWriteMethod() const { return this->writeMethod_ != nullptr;};
    void deleteWriteMethod() { this->writeMethod_ = nullptr;};
    inline string getWriteMethod() const { DARABONBA_PTR_GET_DEFAULT(writeMethod_, "") };
    inline GetFeatureViewResponseBody& setWriteMethod(string writeMethod) { DARABONBA_PTR_SET_VALUE(writeMethod_, writeMethod) };


    // writeToFeatureDB Field Functions 
    bool hasWriteToFeatureDB() const { return this->writeToFeatureDB_ != nullptr;};
    void deleteWriteToFeatureDB() { this->writeToFeatureDB_ = nullptr;};
    inline bool getWriteToFeatureDB() const { DARABONBA_PTR_GET_DEFAULT(writeToFeatureDB_, false) };
    inline GetFeatureViewResponseBody& setWriteToFeatureDB(bool writeToFeatureDB) { DARABONBA_PTR_SET_VALUE(writeToFeatureDB_, writeToFeatureDB) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> featureEntityId_ {};
    shared_ptr<string> featureEntityName_ {};
    shared_ptr<vector<GetFeatureViewResponseBody::Fields>> fields_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> gmtSyncTime_ {};
    shared_ptr<string> joinId_ {};
    shared_ptr<string> lastSyncConfig_ {};
    shared_ptr<string> mockTableName_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> publishTableScript_ {};
    shared_ptr<string> registerDatasourceId_ {};
    shared_ptr<string> registerDatasourceName_ {};
    shared_ptr<string> registerTable_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> syncOnlineTable_ {};
    shared_ptr<int32_t> TTL_ {};
    shared_ptr<vector<string>> tags_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> writeMethod_ {};
    shared_ptr<bool> writeToFeatureDB_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
