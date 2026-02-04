// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTJOBBYCONDITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COUNTJOBBYCONDITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CountJobByConditionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountJobByConditionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestDbType, destDbType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CountJobByConditionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestDbType, destDbType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SrcDbType, srcDbType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CountJobByConditionRequest() = default ;
    CountJobByConditionRequest(const CountJobByConditionRequest &) = default ;
    CountJobByConditionRequest(CountJobByConditionRequest &&) = default ;
    CountJobByConditionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountJobByConditionRequest() = default ;
    CountJobByConditionRequest& operator=(const CountJobByConditionRequest &) = default ;
    CountJobByConditionRequest& operator=(CountJobByConditionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destDbType_ == nullptr
        && this->groupId_ == nullptr && this->jobType_ == nullptr && this->params_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->srcDbType_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // destDbType Field Functions 
    bool hasDestDbType() const { return this->destDbType_ != nullptr;};
    void deleteDestDbType() { this->destDbType_ = nullptr;};
    inline string getDestDbType() const { DARABONBA_PTR_GET_DEFAULT(destDbType_, "") };
    inline CountJobByConditionRequest& setDestDbType(string destDbType) { DARABONBA_PTR_SET_VALUE(destDbType_, destDbType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CountJobByConditionRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CountJobByConditionRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline CountJobByConditionRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CountJobByConditionRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CountJobByConditionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CountJobByConditionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // srcDbType Field Functions 
    bool hasSrcDbType() const { return this->srcDbType_ != nullptr;};
    void deleteSrcDbType() { this->srcDbType_ = nullptr;};
    inline string getSrcDbType() const { DARABONBA_PTR_GET_DEFAULT(srcDbType_, "") };
    inline CountJobByConditionRequest& setSrcDbType(string srcDbType) { DARABONBA_PTR_SET_VALUE(srcDbType_, srcDbType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CountJobByConditionRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CountJobByConditionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the destination database.
    shared_ptr<string> destDbType_ {};
    // The ID of the DTS task.
    shared_ptr<string> groupId_ {};
    // The type of the DTS task. Valid values:
    // 
    // *   **MIGRATION**: data migration task
    // *   **SYNC**: data synchronization task
    // *   **SUBSCRIBE**: change tracking task
    shared_ptr<string> jobType_ {};
    // The content of the query condition, which corresponds to the value of the JobType parameter.
    shared_ptr<string> params_ {};
    // One of the query conditions. The ID of the region. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The ID of the region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Resource group ID, global parameter that does not need to be passed in by the current API.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the source database.
    shared_ptr<string> srcDbType_ {};
    // The status of the DTS task.
    // 
    // Valid values for a data migration task:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is in precheck.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **PreCheckPass**: The task passed the precheck.
    // *   **NotConfigured**: The task is not configured.
    // *   **Migrating**: The task is in progress.
    // *   **Suspending**: The task is paused.
    // *   **MigrationFailed**: The task failed to migrate data.
    // *   **Finished**: The task is complete.
    // *   **Retrying**: The task is being retried.
    // *   **Upgrade**: The task is being upgraded.
    // *   **Locked**: The task is locked.
    // *   **Downgrade**: The task is being downgraded.
    // 
    // Valid values for a data synchronization task:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is in precheck.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **PreCheckPass**: The task passed the precheck.
    // *   **NotConfigured**: The task is not configured.
    // *   **Initializing**: The task is performing initial synchronization.
    // *   **InitializeFailed**: Initial synchronization failed.
    // *   **Synchronizing**: The task is in progress.
    // *   **Failed**: The task failed to synchronize data.
    // *   **Suspending**: The task is paused.
    // *   **Modifying**: The objects in the task are being modified.
    // *   **Finished**: The task is complete.
    // *   **Retrying**: The task is being retried.
    // *   **Upgrade**: The task is being upgraded.
    // *   **Locked**: The task is locked.
    // *   **Downgrade**: The task is being downgraded.
    // 
    // Valid values for a change tracking task:
    // 
    // *   **NotConfigured**: The task is not configured.
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is in precheck.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **PreCheckPass**: The task passed the precheck.
    // *   **Starting**: The task is being started.
    // *   **Normal**: The task is running as expected.
    // *   **Retrying**: The task is being retried.
    // *   **Abnormal**: The task is not running as expected.
    // *   **Upgrade**: The task is being upgraded.
    // *   **Locked**: The task is locked.
    // *   **Downgrade**: The task is being downgraded.
    shared_ptr<string> status_ {};
    // The content of the query condition. Valid values:
    // 
    // *   **name**: the name of the task
    // *   **rds**: the ID of the destination instance
    // *   **instance**: the ID of the Data Transmission Service (DTS) instance
    // *   **srcRds**: the ID of the source instance
    // 
    // > The value of this parameter corresponds to the value of the **JobType** parameter.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
