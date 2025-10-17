// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DestProductType, destProductType_);
      DARABONBA_PTR_TO_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SrcProductType, srcProductType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WithoutDbList, withoutDbList_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DestProductType, destProductType_);
      DARABONBA_PTR_FROM_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SrcProductType, srcProductType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WithoutDbList, withoutDbList_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    DescribeDtsJobsRequest() = default ;
    DescribeDtsJobsRequest(const DescribeDtsJobsRequest &) = default ;
    DescribeDtsJobsRequest(DescribeDtsJobsRequest &&) = default ;
    DescribeDtsJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsRequest() = default ;
    DescribeDtsJobsRequest& operator=(const DescribeDtsJobsRequest &) = default ;
    DescribeDtsJobsRequest& operator=(DescribeDtsJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedClusterId_ == nullptr
        && return this->destProductType_ == nullptr && return this->dtsBisLabel_ == nullptr && return this->dtsInstanceId_ == nullptr && return this->dtsJobId_ == nullptr && return this->groupId_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->jobType_ == nullptr && return this->orderColumn_ == nullptr && return this->orderDirection_ == nullptr
        && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->params_ == nullptr && return this->region_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->srcProductType_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr
        && return this->type_ == nullptr && return this->withoutDbList_ == nullptr && return this->zeroEtlJob_ == nullptr; };
    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDtsJobsRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // destProductType Field Functions 
    bool hasDestProductType() const { return this->destProductType_ != nullptr;};
    void deleteDestProductType() { this->destProductType_ = nullptr;};
    inline string destProductType() const { DARABONBA_PTR_GET_DEFAULT(destProductType_, "") };
    inline DescribeDtsJobsRequest& setDestProductType(string destProductType) { DARABONBA_PTR_SET_VALUE(destProductType_, destProductType) };


    // dtsBisLabel Field Functions 
    bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
    void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
    inline string dtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
    inline DescribeDtsJobsRequest& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline DescribeDtsJobsRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobsRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDtsJobsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDtsJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDtsJobsRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDtsJobsRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string orderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline DescribeDtsJobsRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string orderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline DescribeDtsJobsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeDtsJobsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDtsJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDtsJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeDtsJobsRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDtsJobsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDtsJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDtsJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // srcProductType Field Functions 
    bool hasSrcProductType() const { return this->srcProductType_ != nullptr;};
    void deleteSrcProductType() { this->srcProductType_ = nullptr;};
    inline string srcProductType() const { DARABONBA_PTR_GET_DEFAULT(srcProductType_, "") };
    inline DescribeDtsJobsRequest& setSrcProductType(string srcProductType) { DARABONBA_PTR_SET_VALUE(srcProductType_, srcProductType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeDtsJobsRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDtsJobsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // withoutDbList Field Functions 
    bool hasWithoutDbList() const { return this->withoutDbList_ != nullptr;};
    void deleteWithoutDbList() { this->withoutDbList_ = nullptr;};
    inline bool withoutDbList() const { DARABONBA_PTR_GET_DEFAULT(withoutDbList_, false) };
    inline DescribeDtsJobsRequest& setWithoutDbList(bool withoutDbList) { DARABONBA_PTR_SET_VALUE(withoutDbList_, withoutDbList) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline DescribeDtsJobsRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the DTS dedicated cluster on which the task runs.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The type of the source database instance.
    std::shared_ptr<string> destProductType_ = nullptr;
    // The environment tag of the DTS instance. Valid values:
    // 
    // - **normal**
    // - **online**
    std::shared_ptr<string> dtsBisLabel_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking instance.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The ID of the parent task.
    // 
    // >  In most cases, you do not need to specify this parameter.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the source or target database instance corresponding to the request parameter **InstanceType**.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the source or target database instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The type of the DTS task. Valid values:
    // 
    // *   **MIGRATION**: data migration. This is the default value.
    // *   **SYNC**: data synchronization.
    // *   **SUBSCRIBE**: change tracking.
    std::shared_ptr<string> jobType_ = nullptr;
    // The basis on which the returned DTS tasks are sorted. Valid values:
    // 
    // *   **CreateTime**: sorts the DTS tasks based on the points in time when the DTS tasks are created.
    // *   **FinishTime**: sorts the DTS tasks based on the points in time when the DTS tasks are complete.
    // *   **duLimit** sorts the DTS tasks based on the upper limits on DTS Units (DUs) that the DTS tasks can use. This option applies only to the DTS tasks that are run on a DTS dedicated cluster.
    // 
    // >  You can also set the **OrderDirection** parameter to specify whether to sort the DTS tasks in ascending or descending order.
    std::shared_ptr<string> orderColumn_ = nullptr;
    // The order in which the returned DTS tasks are sorted. Valid values:
    // 
    // *   **ASC**: sorts the DTS tasks in ascending order. This is the default value.
    // *   **DESC**: sorts the DTS tasks in descending order.
    std::shared_ptr<string> orderDirection_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **20**, **30**, **50**, and **100**. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The content of the query condition.
    // 
    // >  You must set the **Type** parameter to specify the type of the query condition.
    std::shared_ptr<string> params_ = nullptr;
    // The ID of the region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> region_ = nullptr;
    // This parameter is deprecated.
    // 
    // Valid values:
    // 
    // *   cn-hangzhou
    // *   cn-shanghai
    // *   cn-beijing
    // *   cn-guangzhou
    // *   cn-shenzhen
    // *   cn-chengdu
    // *   cn-heyuan
    // *   cn-hongkong
    // *   cn-qingdao
    // *   cn-zhangbei
    // *   cn-zhangjiakou
    // *   us-east-1
    // *   us-west-1
    // *   cn-hangzhou-finance
    // *   cn-shanghai-finance
    // *   cn-shanghai-finance-1
    // *   cn-shenzhen-finance
    // *   cn-shenzhen-finance-1
    // *   cn-beijing-finance-1
    // *   cn-huhehaote
    // *   cn-north-2-gov-1
    // *   eu-central-1
    // *   eu-west-1
    // *   me-central-1
    // *   me-east-1
    // *   ap-northeast-1
    // *   ap-northeast-2
    // *   ap-southeast-1
    // *   ap-southeast-2
    // *   ap-southeast-3
    // *   ap-southeast-5
    // *   ap-southeast-6
    // *   ap-southeast-7
    // *   cn-wulanchabu
    // *   cn-zhengzhou-jva
    // *   cn-wuhan-lr
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the destination database instance.
    std::shared_ptr<string> srcProductType_ = nullptr;
    // The state of the DTS task.
    // 
    // Valid values for a data migration task:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **PreCheckPass**: The task passed the precheck.
    // *   **NotConfigured**: The task is not configured.
    // *   **Migrating**: The task is in progress.
    // *   **Suspending**: The task is paused.
    // *   **MigrationFailed**: The task failed.
    // *   **Finished**: The task is complete.
    // *   **Retrying**: The task is being retried.
    // *   **Upgrade**: The task is being upgraded.
    // *   **Locked**: The task is locked.
    // *   **Downgrade**: The task is being downgraded.
    // 
    // Valid values for a data synchronization task:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **PreCheckPass**: The task passed the precheck.
    // *   **NotConfigured**: The task is not configured.
    // *   **Initializing**: The task is being initialized.
    // *   **InitializeFailed**: Initialization failed.
    // *   **Synchronizing**: The task is in progress.
    // *   **Failed**: The task failed.
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
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **PreCheckPass**: The task passed the precheck.
    // *   **Starting**: The task is being started.
    // *   **Normal**: The task is running as expected.
    // *   **Retrying**: The task is being retried.
    // *   **Abnormal**: The task is not running as expected.
    // *   **Upgrade**: The task is being upgraded.
    // *   **Locked**: The task is locked.
    // *   **Downgrade**: The task is being downgraded.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the DTS task to be queried. Specify tags in the JSON format.
    // 
    // >  You can call the **ListTagResources** operation to query the tag key and tag value.
    std::shared_ptr<string> tags_ = nullptr;
    // The type of the query condition. Valid values:
    // 
    // *   **instance**: queries DTS tasks based on the ID of a DTS instance.
    // *   **name**: queries DTS tasks based on the name of a DTS instance. Fuzzy match is supported.
    // *   **srcRds**: queries DTS tasks based on the ID of an ApsaraDB RDS instance. The ApsaraDB RDS instance is the source instance of a DTS task.
    // *   **rds**: queries DTS tasks based on the ID of an ApsaraDB RDS instance. The ApsaraDB RDS instance is the destination instance of a DTS task.
    // 
    // >  You must set the **Params** parameter to specify the content of the query condition.
    std::shared_ptr<string> type_ = nullptr;
    // Specifies whether to skip the **DbObject** parameter in the response. The DbObject parameter specifies the objects of the data migration, data synchronization, or change tracking task. Valid values:
    // 
    // - **true**: does not return **DbObject**.
    // - **false**: returns **DbObject**. If you set this parameter to false, the response time is shortened.
    std::shared_ptr<bool> withoutDbList_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be:
    // - **false**: No. - **true**: Yes.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
