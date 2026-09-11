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
        && this->destProductType_ == nullptr && this->dtsBisLabel_ == nullptr && this->dtsInstanceId_ == nullptr && this->dtsJobId_ == nullptr && this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->jobType_ == nullptr && this->orderColumn_ == nullptr && this->orderDirection_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->params_ == nullptr && this->region_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->srcProductType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr && this->withoutDbList_ == nullptr && this->zeroEtlJob_ == nullptr; };
    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDtsJobsRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // destProductType Field Functions 
    bool hasDestProductType() const { return this->destProductType_ != nullptr;};
    void deleteDestProductType() { this->destProductType_ = nullptr;};
    inline string getDestProductType() const { DARABONBA_PTR_GET_DEFAULT(destProductType_, "") };
    inline DescribeDtsJobsRequest& setDestProductType(string destProductType) { DARABONBA_PTR_SET_VALUE(destProductType_, destProductType) };


    // dtsBisLabel Field Functions 
    bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
    void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
    inline string getDtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
    inline DescribeDtsJobsRequest& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline DescribeDtsJobsRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobsRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDtsJobsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDtsJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDtsJobsRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDtsJobsRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline DescribeDtsJobsRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline DescribeDtsJobsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeDtsJobsRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDtsJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDtsJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeDtsJobsRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDtsJobsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDtsJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDtsJobsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // srcProductType Field Functions 
    bool hasSrcProductType() const { return this->srcProductType_ != nullptr;};
    void deleteSrcProductType() { this->srcProductType_ = nullptr;};
    inline string getSrcProductType() const { DARABONBA_PTR_GET_DEFAULT(srcProductType_, "") };
    inline DescribeDtsJobsRequest& setSrcProductType(string srcProductType) { DARABONBA_PTR_SET_VALUE(srcProductType_, srcProductType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeDtsJobsRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDtsJobsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // withoutDbList Field Functions 
    bool hasWithoutDbList() const { return this->withoutDbList_ != nullptr;};
    void deleteWithoutDbList() { this->withoutDbList_ = nullptr;};
    inline bool getWithoutDbList() const { DARABONBA_PTR_GET_DEFAULT(withoutDbList_, false) };
    inline DescribeDtsJobsRequest& setWithoutDbList(bool withoutDbList) { DARABONBA_PTR_SET_VALUE(withoutDbList_, withoutDbList) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool getZeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline DescribeDtsJobsRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the DTS dedicated cluster.
    shared_ptr<string> dedicatedClusterId_ {};
    // The type of the source database instance.
    shared_ptr<string> destProductType_ {};
    // The environment label of the DTS instance. Valid values:
    // - **normal**: normal
    // - **online**: online
    shared_ptr<string> dtsBisLabel_ {};
    // The ID of the data migration, data synchronization, or change tracking instance.
    // > Separate multiple instance IDs with commas (,). Make sure that the **JobType** parameter is set as expected.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the data migration, data synchronization, or change tracking task.
    // 
    // > Separate multiple task IDs with commas (,). Make sure that the **JobType** parameter is set as expected.
    shared_ptr<string> dtsJobId_ {};
    // The DTS task ID.
    // > In most cases, you do not need to set this parameter.
    shared_ptr<string> groupId_ {};
    // The ID of the source or destination database instance that corresponds to the **InstanceType** request parameter.
    shared_ptr<string> instanceId_ {};
    // The type of the source or destination database instance.
    shared_ptr<string> instanceType_ {};
    // The task type of the DTS instance. Valid values:
    // - **MIGRATION**: data migration (default).
    // - **SYNC**: data synchronization.
    // - **SUBSCRIBE**: change tracking.
    shared_ptr<string> jobType_ {};
    // The sort criterion when the response contains multiple DTS instances. Valid values:
    // 
    // - **CreateTime**: sorts by task creation time.
    // - **FinishTime**: sorts by task completion time.
    // - **duLimit** (dedicated cluster tasks): sorts by the upper limit of DU usage for DTS tasks. This value is supported only for dedicated clusters.
    // 
    // > You can also specify **OrderDirection** to set the sort order to ascending or descending.
    shared_ptr<string> orderColumn_ {};
    // The sort order of instances. Valid values:
    // 
    // - **ASC**: ascending order. This is the default value.
    // - **DESC**: descending order.
    shared_ptr<string> orderDirection_ {};
    shared_ptr<string> ownerId_ {};
    // The page number. The value must be a positive integer that does not exceed the maximum value of the Integer data type. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page. Valid values: **10**, **20**, and **30**. Default value: **20**. Maximum value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The specific content of the query condition.
    // > Specify **Type** in advance to define the query condition.
    shared_ptr<string> params_ {};
    // The region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> region_ {};
    // Deprecated parameter.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the destination database instance.
    shared_ptr<string> srcProductType_ {};
    // The instance status of the DTS instance. Valid values:
    // 
    // Data migration task statuses:
    // - **NotStarted**: not started.
    // - **Prechecking**: running a precheck.
    // - **PrecheckFailed**: precheck failed.
    // - **PreCheckPass**: precheck passed.
    // - **NotConfigured**: not configured.
    // - **Migrating**: migrating.
    // - **Suspending**: paused.
    // - **MigrationFailed**: migration failed.
    // - **Finished**: completed.
    // - **Retrying**: retrying.
    // - **Upgrade**: upgrading.
    // - **Locked**: locked.
    // - **Downgrade**: downgrading.
    // 
    // Data synchronization task statuses:
    // - **NotStarted**: not started.
    // - **Prechecking**: running a precheck.
    // - **PrecheckFailed**: precheck failed.
    // - **PreCheckPass**: precheck passed.
    // - **NotConfigured**: not configured.
    // - **Initializing**: performing initial synchronization.
    // - **InitializeFailed**: initial synchronization failed.
    // - **Synchronizing**: synchronizing.
    // - **Failed**: synchronization failed.
    // - **Suspending**: paused.
    // - **Modifying**: modifying synchronization objects.
    // - **Finished**: completed.
    // - **Retrying**: retrying.
    // - **Upgrade**: upgrading.
    // - **Locked**: locked.
    // - **Downgrade**: downgrading.
    // 
    // Change tracking task statuses:
    // - **NotConfigured**: not configured.
    // - **NotStarted**: not started.
    // - **Prechecking**: running a precheck.
    // - **PrecheckFailed**: precheck failed.
    // - **PreCheckPass**: precheck passed.
    // - **Starting**: starting.
    // - **Normal**: normal.
    // - **Retrying**: retrying.
    // - **Abnormal**: abnormal.
    // - **Upgrade**: upgrading.
    // - **Locked**: locked.
    // - **Downgrade**: downgrading.
    shared_ptr<string> status_ {};
    // The tag-based search condition in JSON format.
    // > You can call the **ListTagResources** operation to query tag keys and values.
    shared_ptr<string> tags_ {};
    // The conditional query parameter. Valid values:
    // 
    // - **instance**: queries by DTS instance ID.
    // - **name**: queries by DTS instance name. Fuzzy match is supported.
    // - **srcRds**: queries by the ID of the source instance (ApsaraDB RDS).
    // - **rds**: queries by the ID of the destination instance (ApsaraDB RDS).
    // 
    // > Specify the **Params** parameter to provide the specific content of the query condition.
    shared_ptr<string> type_ {};
    // Specifies whether to exclude task objects from the response (not return the **DbObject** parameter). Valid values:
    // 
    // - **true**: excludes **DbObject** from the response.
    // - **false**: includes **DbObject** in the response, which can improve the response speed.
    shared_ptr<bool> withoutDbList_ {};
    // Specifies whether the node is a seamless integration (Zero-ETL) node. Valid values:
    // 
    // - **false**: No.
    // - **true**: Yes.
    shared_ptr<bool> zeroEtlJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
