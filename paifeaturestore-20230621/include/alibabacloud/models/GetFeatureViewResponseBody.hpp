// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureViewResponseBodyFields.hpp>
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
    virtual bool empty() const override { this->config_ != nullptr
        && this->featureEntityId_ != nullptr && this->featureEntityName_ != nullptr && this->fields_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr
        && this->gmtSyncTime_ != nullptr && this->joinId_ != nullptr && this->lastSyncConfig_ != nullptr && this->mockTableName_ != nullptr && this->name_ != nullptr
        && this->owner_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr && this->publishTableScript_ != nullptr && this->registerDatasourceId_ != nullptr
        && this->registerDatasourceName_ != nullptr && this->registerTable_ != nullptr && this->requestId_ != nullptr && this->syncOnlineTable_ != nullptr && this->TTL_ != nullptr
        && this->tags_ != nullptr && this->type_ != nullptr && this->writeMethod_ != nullptr && this->writeToFeatureDB_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetFeatureViewResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // featureEntityId Field Functions 
    bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
    void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
    inline string featureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
    inline GetFeatureViewResponseBody& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


    // featureEntityName Field Functions 
    bool hasFeatureEntityName() const { return this->featureEntityName_ != nullptr;};
    void deleteFeatureEntityName() { this->featureEntityName_ = nullptr;};
    inline string featureEntityName() const { DARABONBA_PTR_GET_DEFAULT(featureEntityName_, "") };
    inline GetFeatureViewResponseBody& setFeatureEntityName(string featureEntityName) { DARABONBA_PTR_SET_VALUE(featureEntityName_, featureEntityName) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetFeatureViewResponseBodyFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetFeatureViewResponseBodyFields>) };
    inline vector<GetFeatureViewResponseBodyFields> fields() { DARABONBA_PTR_GET(fields_, vector<GetFeatureViewResponseBodyFields>) };
    inline GetFeatureViewResponseBody& setFields(const vector<GetFeatureViewResponseBodyFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetFeatureViewResponseBody& setFields(vector<GetFeatureViewResponseBodyFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetFeatureViewResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetFeatureViewResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtSyncTime Field Functions 
    bool hasGmtSyncTime() const { return this->gmtSyncTime_ != nullptr;};
    void deleteGmtSyncTime() { this->gmtSyncTime_ = nullptr;};
    inline string gmtSyncTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSyncTime_, "") };
    inline GetFeatureViewResponseBody& setGmtSyncTime(string gmtSyncTime) { DARABONBA_PTR_SET_VALUE(gmtSyncTime_, gmtSyncTime) };


    // joinId Field Functions 
    bool hasJoinId() const { return this->joinId_ != nullptr;};
    void deleteJoinId() { this->joinId_ = nullptr;};
    inline string joinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
    inline GetFeatureViewResponseBody& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


    // lastSyncConfig Field Functions 
    bool hasLastSyncConfig() const { return this->lastSyncConfig_ != nullptr;};
    void deleteLastSyncConfig() { this->lastSyncConfig_ = nullptr;};
    inline string lastSyncConfig() const { DARABONBA_PTR_GET_DEFAULT(lastSyncConfig_, "") };
    inline GetFeatureViewResponseBody& setLastSyncConfig(string lastSyncConfig) { DARABONBA_PTR_SET_VALUE(lastSyncConfig_, lastSyncConfig) };


    // mockTableName Field Functions 
    bool hasMockTableName() const { return this->mockTableName_ != nullptr;};
    void deleteMockTableName() { this->mockTableName_ = nullptr;};
    inline string mockTableName() const { DARABONBA_PTR_GET_DEFAULT(mockTableName_, "") };
    inline GetFeatureViewResponseBody& setMockTableName(string mockTableName) { DARABONBA_PTR_SET_VALUE(mockTableName_, mockTableName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFeatureViewResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetFeatureViewResponseBody& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetFeatureViewResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetFeatureViewResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // publishTableScript Field Functions 
    bool hasPublishTableScript() const { return this->publishTableScript_ != nullptr;};
    void deletePublishTableScript() { this->publishTableScript_ = nullptr;};
    inline string publishTableScript() const { DARABONBA_PTR_GET_DEFAULT(publishTableScript_, "") };
    inline GetFeatureViewResponseBody& setPublishTableScript(string publishTableScript) { DARABONBA_PTR_SET_VALUE(publishTableScript_, publishTableScript) };


    // registerDatasourceId Field Functions 
    bool hasRegisterDatasourceId() const { return this->registerDatasourceId_ != nullptr;};
    void deleteRegisterDatasourceId() { this->registerDatasourceId_ = nullptr;};
    inline string registerDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceId_, "") };
    inline GetFeatureViewResponseBody& setRegisterDatasourceId(string registerDatasourceId) { DARABONBA_PTR_SET_VALUE(registerDatasourceId_, registerDatasourceId) };


    // registerDatasourceName Field Functions 
    bool hasRegisterDatasourceName() const { return this->registerDatasourceName_ != nullptr;};
    void deleteRegisterDatasourceName() { this->registerDatasourceName_ = nullptr;};
    inline string registerDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceName_, "") };
    inline GetFeatureViewResponseBody& setRegisterDatasourceName(string registerDatasourceName) { DARABONBA_PTR_SET_VALUE(registerDatasourceName_, registerDatasourceName) };


    // registerTable Field Functions 
    bool hasRegisterTable() const { return this->registerTable_ != nullptr;};
    void deleteRegisterTable() { this->registerTable_ = nullptr;};
    inline string registerTable() const { DARABONBA_PTR_GET_DEFAULT(registerTable_, "") };
    inline GetFeatureViewResponseBody& setRegisterTable(string registerTable) { DARABONBA_PTR_SET_VALUE(registerTable_, registerTable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFeatureViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncOnlineTable Field Functions 
    bool hasSyncOnlineTable() const { return this->syncOnlineTable_ != nullptr;};
    void deleteSyncOnlineTable() { this->syncOnlineTable_ = nullptr;};
    inline bool syncOnlineTable() const { DARABONBA_PTR_GET_DEFAULT(syncOnlineTable_, false) };
    inline GetFeatureViewResponseBody& setSyncOnlineTable(bool syncOnlineTable) { DARABONBA_PTR_SET_VALUE(syncOnlineTable_, syncOnlineTable) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int32_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
    inline GetFeatureViewResponseBody& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline GetFeatureViewResponseBody& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetFeatureViewResponseBody& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFeatureViewResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // writeMethod Field Functions 
    bool hasWriteMethod() const { return this->writeMethod_ != nullptr;};
    void deleteWriteMethod() { this->writeMethod_ = nullptr;};
    inline string writeMethod() const { DARABONBA_PTR_GET_DEFAULT(writeMethod_, "") };
    inline GetFeatureViewResponseBody& setWriteMethod(string writeMethod) { DARABONBA_PTR_SET_VALUE(writeMethod_, writeMethod) };


    // writeToFeatureDB Field Functions 
    bool hasWriteToFeatureDB() const { return this->writeToFeatureDB_ != nullptr;};
    void deleteWriteToFeatureDB() { this->writeToFeatureDB_ = nullptr;};
    inline bool writeToFeatureDB() const { DARABONBA_PTR_GET_DEFAULT(writeToFeatureDB_, false) };
    inline GetFeatureViewResponseBody& setWriteToFeatureDB(bool writeToFeatureDB) { DARABONBA_PTR_SET_VALUE(writeToFeatureDB_, writeToFeatureDB) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> featureEntityId_ = nullptr;
    std::shared_ptr<string> featureEntityName_ = nullptr;
    std::shared_ptr<vector<GetFeatureViewResponseBodyFields>> fields_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> gmtSyncTime_ = nullptr;
    std::shared_ptr<string> joinId_ = nullptr;
    std::shared_ptr<string> lastSyncConfig_ = nullptr;
    std::shared_ptr<string> mockTableName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> publishTableScript_ = nullptr;
    std::shared_ptr<string> registerDatasourceId_ = nullptr;
    std::shared_ptr<string> registerDatasourceName_ = nullptr;
    std::shared_ptr<string> registerTable_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> syncOnlineTable_ = nullptr;
    std::shared_ptr<int32_t> TTL_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> writeMethod_ = nullptr;
    std::shared_ptr<bool> writeToFeatureDB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
