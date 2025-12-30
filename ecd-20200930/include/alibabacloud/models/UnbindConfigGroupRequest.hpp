// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDCONFIGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDCONFIGGROUPREQUEST_HPP_
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
  class UnbindConfigGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindConfigGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInfos, resourceInfos_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindConfigGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceInfos, resourceInfos_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UnbindConfigGroupRequest() = default ;
    UnbindConfigGroupRequest(const UnbindConfigGroupRequest &) = default ;
    UnbindConfigGroupRequest(UnbindConfigGroupRequest &&) = default ;
    UnbindConfigGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindConfigGroupRequest() = default ;
    UnbindConfigGroupRequest& operator=(const UnbindConfigGroupRequest &) = default ;
    UnbindConfigGroupRequest& operator=(UnbindConfigGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourceInfos() = default ;
      ResourceInfos(const ResourceInfos &) = default ;
      ResourceInfos(ResourceInfos &&) = default ;
      ResourceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceInfos() = default ;
      ResourceInfos& operator=(const ResourceInfos &) = default ;
      ResourceInfos& operator=(ResourceInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->productType_ == nullptr
        && this->resourceId_ == nullptr && this->resourceRegionId_ == nullptr && this->resourceType_ == nullptr; };
      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline ResourceInfos& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceInfos& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline ResourceInfos& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceInfos& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The service type of the resource.
      // 
      // Valid value:
      // 
      // *   CLOUD_DESKTOP: the cloud computer service.
      shared_ptr<string> productType_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The region ID of the resource.
      shared_ptr<string> resourceRegionId_ {};
      // The type of the resource.
      // 
      // Valid values:
      // 
      // *   RESOURCE_GROUP: the resource group.
      // *   CLOUD_DESKTOP: the cloud computer service.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->resourceInfos_ == nullptr && this->type_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnbindConfigGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInfos Field Functions 
    bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
    void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
    inline const vector<UnbindConfigGroupRequest::ResourceInfos> & getResourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<UnbindConfigGroupRequest::ResourceInfos>) };
    inline vector<UnbindConfigGroupRequest::ResourceInfos> getResourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<UnbindConfigGroupRequest::ResourceInfos>) };
    inline UnbindConfigGroupRequest& setResourceInfos(const vector<UnbindConfigGroupRequest::ResourceInfos> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
    inline UnbindConfigGroupRequest& setResourceInfos(vector<UnbindConfigGroupRequest::ResourceInfos> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UnbindConfigGroupRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the region. Set the value to `cn-shanghai`.
    shared_ptr<string> regionId_ {};
    // The resources from which you want to unbind the configuration group.
    // 
    // This parameter is required.
    shared_ptr<vector<UnbindConfigGroupRequest::ResourceInfos>> resourceInfos_ {};
    // The type of the configuration group.
    // 
    // Valid value:
    // 
    // *   Timer: the scheduled task type.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
