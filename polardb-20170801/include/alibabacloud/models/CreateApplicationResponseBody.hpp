// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceAvailable, resourceAvailable_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceAvailable, resourceAvailable_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateApplicationResponseBody() = default ;
    CreateApplicationResponseBody(const CreateApplicationResponseBody &) = default ;
    CreateApplicationResponseBody(CreateApplicationResponseBody &&) = default ;
    CreateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationResponseBody() = default ;
    CreateApplicationResponseBody& operator=(const CreateApplicationResponseBody &) = default ;
    CreateApplicationResponseBody& operator=(CreateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentId_ == nullptr; };
      // componentId Field Functions 
      bool hasComponentId() const { return this->componentId_ != nullptr;};
      void deleteComponentId() { this->componentId_ = nullptr;};
      inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
      inline Components& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    protected:
      shared_ptr<string> componentId_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->components_ == nullptr && this->description_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr && this->resourceAvailable_ == nullptr
        && this->resourceGroupId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateApplicationResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateApplicationResponseBody::Components>) };
    inline vector<CreateApplicationResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<CreateApplicationResponseBody::Components>) };
    inline CreateApplicationResponseBody& setComponents(const vector<CreateApplicationResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateApplicationResponseBody& setComponents(vector<CreateApplicationResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateApplicationResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceAvailable Field Functions 
    bool hasResourceAvailable() const { return this->resourceAvailable_ != nullptr;};
    void deleteResourceAvailable() { this->resourceAvailable_ = nullptr;};
    inline bool getResourceAvailable() const { DARABONBA_PTR_GET_DEFAULT(resourceAvailable_, false) };
    inline CreateApplicationResponseBody& setResourceAvailable(bool resourceAvailable) { DARABONBA_PTR_SET_VALUE(resourceAvailable_, resourceAvailable) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<CreateApplicationResponseBody::Components>> components_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> resourceAvailable_ {};
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
