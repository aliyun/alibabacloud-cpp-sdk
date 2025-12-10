// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESREQUESTRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESREQUESTRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourcesRequestResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesRequestResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesRequestResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    ListResourcesRequestResourceTypes() = default ;
    ListResourcesRequestResourceTypes(const ListResourcesRequestResourceTypes &) = default ;
    ListResourcesRequestResourceTypes(ListResourcesRequestResourceTypes &&) = default ;
    ListResourcesRequestResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesRequestResourceTypes() = default ;
    ListResourcesRequestResourceTypes& operator=(const ListResourcesRequestResourceTypes &) = default ;
    ListResourcesRequestResourceTypes& operator=(ListResourcesRequestResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && return this->service_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourcesRequestResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListResourcesRequestResourceTypes& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // The resource type.
    // 
    // Valid values of N: 1 to 50.
    // 
    // For more information about the supported resource types, see the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    // 
    // >  You must configure both `Service` and `ResourceType` in `ResourceTypes`. Otherwise, the two parameters do not take effect.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the Alibaba Cloud service.
    // 
    // Valid values of N: 1 to 50.
    // 
    // You can obtain the ID from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    // 
    // >  You must configure both `Service` and `ResourceType` in `ResourceTypes`. Otherwise, the two parameters do not take effect.
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
