// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    ListResourcesRequest() = default ;
    ListResourcesRequest(const ListResourcesRequest &) = default ;
    ListResourcesRequest(ListResourcesRequest &&) = default ;
    ListResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesRequest() = default ;
    ListResourcesRequest& operator=(const ListResourcesRequest &) = default ;
    ListResourcesRequest& operator=(ListResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Service, service_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
      };
      ResourceTypes() = default ;
      ResourceTypes(const ResourceTypes &) = default ;
      ResourceTypes(ResourceTypes &&) = default ;
      ResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypes() = default ;
      ResourceTypes& operator=(const ResourceTypes &) = default ;
      ResourceTypes& operator=(ResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->service_ == nullptr; };
      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline ResourceTypes& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    protected:
      // The resource type.
      // 
      // Valid values of N: 1 to 50.
      // 
      // For more information about the supported resource types, see the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      // 
      // >  You must configure both `Service` and `ResourceType` in `ResourceTypes`. Otherwise, the two parameters do not take effect.
      shared_ptr<string> resourceType_ {};
      // The ID of the Alibaba Cloud service.
      // 
      // Valid values of N: 1 to 50.
      // 
      // You can obtain the ID from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      // 
      // >  You must configure both `Service` and `ResourceType` in `ResourceTypes`. Otherwise, the two parameters do not take effect.
      shared_ptr<string> service_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->region_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->resourceTypes_ == nullptr && this->service_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourcesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListResourcesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourcesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourcesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<ListResourcesRequest::ResourceTypes> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<ListResourcesRequest::ResourceTypes>) };
    inline vector<ListResourcesRequest::ResourceTypes> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<ListResourcesRequest::ResourceTypes>) };
    inline ListResourcesRequest& setResourceTypes(const vector<ListResourcesRequest::ResourceTypes> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourcesRequest& setResourceTypes(vector<ListResourcesRequest::ResourceTypes> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListResourcesRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // The page number.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the resource.
    shared_ptr<string> resourceId_ {};
    // The resource type.
    // 
    // For more information about the supported resource types, see the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    shared_ptr<string> resourceType_ {};
    // The resource types. A maximum of 50 resource types are supported.
    // 
    // >  If you configure `ResourceTypes`, you must configure both `Service` and `ResourceType`. Otherwise, the configured Service or ResourceType does not take effect.
    shared_ptr<vector<ListResourcesRequest::ResourceTypes>> resourceTypes_ {};
    // The ID of the Alibaba Cloud service.
    // 
    // You can obtain the ID from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    shared_ptr<string> service_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
