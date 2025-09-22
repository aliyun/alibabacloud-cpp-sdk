// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
    };
    CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest(CreateAutoSnapshotPolicyRequest &&) = default ;
    CreateAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest& operator=(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest& operator=(CreateAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cronExpression_ != nullptr
        && this->diskType_ != nullptr && this->policyName_ != nullptr && this->regionId_ != nullptr && this->retentionDays_ != nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateAutoSnapshotPolicyRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateAutoSnapshotPolicyRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateAutoSnapshotPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAutoSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateAutoSnapshotPolicyRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


  protected:
    // The CRON expression for periodic scheduling.
    // 
    // This parameter is required.
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // The name of the automatic snapshot policy. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-). This parameter is empty by default.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The retention period of the automatic snapshots. Unit: days. Valid values: 1 to 180.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
