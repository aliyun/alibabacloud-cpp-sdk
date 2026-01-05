// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourceSharedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceSharedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceSharedRules, dataSourceSharedRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceSharedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceSharedRules, dataSourceSharedRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceSharedRulesResponseBody() = default ;
    ListDataSourceSharedRulesResponseBody(const ListDataSourceSharedRulesResponseBody &) = default ;
    ListDataSourceSharedRulesResponseBody(ListDataSourceSharedRulesResponseBody &&) = default ;
    ListDataSourceSharedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceSharedRulesResponseBody() = default ;
    ListDataSourceSharedRulesResponseBody& operator=(const ListDataSourceSharedRulesResponseBody &) = default ;
    ListDataSourceSharedRulesResponseBody& operator=(ListDataSourceSharedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceSharedRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceSharedRules& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(SharedDataSourceName, sharedDataSourceName_);
        DARABONBA_PTR_TO_JSON(SharedUser, sharedUser_);
        DARABONBA_PTR_TO_JSON(SourceProjectId, sourceProjectId_);
        DARABONBA_PTR_TO_JSON(TargetProjectId, targetProjectId_);
      };
      friend void from_json(const Darabonba::Json& j, DataSourceSharedRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(SharedDataSourceName, sharedDataSourceName_);
        DARABONBA_PTR_FROM_JSON(SharedUser, sharedUser_);
        DARABONBA_PTR_FROM_JSON(SourceProjectId, sourceProjectId_);
        DARABONBA_PTR_FROM_JSON(TargetProjectId, targetProjectId_);
      };
      DataSourceSharedRules() = default ;
      DataSourceSharedRules(const DataSourceSharedRules &) = default ;
      DataSourceSharedRules(DataSourceSharedRules &&) = default ;
      DataSourceSharedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSourceSharedRules() = default ;
      DataSourceSharedRules& operator=(const DataSourceSharedRules &) = default ;
      DataSourceSharedRules& operator=(DataSourceSharedRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->dataSourceId_ == nullptr && this->envType_ == nullptr && this->id_ == nullptr && this->sharedDataSourceName_ == nullptr
        && this->sharedUser_ == nullptr && this->sourceProjectId_ == nullptr && this->targetProjectId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataSourceSharedRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline DataSourceSharedRules& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline DataSourceSharedRules& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline DataSourceSharedRules& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataSourceSharedRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // sharedDataSourceName Field Functions 
      bool hasSharedDataSourceName() const { return this->sharedDataSourceName_ != nullptr;};
      void deleteSharedDataSourceName() { this->sharedDataSourceName_ = nullptr;};
      inline string getSharedDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(sharedDataSourceName_, "") };
      inline DataSourceSharedRules& setSharedDataSourceName(string sharedDataSourceName) { DARABONBA_PTR_SET_VALUE(sharedDataSourceName_, sharedDataSourceName) };


      // sharedUser Field Functions 
      bool hasSharedUser() const { return this->sharedUser_ != nullptr;};
      void deleteSharedUser() { this->sharedUser_ = nullptr;};
      inline string getSharedUser() const { DARABONBA_PTR_GET_DEFAULT(sharedUser_, "") };
      inline DataSourceSharedRules& setSharedUser(string sharedUser) { DARABONBA_PTR_SET_VALUE(sharedUser_, sharedUser) };


      // sourceProjectId Field Functions 
      bool hasSourceProjectId() const { return this->sourceProjectId_ != nullptr;};
      void deleteSourceProjectId() { this->sourceProjectId_ = nullptr;};
      inline int64_t getSourceProjectId() const { DARABONBA_PTR_GET_DEFAULT(sourceProjectId_, 0L) };
      inline DataSourceSharedRules& setSourceProjectId(int64_t sourceProjectId) { DARABONBA_PTR_SET_VALUE(sourceProjectId_, sourceProjectId) };


      // targetProjectId Field Functions 
      bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
      void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
      inline int64_t getTargetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
      inline DataSourceSharedRules& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


    protected:
      // The time when the rule was created. This value is a UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the user who creates the rule.
      shared_ptr<string> createUser_ {};
      // The data source ID. You can call the [ListDataSources](https://help.aliyun.com/document_detail/211431.html) operation to query the ID.
      shared_ptr<int64_t> dataSourceId_ {};
      // The environment to which the target data source belongs. The values are as follows:
      // - Dev: the development environment.
      // - Prod: the production environment.
      shared_ptr<string> envType_ {};
      // The rule ID.
      shared_ptr<int64_t> id_ {};
      // The name of the data source in the destination workspace.
      shared_ptr<string> sharedDataSourceName_ {};
      // The user in the workspace to which the data source is shared. If the data source is shared to the entire workspace, this parameter is left empty.
      shared_ptr<string> sharedUser_ {};
      // The ID of the workspace with which the data source is associated.
      shared_ptr<int64_t> sourceProjectId_ {};
      // The ID of the workspace to which the data source is shared.
      shared_ptr<int64_t> targetProjectId_ {};
    };

    virtual bool empty() const override { return this->dataSourceSharedRules_ == nullptr
        && this->requestId_ == nullptr; };
    // dataSourceSharedRules Field Functions 
    bool hasDataSourceSharedRules() const { return this->dataSourceSharedRules_ != nullptr;};
    void deleteDataSourceSharedRules() { this->dataSourceSharedRules_ = nullptr;};
    inline const vector<ListDataSourceSharedRulesResponseBody::DataSourceSharedRules> & getDataSourceSharedRules() const { DARABONBA_PTR_GET_CONST(dataSourceSharedRules_, vector<ListDataSourceSharedRulesResponseBody::DataSourceSharedRules>) };
    inline vector<ListDataSourceSharedRulesResponseBody::DataSourceSharedRules> getDataSourceSharedRules() { DARABONBA_PTR_GET(dataSourceSharedRules_, vector<ListDataSourceSharedRulesResponseBody::DataSourceSharedRules>) };
    inline ListDataSourceSharedRulesResponseBody& setDataSourceSharedRules(const vector<ListDataSourceSharedRulesResponseBody::DataSourceSharedRules> & dataSourceSharedRules) { DARABONBA_PTR_SET_VALUE(dataSourceSharedRules_, dataSourceSharedRules) };
    inline ListDataSourceSharedRulesResponseBody& setDataSourceSharedRules(vector<ListDataSourceSharedRulesResponseBody::DataSourceSharedRules> && dataSourceSharedRules) { DARABONBA_PTR_SET_RVALUE(dataSourceSharedRules_, dataSourceSharedRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceSharedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The sharing rules of the data source.
    shared_ptr<vector<ListDataSourceSharedRulesResponseBody::DataSourceSharedRules>> dataSourceSharedRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
