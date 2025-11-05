// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTSCHEDULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISESNAPSHOTPOLICYREQUESTSCHEDULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateEnterpriseSnapshotPolicyRequestSchedule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseSnapshotPolicyRequestSchedule& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseSnapshotPolicyRequestSchedule& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
    };
    CreateEnterpriseSnapshotPolicyRequestSchedule() = default ;
    CreateEnterpriseSnapshotPolicyRequestSchedule(const CreateEnterpriseSnapshotPolicyRequestSchedule &) = default ;
    CreateEnterpriseSnapshotPolicyRequestSchedule(CreateEnterpriseSnapshotPolicyRequestSchedule &&) = default ;
    CreateEnterpriseSnapshotPolicyRequestSchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseSnapshotPolicyRequestSchedule() = default ;
    CreateEnterpriseSnapshotPolicyRequestSchedule& operator=(const CreateEnterpriseSnapshotPolicyRequestSchedule &) = default ;
    CreateEnterpriseSnapshotPolicyRequestSchedule& operator=(CreateEnterpriseSnapshotPolicyRequestSchedule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateEnterpriseSnapshotPolicyRequestSchedule& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


  protected:
    // The time when the policy will to be scheduled. Valid values: Set the parameter in a cron expression.
    // 
    // For example, you can use 0 0 4 1/1 * ? to specify 04:00:00 (UTC+8) on the first day of each month.
    // 
    // This parameter is required.
    std::shared_ptr<string> cronExpression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
