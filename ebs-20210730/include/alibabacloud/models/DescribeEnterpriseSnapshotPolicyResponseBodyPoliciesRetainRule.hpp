// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESRETAINRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESRETAINRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(TimeInterval, timeInterval_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule& operator=(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule& operator=(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr
        && return this->timeInterval_ == nullptr && return this->timeUnit_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // timeInterval Field Functions 
    bool hasTimeInterval() const { return this->timeInterval_ != nullptr;};
    void deleteTimeInterval() { this->timeInterval_ = nullptr;};
    inline int32_t timeInterval() const { DARABONBA_PTR_GET_DEFAULT(timeInterval_, 0) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule& setTimeInterval(int32_t timeInterval) { DARABONBA_PTR_SET_VALUE(timeInterval_, timeInterval) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesRetainRule& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // The maximum number of snapshots that can be retained.
    std::shared_ptr<int32_t> number_ = nullptr;
    // The value of the retention period of snapshots.
    std::shared_ptr<int32_t> timeInterval_ = nullptr;
    // The unit of the retention period of snapshots.
    std::shared_ptr<string> timeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
