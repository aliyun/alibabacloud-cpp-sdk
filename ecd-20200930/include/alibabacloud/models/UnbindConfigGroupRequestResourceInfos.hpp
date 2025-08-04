// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDCONFIGGROUPREQUESTRESOURCEINFOS_HPP_
#define ALIBABACLOUD_MODELS_UNBINDCONFIGGROUPREQUESTRESOURCEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class UnbindConfigGroupRequestResourceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindConfigGroupRequestResourceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindConfigGroupRequestResourceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    UnbindConfigGroupRequestResourceInfos() = default ;
    UnbindConfigGroupRequestResourceInfos(const UnbindConfigGroupRequestResourceInfos &) = default ;
    UnbindConfigGroupRequestResourceInfos(UnbindConfigGroupRequestResourceInfos &&) = default ;
    UnbindConfigGroupRequestResourceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindConfigGroupRequestResourceInfos() = default ;
    UnbindConfigGroupRequestResourceInfos& operator=(const UnbindConfigGroupRequestResourceInfos &) = default ;
    UnbindConfigGroupRequestResourceInfos& operator=(UnbindConfigGroupRequestResourceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productType_ != nullptr
        && this->resourceId_ != nullptr && this->resourceRegionId_ != nullptr && this->resourceType_ != nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline UnbindConfigGroupRequestResourceInfos& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline UnbindConfigGroupRequestResourceInfos& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline UnbindConfigGroupRequestResourceInfos& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UnbindConfigGroupRequestResourceInfos& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The service type of the resource.
    // 
    // Valid value:
    // 
    // *   CLOUD_DESKTOP: the cloud computer service.
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The type of the resource.
    // 
    // Valid values:
    // 
    // *   RESOURCE_GROUP: the resource group.
    // *   CLOUD_DESKTOP: the cloud computer service.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
