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
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssetSelectionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->platform_ == nullptr && this->targetType_ == nullptr; };
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


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAssetSelectionConfigRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


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
    // - **VIRUS_SCAN_CYCLE_CONFIG**: Virus scan configuration.
    // - **VIRUS_SCAN_ONCE_TASK**: One-time virus scan.
    // - **AGENTLESS_MALICIOUS_WHITE_LIST_[ID]**: Whitelist rule for agentless detection alerts.
    // - **AGENTLESS_VUL_WHITE_LIST_[ID]**: Whitelist rule for agentless detection vulnerabilities.
    // - **FILE_PROTECT_RULE_SWITCH_TYPE_[ID]**: Core file protection.
    // 
    // This parameter is required.
    shared_ptr<string> businessType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use different tokens for different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - true: Prechecks the request without performing the actual operation.
    // - false: Performs the request.
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // The operating system of the target asset. Valid values:
    // 
    // - **all**: All operating systems.
    // - **windows**: Windows operating system.
    // - **linux**: Linux operating system.
    // > If this parameter is left empty, the default value is matched based on the **BusinessType** value.
    // > - **VIRUS_SCAN_CYCLE_CONFIG**: The value is **all**.
    // > - **VIRUS_SCAN_ONCE_TASK**: The value is **all**.
    // > - **AGENTLESS_MALICIOUS_WHITE_LIST_[ID]**: The value is **all**.
    // > - **AGENTLESS_VUL_WHITE_LIST_[ID]**: The value is **all**.
    // > - **FILE_PROTECT_RULE_SWITCH_TYPE_[ID]**: The value is **linux**.
    shared_ptr<string> platform_ {};
    // The target Asset Type. Valid values:
    // 
    // - **all_instance**: All servers.
    // - **instance**: By server.
    // - **group**: By group.
    // - **vpc**: By VPC.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
