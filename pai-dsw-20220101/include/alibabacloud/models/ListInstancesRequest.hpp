// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_ANY_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MaxCpu, maxCpu_);
      DARABONBA_PTR_TO_JSON(MaxGpu, maxGpu_);
      DARABONBA_PTR_TO_JSON(MaxGpuMemory, maxGpuMemory_);
      DARABONBA_PTR_TO_JSON(MaxMemory, maxMemory_);
      DARABONBA_PTR_TO_JSON(MinCpu, minCpu_);
      DARABONBA_PTR_TO_JSON(MinGpu, minGpu_);
      DARABONBA_PTR_TO_JSON(MinGpuMemory, minGpuMemory_);
      DARABONBA_PTR_TO_JSON(MinMemory, minMemory_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_TO_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_ANY_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MaxCpu, maxCpu_);
      DARABONBA_PTR_FROM_JSON(MaxGpu, maxGpu_);
      DARABONBA_PTR_FROM_JSON(MaxGpuMemory, maxGpuMemory_);
      DARABONBA_PTR_FROM_JSON(MaxMemory, maxMemory_);
      DARABONBA_PTR_FROM_JSON(MinCpu, minCpu_);
      DARABONBA_PTR_FROM_JSON(MinGpu, minGpu_);
      DARABONBA_PTR_FROM_JSON(MinGpuMemory, minGpuMemory_);
      DARABONBA_PTR_FROM_JSON(MinMemory, minMemory_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_FROM_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListInstancesRequest() = default ;
    ListInstancesRequest(const ListInstancesRequest &) = default ;
    ListInstancesRequest(ListInstancesRequest &&) = default ;
    ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequest() = default ;
    ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
    ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->accessibility_ == nullptr && this->createUserId_ == nullptr && this->gpuType_ == nullptr && this->imageName_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->labels_ == nullptr && this->maxCpu_ == nullptr && this->maxGpu_ == nullptr && this->maxGpuMemory_ == nullptr
        && this->maxMemory_ == nullptr && this->minCpu_ == nullptr && this->minGpu_ == nullptr && this->minGpuMemory_ == nullptr && this->minMemory_ == nullptr
        && this->order_ == nullptr && this->oversoldInfo_ == nullptr && this->oversoldType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->paymentType_ == nullptr && this->resourceId_ == nullptr && this->sortBy_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->workspaceId_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListInstancesRequest& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListInstancesRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline ListInstancesRequest& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string getGpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline ListInstancesRequest& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListInstancesRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & getLabels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & getLabels() { DARABONBA_GET(labels_) };
    inline ListInstancesRequest& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline ListInstancesRequest& setLabels(Darabonba::Json && labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // maxCpu Field Functions 
    bool hasMaxCpu() const { return this->maxCpu_ != nullptr;};
    void deleteMaxCpu() { this->maxCpu_ = nullptr;};
    inline string getMaxCpu() const { DARABONBA_PTR_GET_DEFAULT(maxCpu_, "") };
    inline ListInstancesRequest& setMaxCpu(string maxCpu) { DARABONBA_PTR_SET_VALUE(maxCpu_, maxCpu) };


    // maxGpu Field Functions 
    bool hasMaxGpu() const { return this->maxGpu_ != nullptr;};
    void deleteMaxGpu() { this->maxGpu_ = nullptr;};
    inline string getMaxGpu() const { DARABONBA_PTR_GET_DEFAULT(maxGpu_, "") };
    inline ListInstancesRequest& setMaxGpu(string maxGpu) { DARABONBA_PTR_SET_VALUE(maxGpu_, maxGpu) };


    // maxGpuMemory Field Functions 
    bool hasMaxGpuMemory() const { return this->maxGpuMemory_ != nullptr;};
    void deleteMaxGpuMemory() { this->maxGpuMemory_ = nullptr;};
    inline string getMaxGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(maxGpuMemory_, "") };
    inline ListInstancesRequest& setMaxGpuMemory(string maxGpuMemory) { DARABONBA_PTR_SET_VALUE(maxGpuMemory_, maxGpuMemory) };


    // maxMemory Field Functions 
    bool hasMaxMemory() const { return this->maxMemory_ != nullptr;};
    void deleteMaxMemory() { this->maxMemory_ = nullptr;};
    inline string getMaxMemory() const { DARABONBA_PTR_GET_DEFAULT(maxMemory_, "") };
    inline ListInstancesRequest& setMaxMemory(string maxMemory) { DARABONBA_PTR_SET_VALUE(maxMemory_, maxMemory) };


    // minCpu Field Functions 
    bool hasMinCpu() const { return this->minCpu_ != nullptr;};
    void deleteMinCpu() { this->minCpu_ = nullptr;};
    inline string getMinCpu() const { DARABONBA_PTR_GET_DEFAULT(minCpu_, "") };
    inline ListInstancesRequest& setMinCpu(string minCpu) { DARABONBA_PTR_SET_VALUE(minCpu_, minCpu) };


    // minGpu Field Functions 
    bool hasMinGpu() const { return this->minGpu_ != nullptr;};
    void deleteMinGpu() { this->minGpu_ = nullptr;};
    inline string getMinGpu() const { DARABONBA_PTR_GET_DEFAULT(minGpu_, "") };
    inline ListInstancesRequest& setMinGpu(string minGpu) { DARABONBA_PTR_SET_VALUE(minGpu_, minGpu) };


    // minGpuMemory Field Functions 
    bool hasMinGpuMemory() const { return this->minGpuMemory_ != nullptr;};
    void deleteMinGpuMemory() { this->minGpuMemory_ = nullptr;};
    inline string getMinGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(minGpuMemory_, "") };
    inline ListInstancesRequest& setMinGpuMemory(string minGpuMemory) { DARABONBA_PTR_SET_VALUE(minGpuMemory_, minGpuMemory) };


    // minMemory Field Functions 
    bool hasMinMemory() const { return this->minMemory_ != nullptr;};
    void deleteMinMemory() { this->minMemory_ = nullptr;};
    inline string getMinMemory() const { DARABONBA_PTR_GET_DEFAULT(minMemory_, "") };
    inline ListInstancesRequest& setMinMemory(string minMemory) { DARABONBA_PTR_SET_VALUE(minMemory_, minMemory) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListInstancesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // oversoldInfo Field Functions 
    bool hasOversoldInfo() const { return this->oversoldInfo_ != nullptr;};
    void deleteOversoldInfo() { this->oversoldInfo_ = nullptr;};
    inline string getOversoldInfo() const { DARABONBA_PTR_GET_DEFAULT(oversoldInfo_, "") };
    inline ListInstancesRequest& setOversoldInfo(string oversoldInfo) { DARABONBA_PTR_SET_VALUE(oversoldInfo_, oversoldInfo) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string getOversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline ListInstancesRequest& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListInstancesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListInstancesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListInstancesRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListInstancesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListInstancesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListInstancesRequest::Tag>) };
    inline vector<ListInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListInstancesRequest::Tag>) };
    inline ListInstancesRequest& setTag(const vector<ListInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListInstancesRequest& setTag(vector<ListInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListInstancesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accelerator type.
    // 
    // *   CPU: Only CPU computing is used.
    // *   GPU: GPUs are used to accelerate computing.
    shared_ptr<string> acceleratorType_ {};
    // The accessibility. Valid values:
    // 
    // *   PRIVATE (default): The instances are accessible only to you and the administrator of the workspace.
    // *   PUBLIC: The instances are accessible only to all members in the workspace.
    shared_ptr<string> accessibility_ {};
    // The UID of the creator.
    shared_ptr<string> createUserId_ {};
    // The GPU type.
    shared_ptr<string> gpuType_ {};
    // The image name.
    shared_ptr<string> imageName_ {};
    // The instance ID. You can call [ListInstances](https://help.aliyun.com/document_detail/470439.html) to obtain the instance ID.
    shared_ptr<string> instanceId_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The labels. A maximum of four labels are supported.
    Darabonba::Json labels_ {};
    // The maximum number of CPUs. Unit: 0.001 CPU. The value 1000 indicates one CPU.
    shared_ptr<string> maxCpu_ {};
    // The maximum number of GPUs. Unit: 0.001 GPU. The value 1000 indicates one GPU.
    shared_ptr<string> maxGpu_ {};
    // The maximum memory size per GPU card. Unit: GB.
    shared_ptr<string> maxGpuMemory_ {};
    // The maximum memory size. Unit: GB.
    shared_ptr<string> maxMemory_ {};
    // The minimum number of CPUs. Unit: 0.001 CPU. The value 1000 indicates one CPU.
    shared_ptr<string> minCpu_ {};
    // The minimum number of GPUs. Unit: 0.001 GPU. The value 1000 indicates one GPU.
    shared_ptr<string> minGpu_ {};
    // The minimum memory size per GPU card. Unit: GB.
    shared_ptr<string> minGpuMemory_ {};
    // The minimum memory size. Unit: GB.
    shared_ptr<string> minMemory_ {};
    // The order that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   ASC
    // *   DESC
    shared_ptr<string> order_ {};
    shared_ptr<string> oversoldInfo_ {};
    shared_ptr<string> oversoldType_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    shared_ptr<string> paymentType_ {};
    // The resource group ID. If you leave this parameter empty, the instances in the pay-as-you-go resource group are queried. If you set this parameter to ALL, all instances are queried.
    shared_ptr<string> resourceId_ {};
    // The field that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   Priority
    // *   GmtCreateTime
    // *   GmtModifiedTime
    shared_ptr<string> sortBy_ {};
    // The instance status.
    // 
    // Valid values:
    // 
    // *   Creating
    // *   SaveFailed
    // *   Stopped
    // *   Failed
    // *   ResourceAllocating
    // *   Stopping
    // *   Updating
    // *   Saving
    // *   Queuing
    // *   Recovering
    // *   Starting
    // *   Running
    // *   Saved
    // *   Deleting
    // *   EnvPreparing
    shared_ptr<string> status_ {};
    // The tags.
    shared_ptr<vector<ListInstancesRequest::Tag>> tag_ {};
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
