// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSREQUESTRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESOURCECOUNTSREQUESTRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResourceCountsRequestResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResourceCountsRequestResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResourceCountsRequestResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    GetResourceGroupResourceCountsRequestResourceTypes() = default ;
    GetResourceGroupResourceCountsRequestResourceTypes(const GetResourceGroupResourceCountsRequestResourceTypes &) = default ;
    GetResourceGroupResourceCountsRequestResourceTypes(GetResourceGroupResourceCountsRequestResourceTypes &&) = default ;
    GetResourceGroupResourceCountsRequestResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResourceCountsRequestResourceTypes() = default ;
    GetResourceGroupResourceCountsRequestResourceTypes& operator=(const GetResourceGroupResourceCountsRequestResourceTypes &) = default ;
    GetResourceGroupResourceCountsRequestResourceTypes& operator=(GetResourceGroupResourceCountsRequestResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceTypeCode_ == nullptr
        && return this->service_ == nullptr; };
    // resourceTypeCode Field Functions 
    bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
    void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
    inline string resourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
    inline GetResourceGroupResourceCountsRequestResourceTypes& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline GetResourceGroupResourceCountsRequestResourceTypes& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // The resource type.
    // 
    // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> resourceTypeCode_ = nullptr;
    // The service code.
    // 
    // You can obtain the code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
