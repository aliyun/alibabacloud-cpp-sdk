// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeAutoSnapshotPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAutoSnapshotPolicyResponseBody() = default ;
    DescribeAutoSnapshotPolicyResponseBody(const DescribeAutoSnapshotPolicyResponseBody &) = default ;
    DescribeAutoSnapshotPolicyResponseBody(DescribeAutoSnapshotPolicyResponseBody &&) = default ;
    DescribeAutoSnapshotPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyResponseBody() = default ;
    DescribeAutoSnapshotPolicyResponseBody& operator=(const DescribeAutoSnapshotPolicyResponseBody &) = default ;
    DescribeAutoSnapshotPolicyResponseBody& operator=(DescribeAutoSnapshotPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoSnapshotPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoSnapshotPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(DesktopNum, desktopNum_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
      };
      friend void from_json(const Darabonba::Json& j, AutoSnapshotPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(DesktopNum, desktopNum_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
      };
      AutoSnapshotPolicies() = default ;
      AutoSnapshotPolicies(const AutoSnapshotPolicies &) = default ;
      AutoSnapshotPolicies(AutoSnapshotPolicies &&) = default ;
      AutoSnapshotPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoSnapshotPolicies() = default ;
      AutoSnapshotPolicies& operator=(const AutoSnapshotPolicies &) = default ;
      AutoSnapshotPolicies& operator=(AutoSnapshotPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->cronExpression_ == nullptr && this->desktopNum_ == nullptr && this->diskType_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->regionId_ == nullptr && this->retentionDays_ == nullptr && this->status_ == nullptr && this->timePoints_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline AutoSnapshotPolicies& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline AutoSnapshotPolicies& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // desktopNum Field Functions 
      bool hasDesktopNum() const { return this->desktopNum_ != nullptr;};
      void deleteDesktopNum() { this->desktopNum_ = nullptr;};
      inline int32_t getDesktopNum() const { DARABONBA_PTR_GET_DEFAULT(desktopNum_, 0) };
      inline AutoSnapshotPolicies& setDesktopNum(int32_t desktopNum) { DARABONBA_PTR_SET_VALUE(desktopNum_, desktopNum) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline AutoSnapshotPolicies& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AutoSnapshotPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline AutoSnapshotPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AutoSnapshotPolicies& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // retentionDays Field Functions 
      bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
      void deleteRetentionDays() { this->retentionDays_ = nullptr;};
      inline string getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, "") };
      inline AutoSnapshotPolicies& setRetentionDays(string retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AutoSnapshotPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timePoints Field Functions 
      bool hasTimePoints() const { return this->timePoints_ != nullptr;};
      void deleteTimePoints() { this->timePoints_ = nullptr;};
      inline string getTimePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
      inline AutoSnapshotPolicies& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


    protected:
      // The time when the automatic snapshot policy was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-mm-ddthh:mm:ssz` format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The cron expression that specifies when Elastic Desktop Service creates snapshots on the cloud computers.
      shared_ptr<string> cronExpression_ {};
      // The number of cloud computers to which the automatic snapshot policy is applied.
      shared_ptr<int32_t> desktopNum_ {};
      shared_ptr<string> diskType_ {};
      // The ID of the automatic snapshot policy.
      shared_ptr<string> policyId_ {};
      // The name of the automatic snapshot policy.
      shared_ptr<string> policyName_ {};
      // The ID of the region to which the automatic snapshot policy belongs.
      shared_ptr<string> regionId_ {};
      // The retention period of the automatic snapshots. Unit: days. Valid values: 1 to 180.
      shared_ptr<string> retentionDays_ {};
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
      shared_ptr<string> status_ {};
      // The points in time at which the auto snapshots were created.
      // 
      // The parameter values are a JSON array. Example: `["0", "1", ... "23"]`. A maximum of 24 points in time are returned. The points in time are separated with commas (,).
      shared_ptr<string> timePoints_ {};
    };

    virtual bool empty() const override { return this->autoSnapshotPolicies_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // autoSnapshotPolicies Field Functions 
    bool hasAutoSnapshotPolicies() const { return this->autoSnapshotPolicies_ != nullptr;};
    void deleteAutoSnapshotPolicies() { this->autoSnapshotPolicies_ = nullptr;};
    inline const vector<DescribeAutoSnapshotPolicyResponseBody::AutoSnapshotPolicies> & getAutoSnapshotPolicies() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicies_, vector<DescribeAutoSnapshotPolicyResponseBody::AutoSnapshotPolicies>) };
    inline vector<DescribeAutoSnapshotPolicyResponseBody::AutoSnapshotPolicies> getAutoSnapshotPolicies() { DARABONBA_PTR_GET(autoSnapshotPolicies_, vector<DescribeAutoSnapshotPolicyResponseBody::AutoSnapshotPolicies>) };
    inline DescribeAutoSnapshotPolicyResponseBody& setAutoSnapshotPolicies(const vector<DescribeAutoSnapshotPolicyResponseBody::AutoSnapshotPolicies> & autoSnapshotPolicies) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyResponseBody& setAutoSnapshotPolicies(vector<DescribeAutoSnapshotPolicyResponseBody::AutoSnapshotPolicies> && autoSnapshotPolicies) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAutoSnapshotPolicyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the queried automatic snapshot policies.
    shared_ptr<vector<DescribeAutoSnapshotPolicyResponseBody::AutoSnapshotPolicies>> autoSnapshotPolicies_ {};
    // The token that is used to start the next query. If this parameter is empty, all results haven been returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
