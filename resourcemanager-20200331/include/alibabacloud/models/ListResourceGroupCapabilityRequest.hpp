// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPCAPABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPCAPABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupCapabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupCapabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(SupportResourceGroupEvent, supportResourceGroupEvent_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupCapabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(SupportResourceGroupEvent, supportResourceGroupEvent_);
    };
    ListResourceGroupCapabilityRequest() = default ;
    ListResourceGroupCapabilityRequest(const ListResourceGroupCapabilityRequest &) = default ;
    ListResourceGroupCapabilityRequest(ListResourceGroupCapabilityRequest &&) = default ;
    ListResourceGroupCapabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupCapabilityRequest() = default ;
    ListResourceGroupCapabilityRequest& operator=(const ListResourceGroupCapabilityRequest &) = default ;
    ListResourceGroupCapabilityRequest& operator=(ListResourceGroupCapabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->service_ == nullptr && this->supportResourceGroupEvent_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceGroupCapabilityRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListResourceGroupCapabilityRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // supportResourceGroupEvent Field Functions 
    bool hasSupportResourceGroupEvent() const { return this->supportResourceGroupEvent_ != nullptr;};
    void deleteSupportResourceGroupEvent() { this->supportResourceGroupEvent_ = nullptr;};
    inline bool getSupportResourceGroupEvent() const { DARABONBA_PTR_GET_DEFAULT(supportResourceGroupEvent_, false) };
    inline ListResourceGroupCapabilityRequest& setSupportResourceGroupEvent(bool supportResourceGroupEvent) { DARABONBA_PTR_SET_VALUE(supportResourceGroupEvent_, supportResourceGroupEvent) };


  protected:
    // The resource type.
    // 
    // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    shared_ptr<string> resourceType_ {};
    // The ID of the Alibaba Cloud service.
    // 
    // You can obtain the service code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    shared_ptr<string> service_ {};
    // Specifies whether a specific resource type or cloud service supports resource group events.
    shared_ptr<bool> supportResourceGroupEvent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
