// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKSCOPECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKSCOPECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateCheckScopeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckScopeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfig, autoConfig_);
      DARABONBA_PTR_TO_JSON(AutoType, autoType_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckScopeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfig, autoConfig_);
      DARABONBA_PTR_FROM_JSON(AutoType, autoType_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateCheckScopeConfigRequest() = default ;
    UpdateCheckScopeConfigRequest(const UpdateCheckScopeConfigRequest &) = default ;
    UpdateCheckScopeConfigRequest(UpdateCheckScopeConfigRequest &&) = default ;
    UpdateCheckScopeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckScopeConfigRequest() = default ;
    UpdateCheckScopeConfigRequest& operator=(const UpdateCheckScopeConfigRequest &) = default ;
    UpdateCheckScopeConfigRequest& operator=(UpdateCheckScopeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoConfig_ == nullptr
        && this->autoType_ == nullptr && this->configId_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->type_ == nullptr; };
    // autoConfig Field Functions 
    bool hasAutoConfig() const { return this->autoConfig_ != nullptr;};
    void deleteAutoConfig() { this->autoConfig_ = nullptr;};
    inline string getAutoConfig() const { DARABONBA_PTR_GET_DEFAULT(autoConfig_, "") };
    inline UpdateCheckScopeConfigRequest& setAutoConfig(string autoConfig) { DARABONBA_PTR_SET_VALUE(autoConfig_, autoConfig) };


    // autoType Field Functions 
    bool hasAutoType() const { return this->autoType_ != nullptr;};
    void deleteAutoType() { this->autoType_ = nullptr;};
    inline int32_t getAutoType() const { DARABONBA_PTR_GET_DEFAULT(autoType_, 0) };
    inline UpdateCheckScopeConfigRequest& setAutoType(int32_t autoType) { DARABONBA_PTR_SET_VALUE(autoType_, autoType) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline UpdateCheckScopeConfigRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline UpdateCheckScopeConfigRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline UpdateCheckScopeConfigRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The JSON string of the automatic scan configuration. The following fields are included:
    // 
    // - **autoInclude**: specifies whether to enable automatic scanning. Valid values: **true**: enabled. **false**: disabled.
    // - **autoRule**: the configuration for enabling automatic scanning.
    // - **ruleOperator**: the rule operator for the configuration. Set the value to **include**.
    // - **operator**: the logical operator. Set the value to **or**.
    // - **rule**: the rule.
    // - **condition**: the rule condition. Valid values: **vendor**: vendor, **assetType**: primary asset type, **assetSubType**: secondary asset type.
    // > For specific meanings, refer to the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation.
    // 
    // This parameter is required when AutoType is set to 1 (automatic scan enabled). Provide a valid JSON configuration string. This parameter is not required when AutoType is set to 0.
    shared_ptr<string> autoConfig_ {};
    // The type of the automatic scan configuration. Valid values:
    // - **0**: Automatic scan is disabled.
    // - **1**: Automatically scan newly added cloud assets.
    shared_ptr<int32_t> autoType_ {};
    // The ID of the configuration.
    // >Call the [GetCheckScopeConfig](~~GetCheckScopeConfig~~) operation to obtain this parameter.
    shared_ptr<string> configId_ {};
    // The ID of the Alibaba Cloud account that corresponds to the member accounts in the resource folder.
    // >Invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The type of the scan scope configuration. Valid values:
    // - **1**: scan by instance
    // - **3**: scan all
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
