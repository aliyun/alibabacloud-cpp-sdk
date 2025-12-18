// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEBYCONFIGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEBYCONFIGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceByConfigRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceByConfigRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceByConfigRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
    };
    GetResourceComplianceByConfigRuleRequest() = default ;
    GetResourceComplianceByConfigRuleRequest(const GetResourceComplianceByConfigRuleRequest &) = default ;
    GetResourceComplianceByConfigRuleRequest(GetResourceComplianceByConfigRuleRequest &&) = default ;
    GetResourceComplianceByConfigRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceByConfigRuleRequest() = default ;
    GetResourceComplianceByConfigRuleRequest& operator=(const GetResourceComplianceByConfigRuleRequest &) = default ;
    GetResourceComplianceByConfigRuleRequest& operator=(GetResourceComplianceByConfigRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceType_ == nullptr
        && return this->configRuleId_ == nullptr; };
    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline GetResourceComplianceByConfigRuleRequest& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline GetResourceComplianceByConfigRuleRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


  protected:
    // The compliance evaluation result. Valid values:
    // 
    // *   COMPLIANT: The resources are evaluated as compliant.
    // *   NON_COMPLIANT: The resources are evaluated as non-compliant.
    // *   NOT_APPLICABLE: The rule does not apply to the resources.
    // *   INSUFFICIENT_DATA: No data is available.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
