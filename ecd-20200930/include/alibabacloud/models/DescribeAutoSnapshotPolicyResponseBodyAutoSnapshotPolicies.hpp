// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYRESPONSEBODYAUTOSNAPSHOTPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYRESPONSEBODYAUTOSNAPSHOTPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DesktopNum, desktopNum_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DesktopNum, desktopNum_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
    };
    DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies() = default ;
    DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies(const DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies &) = default ;
    DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies(DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies &&) = default ;
    DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies() = default ;
    DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& operator=(const DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies &) = default ;
    DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& operator=(DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->cronExpression_ != nullptr && this->desktopNum_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->regionId_ != nullptr
        && this->retentionDays_ != nullptr && this->status_ != nullptr && this->timePoints_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // desktopNum Field Functions 
    bool hasDesktopNum() const { return this->desktopNum_ != nullptr;};
    void deleteDesktopNum() { this->desktopNum_ = nullptr;};
    inline int32_t desktopNum() const { DARABONBA_PTR_GET_DEFAULT(desktopNum_, 0) };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setDesktopNum(int32_t desktopNum) { DARABONBA_PTR_SET_VALUE(desktopNum_, desktopNum) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline string retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setRetentionDays(string retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string timePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline DescribeAutoSnapshotPolicyResponseBodyAutoSnapshotPolicies& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The time when the automatic snapshot policy was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-mm-ddthh:mm:ssz` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The cron expression that specifies when Elastic Desktop Service creates snapshots on the cloud computers.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // The number of cloud computers to which the automatic snapshot policy is applied.
    std::shared_ptr<int32_t> desktopNum_ = nullptr;
    // The ID of the automatic snapshot policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The name of the automatic snapshot policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The ID of the region to which the automatic snapshot policy belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The retention period of the automatic snapshots. Unit: days. Valid values: 1 to 180.
    std::shared_ptr<string> retentionDays_ = nullptr;
    // The status of the automatic snapshot policy.
    // 
    // Valid values:
    // 
    // *   Expire: The automatic snapshot policy cannot be used because you have overdue payments in your account.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Normal: The automatic snapshot policy is normal.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // The points in time at which the auto snapshots were created.
    // 
    // The parameter values are a JSON array. Example: `["0", "1", ... "23"]`. A maximum of 24 points in time are returned. The points in time are separated with commas (,).
    std::shared_ptr<string> timePoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
