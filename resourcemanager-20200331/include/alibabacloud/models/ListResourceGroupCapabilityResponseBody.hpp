// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPCAPABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPCAPABILITYRESPONSEBODY_HPP_
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
  class ListResourceGroupCapabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupCapabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupCapabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListResourceGroupCapabilityResponseBody() = default ;
    ListResourceGroupCapabilityResponseBody(const ListResourceGroupCapabilityResponseBody &) = default ;
    ListResourceGroupCapabilityResponseBody(ListResourceGroupCapabilityResponseBody &&) = default ;
    ListResourceGroupCapabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupCapabilityResponseBody() = default ;
    ListResourceGroupCapabilityResponseBody& operator=(const ListResourceGroupCapabilityResponseBody &) = default ;
    ListResourceGroupCapabilityResponseBody& operator=(ListResourceGroupCapabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Capabilities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Capabilities& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceCenterResourceType, resourceCenterResourceType_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(SupportResourceGroupEvent, supportResourceGroupEvent_);
      };
      friend void from_json(const Darabonba::Json& j, Capabilities& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceCenterResourceType, resourceCenterResourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(SupportResourceGroupEvent, supportResourceGroupEvent_);
      };
      Capabilities() = default ;
      Capabilities(const Capabilities &) = default ;
      Capabilities(Capabilities &&) = default ;
      Capabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Capabilities() = default ;
      Capabilities& operator=(const Capabilities &) = default ;
      Capabilities& operator=(Capabilities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceCenterResourceType_ == nullptr
        && this->resourceType_ == nullptr && this->service_ == nullptr && this->supportResourceGroupEvent_ == nullptr; };
      // resourceCenterResourceType Field Functions 
      bool hasResourceCenterResourceType() const { return this->resourceCenterResourceType_ != nullptr;};
      void deleteResourceCenterResourceType() { this->resourceCenterResourceType_ = nullptr;};
      inline string getResourceCenterResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceCenterResourceType_, "") };
      inline Capabilities& setResourceCenterResourceType(string resourceCenterResourceType) { DARABONBA_PTR_SET_VALUE(resourceCenterResourceType_, resourceCenterResourceType) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Capabilities& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline Capabilities& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // supportResourceGroupEvent Field Functions 
      bool hasSupportResourceGroupEvent() const { return this->supportResourceGroupEvent_ != nullptr;};
      void deleteSupportResourceGroupEvent() { this->supportResourceGroupEvent_ = nullptr;};
      inline bool getSupportResourceGroupEvent() const { DARABONBA_PTR_GET_DEFAULT(supportResourceGroupEvent_, false) };
      inline Capabilities& setSupportResourceGroupEvent(bool supportResourceGroupEvent) { DARABONBA_PTR_SET_VALUE(supportResourceGroupEvent_, supportResourceGroupEvent) };


    protected:
      shared_ptr<string> resourceCenterResourceType_ {};
      // The resource type.
      // 
      // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> resourceType_ {};
      // The service code.
      // 
      // You can obtain the code from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
      shared_ptr<string> service_ {};
      // Indicates whether a specific resource type or cloud service supports resource group events.
      shared_ptr<bool> supportResourceGroupEvent_ {};
    };

    virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->requestId_ == nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<ListResourceGroupCapabilityResponseBody::Capabilities> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<ListResourceGroupCapabilityResponseBody::Capabilities>) };
    inline vector<ListResourceGroupCapabilityResponseBody::Capabilities> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<ListResourceGroupCapabilityResponseBody::Capabilities>) };
    inline ListResourceGroupCapabilityResponseBody& setCapabilities(const vector<ListResourceGroupCapabilityResponseBody::Capabilities> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline ListResourceGroupCapabilityResponseBody& setCapabilities(vector<ListResourceGroupCapabilityResponseBody::Capabilities> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupCapabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether a specific resource type or cloud service supports resource group events.
    shared_ptr<vector<ListResourceGroupCapabilityResponseBody::Capabilities>> capabilities_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
