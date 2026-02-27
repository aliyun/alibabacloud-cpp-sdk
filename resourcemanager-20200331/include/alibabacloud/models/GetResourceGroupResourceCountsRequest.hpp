// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSREQUEST_HPP_
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
  class GetResourceGroupResourceCountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResourceCountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResourceCountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    GetResourceGroupResourceCountsRequest() = default ;
    GetResourceGroupResourceCountsRequest(const GetResourceGroupResourceCountsRequest &) = default ;
    GetResourceGroupResourceCountsRequest(GetResourceGroupResourceCountsRequest &&) = default ;
    GetResourceGroupResourceCountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResourceCountsRequest() = default ;
    GetResourceGroupResourceCountsRequest& operator=(const GetResourceGroupResourceCountsRequest &) = default ;
    GetResourceGroupResourceCountsRequest& operator=(GetResourceGroupResourceCountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
        DARABONBA_PTR_TO_JSON(Service, service_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
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
      virtual bool empty() const override { return this->resourceTypeCode_ == nullptr
        && this->service_ == nullptr; };
      // resourceTypeCode Field Functions 
      bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
      void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
      inline string getResourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
      inline ResourceTypes& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline ResourceTypes& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    protected:
      // The resource type.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> resourceTypeCode_ {};
      // The service code.
      // 
      // You can obtain the code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> service_ {};
    };

    virtual bool empty() const override { return this->groupByKey_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceTypes_ == nullptr; };
    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string getGroupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceGroupResourceCountsRequest& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetResourceGroupResourceCountsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline GetResourceGroupResourceCountsRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<GetResourceGroupResourceCountsRequest::ResourceTypes> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<GetResourceGroupResourceCountsRequest::ResourceTypes>) };
    inline vector<GetResourceGroupResourceCountsRequest::ResourceTypes> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<GetResourceGroupResourceCountsRequest::ResourceTypes>) };
    inline GetResourceGroupResourceCountsRequest& setResourceTypes(const vector<GetResourceGroupResourceCountsRequest::ResourceTypes> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline GetResourceGroupResourceCountsRequest& setResourceTypes(vector<GetResourceGroupResourceCountsRequest::ResourceTypes> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The dimension by which resources are queried.
    // 
    // > If you do not specify a dimension, no results are returned.
    // 
    // Valid values:
    // 
    // *   ResourceGroupId
    // *   ResourceType
    shared_ptr<string> groupByKey_ {};
    // The resource group ID.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/2716558.html) operation to obtain the ID.
    shared_ptr<string> resourceGroupId_ {};
    // The region ID of the resources.
    shared_ptr<string> resourceRegionId_ {};
    // The resource types.
    shared_ptr<vector<GetResourceGroupResourceCountsRequest::ResourceTypes>> resourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
