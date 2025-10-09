// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESRESPONSEBODYDATASOURCESHAREDRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESHAREDRULESRESPONSEBODYDATASOURCESHAREDRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourceSharedRulesResponseBodyDataSourceSharedRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& obj) { 
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
    ListDataSourceSharedRulesResponseBodyDataSourceSharedRules() = default ;
    ListDataSourceSharedRulesResponseBodyDataSourceSharedRules(const ListDataSourceSharedRulesResponseBodyDataSourceSharedRules &) = default ;
    ListDataSourceSharedRulesResponseBodyDataSourceSharedRules(ListDataSourceSharedRulesResponseBodyDataSourceSharedRules &&) = default ;
    ListDataSourceSharedRulesResponseBodyDataSourceSharedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceSharedRulesResponseBodyDataSourceSharedRules() = default ;
    ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& operator=(const ListDataSourceSharedRulesResponseBodyDataSourceSharedRules &) = default ;
    ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& operator=(ListDataSourceSharedRulesResponseBodyDataSourceSharedRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->dataSourceId_ != nullptr && this->envType_ != nullptr && this->id_ != nullptr && this->sharedDataSourceName_ != nullptr
        && this->sharedUser_ != nullptr && this->sourceProjectId_ != nullptr && this->targetProjectId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sharedDataSourceName Field Functions 
    bool hasSharedDataSourceName() const { return this->sharedDataSourceName_ != nullptr;};
    void deleteSharedDataSourceName() { this->sharedDataSourceName_ = nullptr;};
    inline string sharedDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(sharedDataSourceName_, "") };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setSharedDataSourceName(string sharedDataSourceName) { DARABONBA_PTR_SET_VALUE(sharedDataSourceName_, sharedDataSourceName) };


    // sharedUser Field Functions 
    bool hasSharedUser() const { return this->sharedUser_ != nullptr;};
    void deleteSharedUser() { this->sharedUser_ = nullptr;};
    inline string sharedUser() const { DARABONBA_PTR_GET_DEFAULT(sharedUser_, "") };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setSharedUser(string sharedUser) { DARABONBA_PTR_SET_VALUE(sharedUser_, sharedUser) };


    // sourceProjectId Field Functions 
    bool hasSourceProjectId() const { return this->sourceProjectId_ != nullptr;};
    void deleteSourceProjectId() { this->sourceProjectId_ = nullptr;};
    inline int64_t sourceProjectId() const { DARABONBA_PTR_GET_DEFAULT(sourceProjectId_, 0L) };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setSourceProjectId(int64_t sourceProjectId) { DARABONBA_PTR_SET_VALUE(sourceProjectId_, sourceProjectId) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t targetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline ListDataSourceSharedRulesResponseBodyDataSourceSharedRules& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


  protected:
    // The time when the rule was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who creates the rule.
    std::shared_ptr<string> createUser_ = nullptr;
    // The data source ID. You can call the [ListDataSources](https://help.aliyun.com/document_detail/211431.html) operation to query the ID.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The environment to which the target data source belongs. The values are as follows:
    // - Dev: the development environment.
    // - Prod: the production environment.
    std::shared_ptr<string> envType_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the data source in the destination workspace.
    std::shared_ptr<string> sharedDataSourceName_ = nullptr;
    // The user in the workspace to which the data source is shared. If the data source is shared to the entire workspace, this parameter is left empty.
    std::shared_ptr<string> sharedUser_ = nullptr;
    // The ID of the workspace with which the data source is associated.
    std::shared_ptr<int64_t> sourceProjectId_ = nullptr;
    // The ID of the workspace to which the data source is shared.
    std::shared_ptr<int64_t> targetProjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
