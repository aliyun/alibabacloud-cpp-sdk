// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATUREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATUREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFeatureViewRequestFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateFeatureViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_TO_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_TO_JSON(SyncOnlineTable, syncOnlineTable_);
      DARABONBA_PTR_TO_JSON(TTL, TTL_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WriteMethod, writeMethod_);
      DARABONBA_PTR_TO_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegisterDatasourceId, registerDatasourceId_);
      DARABONBA_PTR_FROM_JSON(RegisterTable, registerTable_);
      DARABONBA_PTR_FROM_JSON(SyncOnlineTable, syncOnlineTable_);
      DARABONBA_PTR_FROM_JSON(TTL, TTL_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WriteMethod, writeMethod_);
      DARABONBA_PTR_FROM_JSON(WriteToFeatureDB, writeToFeatureDB_);
    };
    CreateFeatureViewRequest() = default ;
    CreateFeatureViewRequest(const CreateFeatureViewRequest &) = default ;
    CreateFeatureViewRequest(CreateFeatureViewRequest &&) = default ;
    CreateFeatureViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureViewRequest() = default ;
    CreateFeatureViewRequest& operator=(const CreateFeatureViewRequest &) = default ;
    CreateFeatureViewRequest& operator=(CreateFeatureViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->featureEntityId_ != nullptr && this->fields_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr && this->registerDatasourceId_ != nullptr
        && this->registerTable_ != nullptr && this->syncOnlineTable_ != nullptr && this->TTL_ != nullptr && this->tags_ != nullptr && this->type_ != nullptr
        && this->writeMethod_ != nullptr && this->writeToFeatureDB_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateFeatureViewRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // featureEntityId Field Functions 
    bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
    void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
    inline string featureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
    inline CreateFeatureViewRequest& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<CreateFeatureViewRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<CreateFeatureViewRequestFields>) };
    inline vector<CreateFeatureViewRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<CreateFeatureViewRequestFields>) };
    inline CreateFeatureViewRequest& setFields(const vector<CreateFeatureViewRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline CreateFeatureViewRequest& setFields(vector<CreateFeatureViewRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFeatureViewRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateFeatureViewRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // registerDatasourceId Field Functions 
    bool hasRegisterDatasourceId() const { return this->registerDatasourceId_ != nullptr;};
    void deleteRegisterDatasourceId() { this->registerDatasourceId_ = nullptr;};
    inline string registerDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(registerDatasourceId_, "") };
    inline CreateFeatureViewRequest& setRegisterDatasourceId(string registerDatasourceId) { DARABONBA_PTR_SET_VALUE(registerDatasourceId_, registerDatasourceId) };


    // registerTable Field Functions 
    bool hasRegisterTable() const { return this->registerTable_ != nullptr;};
    void deleteRegisterTable() { this->registerTable_ = nullptr;};
    inline string registerTable() const { DARABONBA_PTR_GET_DEFAULT(registerTable_, "") };
    inline CreateFeatureViewRequest& setRegisterTable(string registerTable) { DARABONBA_PTR_SET_VALUE(registerTable_, registerTable) };


    // syncOnlineTable Field Functions 
    bool hasSyncOnlineTable() const { return this->syncOnlineTable_ != nullptr;};
    void deleteSyncOnlineTable() { this->syncOnlineTable_ = nullptr;};
    inline bool syncOnlineTable() const { DARABONBA_PTR_GET_DEFAULT(syncOnlineTable_, false) };
    inline CreateFeatureViewRequest& setSyncOnlineTable(bool syncOnlineTable) { DARABONBA_PTR_SET_VALUE(syncOnlineTable_, syncOnlineTable) };


    // TTL Field Functions 
    bool hasTTL() const { return this->TTL_ != nullptr;};
    void deleteTTL() { this->TTL_ = nullptr;};
    inline int32_t TTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
    inline CreateFeatureViewRequest& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline CreateFeatureViewRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateFeatureViewRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateFeatureViewRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // writeMethod Field Functions 
    bool hasWriteMethod() const { return this->writeMethod_ != nullptr;};
    void deleteWriteMethod() { this->writeMethod_ = nullptr;};
    inline string writeMethod() const { DARABONBA_PTR_GET_DEFAULT(writeMethod_, "") };
    inline CreateFeatureViewRequest& setWriteMethod(string writeMethod) { DARABONBA_PTR_SET_VALUE(writeMethod_, writeMethod) };


    // writeToFeatureDB Field Functions 
    bool hasWriteToFeatureDB() const { return this->writeToFeatureDB_ != nullptr;};
    void deleteWriteToFeatureDB() { this->writeToFeatureDB_ = nullptr;};
    inline bool writeToFeatureDB() const { DARABONBA_PTR_GET_DEFAULT(writeToFeatureDB_, false) };
    inline CreateFeatureViewRequest& setWriteToFeatureDB(bool writeToFeatureDB) { DARABONBA_PTR_SET_VALUE(writeToFeatureDB_, writeToFeatureDB) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> featureEntityId_ = nullptr;
    std::shared_ptr<vector<CreateFeatureViewRequestFields>> fields_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> registerDatasourceId_ = nullptr;
    std::shared_ptr<string> registerTable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> syncOnlineTable_ = nullptr;
    std::shared_ptr<int32_t> TTL_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> writeMethod_ = nullptr;
    std::shared_ptr<bool> writeToFeatureDB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
