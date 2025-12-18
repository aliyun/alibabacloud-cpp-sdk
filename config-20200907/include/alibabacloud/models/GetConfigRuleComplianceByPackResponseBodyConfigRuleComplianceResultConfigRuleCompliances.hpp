// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODYCONFIGRULECOMPLIANCERESULTCONFIGRULECOMPLIANCES_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODYCONFIGRULECOMPLIANCERESULTCONFIGRULECOMPLIANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
    };
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances() = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances(const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances &) = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances(GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances &&) = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances() = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances& operator=(const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances &) = default ;
    GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances& operator=(GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceType_ == nullptr
        && return this->configRuleId_ == nullptr && return this->configRuleName_ == nullptr; };
    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResultConfigRuleCompliances& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


  protected:
    // The compliance evaluation result. Valid values:
    // 
    // *   COMPLIANT: The relevant resources are evaluated as compliant.
    // *   NON_COMPLIANT: The relevant resources are evaluated as non-compliant.
    // *   NOT_APPLICABLE: The rule does not apply to your resources.
    // *   INSUFFICIENT_DATA: No resource data is available.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The ID of the rule enabled in the compliance package.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The name of the rule enabled in the compliance package.
    std::shared_ptr<string> configRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
