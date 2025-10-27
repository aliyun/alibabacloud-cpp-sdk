// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSELECTIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSELECTIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetSelectionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetSelectionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetSelectionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
    };
    GetAssetSelectionConfigRequest() = default ;
    GetAssetSelectionConfigRequest(const GetAssetSelectionConfigRequest &) = default ;
    GetAssetSelectionConfigRequest(GetAssetSelectionConfigRequest &&) = default ;
    GetAssetSelectionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetSelectionConfigRequest() = default ;
    GetAssetSelectionConfigRequest& operator=(const GetAssetSelectionConfigRequest &) = default ;
    GetAssetSelectionConfigRequest& operator=(GetAssetSelectionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetAssetSelectionConfigRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


  protected:
    // The feature that is selected for the asset. Valid values:
    // 
    // *   **VIRUS_SCAN_CYCLE_CONFIG**: virus detection and removal
    // *   **VIRUS_SCAN_ONCE_TASK**: one-time scan for viruses
    // *   **AGENTLESS_MALICIOUS_WHITE_LIST_[ID]**: a whitelist rule for alerts that are detected by using the agentless detection feature
    // *   **AGENTLESS_VUL_WHITE_LIST_[ID]**: a whitelist rule for vulnerabilities that are detected by using the agentless detection feature
    // *   **FILE_PROTECT_RULE_SWITCH_TYPE_[ID]**: core file protectioion
    // 
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
