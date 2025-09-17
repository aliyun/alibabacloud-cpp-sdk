// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationJobsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeReplicationJobsRequest() = default ;
    DescribeReplicationJobsRequest(const DescribeReplicationJobsRequest &) = default ;
    DescribeReplicationJobsRequest(DescribeReplicationJobsRequest &&) = default ;
    DescribeReplicationJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsRequest() = default ;
    DescribeReplicationJobsRequest& operator=(const DescribeReplicationJobsRequest &) = default ;
    DescribeReplicationJobsRequest& operator=(DescribeReplicationJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessStatus_ != nullptr
        && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->jobType_ != nullptr && this->name_ != nullptr && this->ownerId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->sourceId_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr; };
    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeReplicationJobsRequest& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline DescribeReplicationJobsRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline DescribeReplicationJobsRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline const vector<string> & jobId() const { DARABONBA_PTR_GET_CONST(jobId_, vector<string>) };
    inline vector<string> jobId() { DARABONBA_PTR_GET(jobId_, vector<string>) };
    inline DescribeReplicationJobsRequest& setJobId(const vector<string> & jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };
    inline DescribeReplicationJobsRequest& setJobId(vector<string> && jobId) { DARABONBA_PTR_SET_RVALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline int32_t jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
    inline DescribeReplicationJobsRequest& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeReplicationJobsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeReplicationJobsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeReplicationJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeReplicationJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeReplicationJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeReplicationJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeReplicationJobsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline const vector<string> & sourceId() const { DARABONBA_PTR_GET_CONST(sourceId_, vector<string>) };
    inline vector<string> sourceId() { DARABONBA_PTR_GET(sourceId_, vector<string>) };
    inline DescribeReplicationJobsRequest& setSourceId(const vector<string> & sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };
    inline DescribeReplicationJobsRequest& setSourceId(vector<string> && sourceId) { DARABONBA_PTR_SET_RVALUE(sourceId_, sourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeReplicationJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeReplicationJobsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeReplicationJobsRequestTag>) };
    inline vector<DescribeReplicationJobsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeReplicationJobsRequestTag>) };
    inline DescribeReplicationJobsRequest& setTag(const vector<DescribeReplicationJobsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeReplicationJobsRequest& setTag(vector<DescribeReplicationJobsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The business status of the migration job. Valid values:
    // 
    // *   Preparing: The migration is being prepared.
    // *   Syncing: Data is being synchronized.
    // *   Processing: The migration is in progress.
    // *   Cleaning: Intermediate resources are being released.
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The IDs of the destination Elastic Compute Service (ECS) instances.
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
    // The IDs of the migration jobs. You can specify a maximum of 50 IDs.
    std::shared_ptr<vector<string>> jobId_ = nullptr;
    // The type of the migration job. Valid values:
    // 
    // *   0: server migration.
    // *   1: operating system migration.
    // *   2: cross-zone migration.
    // *   3: agentless migration for a VMware VM.
    std::shared_ptr<int32_t> jobType_ = nullptr;
    // The name of the migration job.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Minimum value: 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the Alibaba Cloud region to which you want to migrate the source server.
    // 
    // For example, if you want to migrate a source server to the China (Hangzhou) region, set this parameter to `cn-hangzhou`. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the latest regions.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The IDs of the source servers. You can specify a maximum of 50 IDs.
    std::shared_ptr<vector<string>> sourceId_ = nullptr;
    // The status of the migration job. Valid values:
    // 
    // *   Ready: The migration job is not started.
    // *   Running: The migration job is running.
    // *   Stopped: The migration job is paused.
    // *   InError: An error occurs in the migration job.
    // *   Finished: The migration job is complete.
    // *   Waiting: The migration job is waiting to run.
    // *   Expired: The migration job has expired.
    // *   Deleting: The migration job is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The information about tags that are attached to the SMC resource.
    std::shared_ptr<vector<DescribeReplicationJobsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
