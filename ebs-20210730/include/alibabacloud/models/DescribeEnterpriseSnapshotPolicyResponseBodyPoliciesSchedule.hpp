// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSCHEDULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSCHEDULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule& operator=(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule& operator=(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSchedule& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


  protected:
    // The cron expression of the enterprise-level snapshot policy.
    std::shared_ptr<string> cronExpression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
