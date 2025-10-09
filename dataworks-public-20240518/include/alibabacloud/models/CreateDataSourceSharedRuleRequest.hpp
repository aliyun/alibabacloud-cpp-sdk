// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCESHAREDRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCESHAREDRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataSourceSharedRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceSharedRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(SharedUser, sharedUser_);
      DARABONBA_PTR_TO_JSON(TargetProjectId, targetProjectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceSharedRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(SharedUser, sharedUser_);
      DARABONBA_PTR_FROM_JSON(TargetProjectId, targetProjectId_);
    };
    CreateDataSourceSharedRuleRequest() = default ;
    CreateDataSourceSharedRuleRequest(const CreateDataSourceSharedRuleRequest &) = default ;
    CreateDataSourceSharedRuleRequest(CreateDataSourceSharedRuleRequest &&) = default ;
    CreateDataSourceSharedRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceSharedRuleRequest() = default ;
    CreateDataSourceSharedRuleRequest& operator=(const CreateDataSourceSharedRuleRequest &) = default ;
    CreateDataSourceSharedRuleRequest& operator=(CreateDataSourceSharedRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->envType_ != nullptr && this->sharedUser_ != nullptr && this->targetProjectId_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateDataSourceSharedRuleRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline CreateDataSourceSharedRuleRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // sharedUser Field Functions 
    bool hasSharedUser() const { return this->sharedUser_ != nullptr;};
    void deleteSharedUser() { this->sharedUser_ = nullptr;};
    inline string sharedUser() const { DARABONBA_PTR_GET_DEFAULT(sharedUser_, "") };
    inline CreateDataSourceSharedRuleRequest& setSharedUser(string sharedUser) { DARABONBA_PTR_SET_VALUE(sharedUser_, sharedUser) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t targetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline CreateDataSourceSharedRuleRequest& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


  protected:
    // The data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // Share data sources to the target project environment, including
    // - Dev (Development Environment)
    // - Prod (production environment)
    // 
    // This parameter is required.
    std::shared_ptr<string> envType_ = nullptr;
    // The user with which you want to share the data source. If you do not configure this parameter, the data source is shared to an entire workspace.
    std::shared_ptr<string> sharedUser_ = nullptr;
    // The ID of the workspace to which you want to share the data source. You cannot share the data source to the workspace with which the data source is associated.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> targetProjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
