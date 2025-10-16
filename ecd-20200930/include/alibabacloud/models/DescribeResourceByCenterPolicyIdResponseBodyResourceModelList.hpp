// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODYRESOURCEMODELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODYRESOURCEMODELLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeResourceByCenterPolicyIdResponseBodyResourceModelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& obj) { 
      DARABONBA_PTR_TO_JSON(AppModelList, appModelList_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupRelCount, resourceGroupRelCount_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppModelList, appModelList_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupRelCount, resourceGroupRelCount_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelList() = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelList(const DescribeResourceByCenterPolicyIdResponseBodyResourceModelList &) = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelList(DescribeResourceByCenterPolicyIdResponseBodyResourceModelList &&) = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceByCenterPolicyIdResponseBodyResourceModelList() = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& operator=(const DescribeResourceByCenterPolicyIdResponseBodyResourceModelList &) = default ;
    DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& operator=(DescribeResourceByCenterPolicyIdResponseBodyResourceModelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appModelList_ == nullptr
        && return this->cpu_ == nullptr && return this->desktopType_ == nullptr && return this->gpuCount_ == nullptr && return this->gpuSpec_ == nullptr && return this->memory_ == nullptr
        && return this->osType_ == nullptr && return this->payType_ == nullptr && return this->productType_ == nullptr && return this->protocolType_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceGroupName_ == nullptr && return this->resourceGroupRelCount_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceRegionId_ == nullptr
        && return this->resourceType_ == nullptr && return this->status_ == nullptr; };
    // appModelList Field Functions 
    bool hasAppModelList() const { return this->appModelList_ != nullptr;};
    void deleteAppModelList() { this->appModelList_ = nullptr;};
    inline const vector<Models::DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList> & appModelList() const { DARABONBA_PTR_GET_CONST(appModelList_, vector<Models::DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList>) };
    inline vector<Models::DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList> appModelList() { DARABONBA_PTR_GET(appModelList_, vector<Models::DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList>) };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setAppModelList(const vector<Models::DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList> & appModelList) { DARABONBA_PTR_SET_VALUE(appModelList_, appModelList) };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setAppModelList(vector<Models::DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList> && appModelList) { DARABONBA_PTR_SET_RVALUE(appModelList_, appModelList) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline double gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setGpuCount(double gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // resourceGroupRelCount Field Functions 
    bool hasResourceGroupRelCount() const { return this->resourceGroupRelCount_ != nullptr;};
    void deleteResourceGroupRelCount() { this->resourceGroupRelCount_ = nullptr;};
    inline int32_t resourceGroupRelCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupRelCount_, 0) };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setResourceGroupRelCount(int32_t resourceGroupRelCount) { DARABONBA_PTR_SET_VALUE(resourceGroupRelCount_, resourceGroupRelCount) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBodyResourceModelList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cloud applications.
    std::shared_ptr<vector<Models::DescribeResourceByCenterPolicyIdResponseBodyResourceModelListAppModelList>> appModelList_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The cloud computer type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the IDs of the cloud computer types supported by Alibaba Cloud Workspace.
    std::shared_ptr<string> desktopType_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<double> gpuCount_ = nullptr;
    // The GPU type.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The OS type.
    std::shared_ptr<string> osType_ = nullptr;
    // The billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The service type.
    std::shared_ptr<string> productType_ = nullptr;
    // The protocol type.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource group name.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The number of associated resource groups
    std::shared_ptr<int32_t> resourceGroupRelCount_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The resource status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
