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
    // The parent task ID of a distributed synchronization task.
    shared_ptr<string> groupId_ {};
    // The task type. Valid values:
    // 
    // - **MIGRATION**: data migration.
    // - **SYNC**: data synchronization.
    // - **SUBSCRIBE**: change tracking.
    shared_ptr<string> jobType_ {};
    // The query value that corresponds to JobType.
    shared_ptr<string> params_ {};
    // The region ID used as a filter condition. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The ID of the region where the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. This is a global parameter and does not need to be passed for this API operation.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the source database.
    shared_ptr<string> srcDbType_ {};
    // The instance status of the DTS instance. Valid values:
    // 
    // Data migration node statuses:
    // - **NotStarted**: not started.
    // - **Prechecking**: running a dry run.
    // - **PrecheckFailed**: dry run failed.
    // - **PreCheckPass**: dry run passed.
    // - **NotConfigured**: not configured.
    // - **Migrating**: migrating.
    // - **Suspending**: paused.
    // - **MigrationFailed**: migration failed.
    // - **Finished**: finished.
    // - **Retrying**: retrying.
    // - **Upgrade**: upgrading.
    // - **Locked**: locked.
    // - **Downgrade**: downgrading.
    // 
    // Data synchronization node statuses:
    // - **NotStarted**: not started.
    // - **Prechecking**: running a dry run.
    // - **PrecheckFailed**: dry run failed.
    // - **PreCheckPass**: dry run passed.
    // - **NotConfigured**: not configured.
    // - **Initializing**: performing initial synchronization.
    // - **InitializeFailed**: initial synchronization failed.
    // - **Synchronizing**: synchronizing.
    // - **Failed**: synchronization failed.
    // - **Suspending**: paused.
    // - **Modifying**: modifying sub-objects.
    // - **Finished**: finished.
    // - **Retrying**: retrying.
    // - **Upgrade**: upgrading.
    // - **Locked**: locked.
    // - **Downgrade**: downgrading.
    // 
    // Subscribe node statuses:
    // - **NotConfigured**: not configured.
    // - **NotStarted**: not started.
    // - **Prechecking**: running a dry run.
    // - **PrecheckFailed**: dry run failed.
    // - **PreCheckPass**: dry run passed.
    // - **Starting**: starting.
    // - **Normal**: Normal.
    // - **Retrying**: retrying.
    // - **Abnormal**: abnormal.
    // - **Upgrade**: upgrading.
    // - **Locked**: locked.
    // - **Downgrade**: downgrading.
    shared_ptr<string> status_ {};
    // The query type. Valid values:  
    // - **name**: queries by job name.  
    // - **rds**: queries by destination instance ID.  
    // - **instance**: queries by DTS instance ID.
    // - **srcRds**: queries by source instance ID.
    // 
    // > This parameter corresponds to the **JobType** parameter.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
