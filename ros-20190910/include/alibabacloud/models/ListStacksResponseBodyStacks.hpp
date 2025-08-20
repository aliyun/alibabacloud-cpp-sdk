// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKSRESPONSEBODYSTACKS_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKSRESPONSEBODYSTACKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListStacksResponseBodyStacksOperationInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListStacksResponseBodyStacksTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStacksResponseBodyStacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStacksResponseBodyStacks& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(OperationInfo, operationInfo_);
      DARABONBA_PTR_TO_JSON(ParentStackId, parentStackId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(StackType, stackType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListStacksResponseBodyStacks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(OperationInfo, operationInfo_);
      DARABONBA_PTR_FROM_JSON(ParentStackId, parentStackId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(StackType, stackType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListStacksResponseBodyStacks() = default ;
    ListStacksResponseBodyStacks(const ListStacksResponseBodyStacks &) = default ;
    ListStacksResponseBodyStacks(ListStacksResponseBodyStacks &&) = default ;
    ListStacksResponseBodyStacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStacksResponseBodyStacks() = default ;
    ListStacksResponseBodyStacks& operator=(const ListStacksResponseBodyStacks &) = default ;
    ListStacksResponseBodyStacks& operator=(ListStacksResponseBodyStacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->deletionProtection_ != nullptr && this->disableRollback_ != nullptr && this->driftDetectionTime_ != nullptr && this->operationInfo_ != nullptr && this->parentStackId_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->serviceManaged_ != nullptr && this->serviceName_ != nullptr && this->stackDriftStatus_ != nullptr
        && this->stackId_ != nullptr && this->stackName_ != nullptr && this->stackType_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr
        && this->tags_ != nullptr && this->timeoutInMinutes_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListStacksResponseBodyStacks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline ListStacksResponseBodyStacks& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline ListStacksResponseBodyStacks& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline ListStacksResponseBodyStacks& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // operationInfo Field Functions 
    bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
    void deleteOperationInfo() { this->operationInfo_ = nullptr;};
    inline const Models::ListStacksResponseBodyStacksOperationInfo & operationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, Models::ListStacksResponseBodyStacksOperationInfo) };
    inline Models::ListStacksResponseBodyStacksOperationInfo operationInfo() { DARABONBA_PTR_GET(operationInfo_, Models::ListStacksResponseBodyStacksOperationInfo) };
    inline ListStacksResponseBodyStacks& setOperationInfo(const Models::ListStacksResponseBodyStacksOperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
    inline ListStacksResponseBodyStacks& setOperationInfo(Models::ListStacksResponseBodyStacksOperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


    // parentStackId Field Functions 
    bool hasParentStackId() const { return this->parentStackId_ != nullptr;};
    void deleteParentStackId() { this->parentStackId_ = nullptr;};
    inline string parentStackId() const { DARABONBA_PTR_GET_DEFAULT(parentStackId_, "") };
    inline ListStacksResponseBodyStacks& setParentStackId(string parentStackId) { DARABONBA_PTR_SET_VALUE(parentStackId_, parentStackId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListStacksResponseBodyStacks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListStacksResponseBodyStacks& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline ListStacksResponseBodyStacks& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListStacksResponseBodyStacks& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // stackDriftStatus Field Functions 
    bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
    void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
    inline string stackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
    inline ListStacksResponseBodyStacks& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListStacksResponseBodyStacks& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline ListStacksResponseBodyStacks& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // stackType Field Functions 
    bool hasStackType() const { return this->stackType_ != nullptr;};
    void deleteStackType() { this->stackType_ = nullptr;};
    inline string stackType() const { DARABONBA_PTR_GET_DEFAULT(stackType_, "") };
    inline ListStacksResponseBodyStacks& setStackType(string stackType) { DARABONBA_PTR_SET_VALUE(stackType_, stackType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStacksResponseBodyStacks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListStacksResponseBodyStacks& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListStacksResponseBodyStacksTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListStacksResponseBodyStacksTags>) };
    inline vector<Models::ListStacksResponseBodyStacksTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListStacksResponseBodyStacksTags>) };
    inline ListStacksResponseBodyStacks& setTags(const vector<Models::ListStacksResponseBodyStacksTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListStacksResponseBodyStacks& setTags(vector<Models::ListStacksResponseBodyStacksTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline ListStacksResponseBodyStacks& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListStacksResponseBodyStacks& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the stack was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether deletion protection is enabled for the stack. Valid values:
    // 
    // *   Enabled: Deletion protection is enabled for the stack.
    // *   Disabled: Deletion protection is disabled for the stack. In this case, you can delete the stack by using the console or calling the [DeleteStack](https://help.aliyun.com/document_detail/610812.html) operation.
    // 
    // >  Deletion protection of a nested stack is the same as that of its root stack.
    std::shared_ptr<string> deletionProtection_ = nullptr;
    // Indicates whether rollback is disabled when the stack fails to be created. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // The time when the most recent successful drift detection was performed on the stack.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The supplementary information that is returned if an error occurs on a stack operation.
    // 
    // >  This parameter is returned only under specific conditions, and is returned together with at least one sub-parameter. For example, an error occurred when an API operation of another Alibaba Cloud service was called.
    std::shared_ptr<Models::ListStacksResponseBodyStacksOperationInfo> operationInfo_ = nullptr;
    // The ID of the parent stack.
    std::shared_ptr<string> parentStackId_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the stack is a managed stack. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // The name of the service to which the managed stack belongs.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The state of the stack on which the most recent successful drift detection was performed. Valid values:
    // 
    // *   DRIFTED: The stack has drifted.
    // *   NOT_CHECKED: No successful drift detection is performed on the stack.
    // *   IN_SYNC: The stack is being synchronized.
    std::shared_ptr<string> stackDriftStatus_ = nullptr;
    // The stack ID.
    std::shared_ptr<string> stackId_ = nullptr;
    // The stack name.
    std::shared_ptr<string> stackName_ = nullptr;
    // The stack type. Valid values:
    // 
    // *   ROS: ROS stack. The stack is created by using a ROS template.
    // *   Terraform: Terraform stack. The stack is created by using a Terraform template.
    std::shared_ptr<string> stackType_ = nullptr;
    // The state of the stack.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the stack is in its current state.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The tags of the stack.
    std::shared_ptr<vector<Models::ListStacksResponseBodyStacksTags>> tags_ = nullptr;
    // The timeout period for creating the stack. Unit: minutes.
    std::shared_ptr<int32_t> timeoutInMinutes_ = nullptr;
    // The time when the stack was updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
