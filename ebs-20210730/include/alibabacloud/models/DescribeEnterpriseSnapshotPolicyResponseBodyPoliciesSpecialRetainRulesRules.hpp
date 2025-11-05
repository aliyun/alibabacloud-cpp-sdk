// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSPECIALRETAINRULESRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSPECIALRETAINRULESRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules& obj) { 
      DARABONBA_PTR_TO_JSON(SpecialPeriodUnit, specialPeriodUnit_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecialPeriodUnit, specialPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules& operator=(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules& operator=(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specialPeriodUnit_ == nullptr
        && return this->timeInterval_ == nullptr && return this->timeUnit_ == nullptr; };
    // specialPeriodUnit Field Functions 
    bool hasSpecialPeriodUnit() const { return this->specialPeriodUnit_ != nullptr;};
    void deleteSpecialPeriodUnit() { this->specialPeriodUnit_ = nullptr;};
    inline string specialPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(specialPeriodUnit_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules& setSpecialPeriodUnit(string specialPeriodUnit) { DARABONBA_PTR_SET_VALUE(specialPeriodUnit_, specialPeriodUnit) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // The unit of the special retention period.
    std::shared_ptr<string> specialPeriodUnit_ = nullptr;
    // The value of the retention period.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
    // The unit of the retention period.
    std::shared_ptr<string> timeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
