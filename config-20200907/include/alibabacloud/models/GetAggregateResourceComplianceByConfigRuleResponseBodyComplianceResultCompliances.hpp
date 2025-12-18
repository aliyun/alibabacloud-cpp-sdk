// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODYCOMPLIANCERESULTCOMPLIANCES_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODYCOMPLIANCERESULTCOMPLIANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances(const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances(GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances &&) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances& operator=(const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances& operator=(GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceType_ == nullptr
        && return this->count_ == nullptr; };
    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResultCompliances& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The compliance evaluation results of the resources. Valid values:
    // 
    // *   COMPLIANT: The resource was evaluated as compliant.
    // *   NON_COMPLIANT: The resource was evaluated as incompliant.
    // *   NOT_APPLICABLE: The rule did not apply to your resources.
    // *   INSUFFICIENT_DATA: No resource data was available.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The number of resources that have compliance evaluation results. For example, if the value of the `ComplianceType` parameter is `COMPLIANT`, this parameter value indicates the number of compliant resources.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
