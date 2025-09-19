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
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssetSelectionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
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
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->platform_ != nullptr && this->targetType_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateAssetSelectionConfigRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateAssetSelectionConfigRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateAssetSelectionConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The feature that you want to select for the asset. Valid values:
    // 
    // *   **VIRUS_SCAN_CYCLE_CONFIG**: virus detection and removal
    // *   **VIRUS_SCAN_ONCE_TASK**: one-time scan for viruses
    // *   **AGENTLESS_MALICIOUS_WHITE_LIST_[ID]**: a whitelist rule for alerts that are detected by using the agentless detection feature
    // *   **AGENTLESS_VUL_WHITE_LIST_[ID]**: a whitelist rule for vulnerabilities that are detected by using the agentless detection feature
    // *   **FILE_PROTECT_RULE_SWITCH_TYPE_[ID]**: core file protection
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // The operating system of the asset. Valid values:
    // 
    // *   **all**: all operating systems
    // *   **windows**: the Windows operating system
    // *   **linux**: the Linux operating system
    // 
    // >  If you leave this parameter empty, the system automatically selects a value for the parameter based on the value of the **BusinessType** parameter.
    // 
    // *   If the BusinessType parameter is set to **VIRUS_SCAN_CYCLE_CONFIG**, the value of the Platform parameter is **all**.
    // 
    // *   If the BusinessType parameter is set to **VIRUS_SCAN_ONCE_TASK**, the value of the Platform parameter is **all**.
    // 
    // *   If the BusinessType parameter is set to **AGENTLESS_MALICIOUS_WHITE_LIST_[ID]**, the value of the Platform parameter is **all**.
    // 
    // *   If the BusinessType parameter is set to **AGENTLESS_VUL_WHITE_LIST_[ID]** the value of the Platform parameter is **all**.
    // 
    // *   If the BusinessType parameter is set to **FILE_PROTECT_RULE_SWITCH_TYPE_[ID]**, the value of the Platform parameter is **linux**.
    std::shared_ptr<string> platform_ = nullptr;
    // The dimension based on which you want to select the asset. Valid values:
    // 
    // *   **instance**: selects the asset by server.
    // *   **group**: selects the asset by group.
    // *   **vpc**: selects the asset by virtual private cloud (VPC).
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
