// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYCENTERPOLICYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeResourceByCenterPolicyIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceByCenterPolicyIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceModelList, resourceModelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceByCenterPolicyIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceModelList, resourceModelList_);
    };
    DescribeResourceByCenterPolicyIdResponseBody() = default ;
    DescribeResourceByCenterPolicyIdResponseBody(const DescribeResourceByCenterPolicyIdResponseBody &) = default ;
    DescribeResourceByCenterPolicyIdResponseBody(DescribeResourceByCenterPolicyIdResponseBody &&) = default ;
    DescribeResourceByCenterPolicyIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceByCenterPolicyIdResponseBody() = default ;
    DescribeResourceByCenterPolicyIdResponseBody& operator=(const DescribeResourceByCenterPolicyIdResponseBody &) = default ;
    DescribeResourceByCenterPolicyIdResponseBody& operator=(DescribeResourceByCenterPolicyIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceModelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceModelList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResourceModelList& obj) { 
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
      ResourceModelList() = default ;
      ResourceModelList(const ResourceModelList &) = default ;
      ResourceModelList(ResourceModelList &&) = default ;
      ResourceModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceModelList() = default ;
      ResourceModelList& operator=(const ResourceModelList &) = default ;
      ResourceModelList& operator=(ResourceModelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppModelList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppModelList& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
        };
        friend void from_json(const Darabonba::Json& j, AppModelList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
        };
        AppModelList() = default ;
        AppModelList(const AppModelList &) = default ;
        AppModelList(AppModelList &&) = default ;
        AppModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppModelList() = default ;
        AppModelList& operator=(const AppModelList &) = default ;
        AppModelList& operator=(AppModelList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline AppModelList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppModelList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      protected:
        // The application ID. This parameter is only applicable to cloud applications.
        shared_ptr<string> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
      };

      virtual bool empty() const override { return this->appModelList_ == nullptr
        && this->cpu_ == nullptr && this->desktopType_ == nullptr && this->gpuCount_ == nullptr && this->gpuSpec_ == nullptr && this->memory_ == nullptr
        && this->osType_ == nullptr && this->payType_ == nullptr && this->productType_ == nullptr && this->protocolType_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceGroupName_ == nullptr && this->resourceGroupRelCount_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceRegionId_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr; };
      // appModelList Field Functions 
      bool hasAppModelList() const { return this->appModelList_ != nullptr;};
      void deleteAppModelList() { this->appModelList_ = nullptr;};
      inline const vector<ResourceModelList::AppModelList> & getAppModelList() const { DARABONBA_PTR_GET_CONST(appModelList_, vector<ResourceModelList::AppModelList>) };
      inline vector<ResourceModelList::AppModelList> getAppModelList() { DARABONBA_PTR_GET(appModelList_, vector<ResourceModelList::AppModelList>) };
      inline ResourceModelList& setAppModelList(const vector<ResourceModelList::AppModelList> & appModelList) { DARABONBA_PTR_SET_VALUE(appModelList_, appModelList) };
      inline ResourceModelList& setAppModelList(vector<ResourceModelList::AppModelList> && appModelList) { DARABONBA_PTR_SET_RVALUE(appModelList_, appModelList) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline ResourceModelList& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline ResourceModelList& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // gpuCount Field Functions 
      bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
      void deleteGpuCount() { this->gpuCount_ = nullptr;};
      inline double getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
      inline ResourceModelList& setGpuCount(double gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline ResourceModelList& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline ResourceModelList& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline ResourceModelList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline ResourceModelList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline ResourceModelList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline ResourceModelList& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ResourceModelList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline ResourceModelList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // resourceGroupRelCount Field Functions 
      bool hasResourceGroupRelCount() const { return this->resourceGroupRelCount_ != nullptr;};
      void deleteResourceGroupRelCount() { this->resourceGroupRelCount_ = nullptr;};
      inline int32_t getResourceGroupRelCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupRelCount_, 0) };
      inline ResourceModelList& setResourceGroupRelCount(int32_t resourceGroupRelCount) { DARABONBA_PTR_SET_VALUE(resourceGroupRelCount_, resourceGroupRelCount) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceModelList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline ResourceModelList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline ResourceModelList& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceModelList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceModelList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The cloud applications.
      shared_ptr<vector<ResourceModelList::AppModelList>> appModelList_ {};
      // The number of vCPUs.
      shared_ptr<int32_t> cpu_ {};
      // The cloud computer type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the IDs of the cloud computer types supported by Alibaba Cloud Workspace.
      shared_ptr<string> desktopType_ {};
      // The number of GPUs.
      shared_ptr<double> gpuCount_ {};
      // The GPU type.
      shared_ptr<string> gpuSpec_ {};
      // The memory size. Unit: MiB.
      shared_ptr<int64_t> memory_ {};
      // The OS type.
      shared_ptr<string> osType_ {};
      // The billing method.
      shared_ptr<string> payType_ {};
      // The service type.
      shared_ptr<string> productType_ {};
      // The protocol type.
      shared_ptr<string> protocolType_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The resource group name.
      shared_ptr<string> resourceGroupName_ {};
      // The number of associated resource groups
      shared_ptr<int32_t> resourceGroupRelCount_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource name.
      shared_ptr<string> resourceName_ {};
      // The region ID of the resource.
      shared_ptr<string> resourceRegionId_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The resource status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resourceModelList_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceByCenterPolicyIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceModelList Field Functions 
    bool hasResourceModelList() const { return this->resourceModelList_ != nullptr;};
    void deleteResourceModelList() { this->resourceModelList_ = nullptr;};
    inline const vector<DescribeResourceByCenterPolicyIdResponseBody::ResourceModelList> & getResourceModelList() const { DARABONBA_PTR_GET_CONST(resourceModelList_, vector<DescribeResourceByCenterPolicyIdResponseBody::ResourceModelList>) };
    inline vector<DescribeResourceByCenterPolicyIdResponseBody::ResourceModelList> getResourceModelList() { DARABONBA_PTR_GET(resourceModelList_, vector<DescribeResourceByCenterPolicyIdResponseBody::ResourceModelList>) };
    inline DescribeResourceByCenterPolicyIdResponseBody& setResourceModelList(const vector<DescribeResourceByCenterPolicyIdResponseBody::ResourceModelList> & resourceModelList) { DARABONBA_PTR_SET_VALUE(resourceModelList_, resourceModelList) };
    inline DescribeResourceByCenterPolicyIdResponseBody& setResourceModelList(vector<DescribeResourceByCenterPolicyIdResponseBody::ResourceModelList> && resourceModelList) { DARABONBA_PTR_SET_RVALUE(resourceModelList_, resourceModelList) };


  protected:
    // The total number of resources.
    shared_ptr<string> count_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources.
    shared_ptr<vector<DescribeResourceByCenterPolicyIdResponseBody::ResourceModelList>> resourceModelList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
