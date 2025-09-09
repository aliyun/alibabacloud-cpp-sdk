// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
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
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
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
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest(ListInstancesShrinkRequest &&) = default ;
    ListInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesShrinkRequest() = default ;
    ListInstancesShrinkRequest& operator=(const ListInstancesShrinkRequest &) = default ;
    ListInstancesShrinkRequest& operator=(ListInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceleratorType_ != nullptr
        && this->accessibility_ != nullptr && this->createUserId_ != nullptr && this->gpuType_ != nullptr && this->imageName_ != nullptr && this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->labelsShrink_ != nullptr && this->maxCpu_ != nullptr && this->maxGpu_ != nullptr && this->maxGpuMemory_ != nullptr
        && this->maxMemory_ != nullptr && this->minCpu_ != nullptr && this->minGpu_ != nullptr && this->minGpuMemory_ != nullptr && this->minMemory_ != nullptr
        && this->order_ != nullptr && this->oversoldInfo_ != nullptr && this->oversoldType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->paymentType_ != nullptr && this->resourceId_ != nullptr && this->sortBy_ != nullptr && this->status_ != nullptr && this->tagShrink_ != nullptr
        && this->workspaceId_ != nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListInstancesShrinkRequest& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListInstancesShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline ListInstancesShrinkRequest& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline ListInstancesShrinkRequest& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListInstancesShrinkRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string labelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline ListInstancesShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // maxCpu Field Functions 
    bool hasMaxCpu() const { return this->maxCpu_ != nullptr;};
    void deleteMaxCpu() { this->maxCpu_ = nullptr;};
    inline string maxCpu() const { DARABONBA_PTR_GET_DEFAULT(maxCpu_, "") };
    inline ListInstancesShrinkRequest& setMaxCpu(string maxCpu) { DARABONBA_PTR_SET_VALUE(maxCpu_, maxCpu) };


    // maxGpu Field Functions 
    bool hasMaxGpu() const { return this->maxGpu_ != nullptr;};
    void deleteMaxGpu() { this->maxGpu_ = nullptr;};
    inline string maxGpu() const { DARABONBA_PTR_GET_DEFAULT(maxGpu_, "") };
    inline ListInstancesShrinkRequest& setMaxGpu(string maxGpu) { DARABONBA_PTR_SET_VALUE(maxGpu_, maxGpu) };


    // maxGpuMemory Field Functions 
    bool hasMaxGpuMemory() const { return this->maxGpuMemory_ != nullptr;};
    void deleteMaxGpuMemory() { this->maxGpuMemory_ = nullptr;};
    inline string maxGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(maxGpuMemory_, "") };
    inline ListInstancesShrinkRequest& setMaxGpuMemory(string maxGpuMemory) { DARABONBA_PTR_SET_VALUE(maxGpuMemory_, maxGpuMemory) };


    // maxMemory Field Functions 
    bool hasMaxMemory() const { return this->maxMemory_ != nullptr;};
    void deleteMaxMemory() { this->maxMemory_ = nullptr;};
    inline string maxMemory() const { DARABONBA_PTR_GET_DEFAULT(maxMemory_, "") };
    inline ListInstancesShrinkRequest& setMaxMemory(string maxMemory) { DARABONBA_PTR_SET_VALUE(maxMemory_, maxMemory) };


    // minCpu Field Functions 
    bool hasMinCpu() const { return this->minCpu_ != nullptr;};
    void deleteMinCpu() { this->minCpu_ = nullptr;};
    inline string minCpu() const { DARABONBA_PTR_GET_DEFAULT(minCpu_, "") };
    inline ListInstancesShrinkRequest& setMinCpu(string minCpu) { DARABONBA_PTR_SET_VALUE(minCpu_, minCpu) };


    // minGpu Field Functions 
    bool hasMinGpu() const { return this->minGpu_ != nullptr;};
    void deleteMinGpu() { this->minGpu_ = nullptr;};
    inline string minGpu() const { DARABONBA_PTR_GET_DEFAULT(minGpu_, "") };
    inline ListInstancesShrinkRequest& setMinGpu(string minGpu) { DARABONBA_PTR_SET_VALUE(minGpu_, minGpu) };


    // minGpuMemory Field Functions 
    bool hasMinGpuMemory() const { return this->minGpuMemory_ != nullptr;};
    void deleteMinGpuMemory() { this->minGpuMemory_ = nullptr;};
    inline string minGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(minGpuMemory_, "") };
    inline ListInstancesShrinkRequest& setMinGpuMemory(string minGpuMemory) { DARABONBA_PTR_SET_VALUE(minGpuMemory_, minGpuMemory) };


    // minMemory Field Functions 
    bool hasMinMemory() const { return this->minMemory_ != nullptr;};
    void deleteMinMemory() { this->minMemory_ = nullptr;};
    inline string minMemory() const { DARABONBA_PTR_GET_DEFAULT(minMemory_, "") };
    inline ListInstancesShrinkRequest& setMinMemory(string minMemory) { DARABONBA_PTR_SET_VALUE(minMemory_, minMemory) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListInstancesShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // oversoldInfo Field Functions 
    bool hasOversoldInfo() const { return this->oversoldInfo_ != nullptr;};
    void deleteOversoldInfo() { this->oversoldInfo_ = nullptr;};
    inline string oversoldInfo() const { DARABONBA_PTR_GET_DEFAULT(oversoldInfo_, "") };
    inline ListInstancesShrinkRequest& setOversoldInfo(string oversoldInfo) { DARABONBA_PTR_SET_VALUE(oversoldInfo_, oversoldInfo) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string oversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline ListInstancesShrinkRequest& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListInstancesShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListInstancesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListInstancesShrinkRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListInstancesShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListInstancesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListInstancesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListInstancesShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accelerator type.
    // 
    // *   CPU: Only CPU computing is used.
    // *   GPU: GPUs are used to accelerate computing.
    std::shared_ptr<string> acceleratorType_ = nullptr;
    // The accessibility. Valid values:
    // 
    // *   PRIVATE (default): The instances are accessible only to you and the administrator of the workspace.
    // *   PUBLIC: The instances are accessible only to all members in the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The UID of the creator.
    std::shared_ptr<string> createUserId_ = nullptr;
    // The GPU type.
    std::shared_ptr<string> gpuType_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The instance ID. You can call [ListInstances](https://help.aliyun.com/document_detail/470439.html) to obtain the instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The labels. A maximum of four labels are supported.
    std::shared_ptr<string> labelsShrink_ = nullptr;
    // The maximum number of CPUs. Unit: 0.001 CPU. The value 1000 indicates one CPU.
    std::shared_ptr<string> maxCpu_ = nullptr;
    // The maximum number of GPUs. Unit: 0.001 GPU. The value 1000 indicates one GPU.
    std::shared_ptr<string> maxGpu_ = nullptr;
    // The maximum memory size per GPU card. Unit: GB.
    std::shared_ptr<string> maxGpuMemory_ = nullptr;
    // The maximum memory size. Unit: GB.
    std::shared_ptr<string> maxMemory_ = nullptr;
    // The minimum number of CPUs. Unit: 0.001 CPU. The value 1000 indicates one CPU.
    std::shared_ptr<string> minCpu_ = nullptr;
    // The minimum number of GPUs. Unit: 0.001 GPU. The value 1000 indicates one GPU.
    std::shared_ptr<string> minGpu_ = nullptr;
    // The minimum memory size per GPU card. Unit: GB.
    std::shared_ptr<string> minGpuMemory_ = nullptr;
    // The minimum memory size. Unit: GB.
    std::shared_ptr<string> minMemory_ = nullptr;
    // The order that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   ASC
    // *   DESC
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> oversoldInfo_ = nullptr;
    std::shared_ptr<string> oversoldType_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    std::shared_ptr<string> paymentType_ = nullptr;
    // The resource group ID. If you leave this parameter empty, the instances in the pay-as-you-go resource group are queried. If you set this parameter to ALL, all instances are queried.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The field that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   Priority
    // *   GmtCreateTime
    // *   GmtModifiedTime
    std::shared_ptr<string> sortBy_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagShrink_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
