// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASSETSELECTIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEASSETSELECTIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAssetSelectionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAssetSelectionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssetSelectionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateAssetSelectionConfigRequest() = default ;
    CreateAssetSelectionConfigRequest(const CreateAssetSelectionConfigRequest &) = default ;
    CreateAssetSelectionConfigRequest(CreateAssetSelectionConfigRequest &&) = default ;
    CreateAssetSelectionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAssetSelectionConfigRequest() = default ;
    CreateAssetSelectionConfigRequest& operator=(const CreateAssetSelectionConfigRequest &) = default ;
    CreateAssetSelectionConfigRequest& operator=(CreateAssetSelectionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->clientToken_ == nullptr && this->platform_ == nullptr && this->targetType_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateAssetSelectionConfigRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAssetSelectionConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateAssetSelectionConfigRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateAssetSelectionConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The business type of the asset selection. Valid values:
    // 
    // - **VIRUS_SCAN_CYCLE_CONFIG**: trojan scan configuration.
    // - **VIRUS_SCAN_ONCE_TASK**: trojan scan one-time scan.
    // - **AGENTLESS_MALICIOUS_WHITE_LIST_[ID]**: agentless detection alert whitelisting rule.
    // - **AGENTLESS_VUL_WHITE_LIST_[ID]**: agentless detection vulnerability whitelisting rule.
    // - **FILE_PROTECT_RULE_SWITCH_TYPE_[ID]**: core file protection.
    // 
    // This parameter is required.
    shared_ptr<string> businessType_ {};
    // The client token that is used to ensure the idempotence of the request. Different requests must use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The operating system of the target asset. Valid values:
    // 
    // - **all**: all operating systems.
    // - **windows**: Windows operating system.
    // - **linux**: Linux operating system.
    // > If this parameter is left empty, the default value is determined based on the **BusinessType** value.
    // >- **VIRUS_SCAN_CYCLE_CONFIG**: the value is **all**.
    // >- **VIRUS_SCAN_ONCE_TASK**: the value is **all**.
    // >- **AGENTLESS_MALICIOUS_WHITE_LIST_[ID]**: the value is **all**.
    // >- **AGENTLESS_VUL_WHITE_LIST_[ID]**: the value is **all**.
    // >- **FILE_PROTECT_RULE_SWITCH_TYPE_[ID]**: the value is **linux**.
    shared_ptr<string> platform_ {};
    // The target asset type. Valid values:
    // 
    // - **all_instance**: all servers.
    // - **instance**: select by server.
    // - **group**: select by group.
    // - **vpc**: select by VPC.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
