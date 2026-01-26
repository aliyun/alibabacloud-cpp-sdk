// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEEVENTBRIDGEINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEEVENTBRIDGEINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateEventBridgeIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateEventBridgeIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventBridgeIntegration, eventBridgeIntegration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateEventBridgeIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBridgeIntegration, eventBridgeIntegration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateEventBridgeIntegrationResponseBody() = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody(const CreateOrUpdateEventBridgeIntegrationResponseBody &) = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody(CreateOrUpdateEventBridgeIntegrationResponseBody &&) = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateEventBridgeIntegrationResponseBody() = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody& operator=(const CreateOrUpdateEventBridgeIntegrationResponseBody &) = default ;
    CreateOrUpdateEventBridgeIntegrationResponseBody& operator=(CreateOrUpdateEventBridgeIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventBridgeIntegration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventBridgeIntegration& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_TO_JSON(AccessSecret, accessSecret_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
        DARABONBA_PTR_TO_JSON(EventBusRegionId, eventBusRegionId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, EventBridgeIntegration& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_FROM_JSON(AccessSecret, accessSecret_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
        DARABONBA_PTR_FROM_JSON(EventBusRegionId, eventBusRegionId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
      };
      EventBridgeIntegration() = default ;
      EventBridgeIntegration(const EventBridgeIntegration &) = default ;
      EventBridgeIntegration(EventBridgeIntegration &&) = default ;
      EventBridgeIntegration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventBridgeIntegration() = default ;
      EventBridgeIntegration& operator=(const EventBridgeIntegration &) = default ;
      EventBridgeIntegration& operator=(EventBridgeIntegration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->accessSecret_ == nullptr && this->description_ == nullptr && this->endpoint_ == nullptr && this->eventBusName_ == nullptr && this->eventBusRegionId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->source_ == nullptr; };
      // accessKey Field Functions 
      bool hasAccessKey() const { return this->accessKey_ != nullptr;};
      void deleteAccessKey() { this->accessKey_ = nullptr;};
      inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
      inline EventBridgeIntegration& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


      // accessSecret Field Functions 
      bool hasAccessSecret() const { return this->accessSecret_ != nullptr;};
      void deleteAccessSecret() { this->accessSecret_ = nullptr;};
      inline string getAccessSecret() const { DARABONBA_PTR_GET_DEFAULT(accessSecret_, "") };
      inline EventBridgeIntegration& setAccessSecret(string accessSecret) { DARABONBA_PTR_SET_VALUE(accessSecret_, accessSecret) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EventBridgeIntegration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline EventBridgeIntegration& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // eventBusName Field Functions 
      bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
      void deleteEventBusName() { this->eventBusName_ = nullptr;};
      inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
      inline EventBridgeIntegration& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


      // eventBusRegionId Field Functions 
      bool hasEventBusRegionId() const { return this->eventBusRegionId_ != nullptr;};
      void deleteEventBusRegionId() { this->eventBusRegionId_ = nullptr;};
      inline string getEventBusRegionId() const { DARABONBA_PTR_GET_DEFAULT(eventBusRegionId_, "") };
      inline EventBridgeIntegration& setEventBusRegionId(string eventBusRegionId) { DARABONBA_PTR_SET_VALUE(eventBusRegionId_, eventBusRegionId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline EventBridgeIntegration& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EventBridgeIntegration& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline EventBridgeIntegration& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The AccessKey ID that is used to connect to EventBridge.
      shared_ptr<string> accessKey_ {};
      // The AccessKey secret that is used to connect to EventBridge.
      shared_ptr<string> accessSecret_ {};
      // The description of the EventBridge integration.
      shared_ptr<string> description_ {};
      // The public endpoint of EventBridge.
      shared_ptr<string> endpoint_ {};
      // The name of the event bus.
      shared_ptr<string> eventBusName_ {};
      // The region ID of the event bus.
      shared_ptr<string> eventBusRegionId_ {};
      // The ID of the EventBridge integration.
      shared_ptr<int64_t> id_ {};
      // The name of the EventBridge integration.
      shared_ptr<string> name_ {};
      // The event source.
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->eventBridgeIntegration_ == nullptr
        && this->requestId_ == nullptr; };
    // eventBridgeIntegration Field Functions 
    bool hasEventBridgeIntegration() const { return this->eventBridgeIntegration_ != nullptr;};
    void deleteEventBridgeIntegration() { this->eventBridgeIntegration_ = nullptr;};
    inline const CreateOrUpdateEventBridgeIntegrationResponseBody::EventBridgeIntegration & getEventBridgeIntegration() const { DARABONBA_PTR_GET_CONST(eventBridgeIntegration_, CreateOrUpdateEventBridgeIntegrationResponseBody::EventBridgeIntegration) };
    inline CreateOrUpdateEventBridgeIntegrationResponseBody::EventBridgeIntegration getEventBridgeIntegration() { DARABONBA_PTR_GET(eventBridgeIntegration_, CreateOrUpdateEventBridgeIntegrationResponseBody::EventBridgeIntegration) };
    inline CreateOrUpdateEventBridgeIntegrationResponseBody& setEventBridgeIntegration(const CreateOrUpdateEventBridgeIntegrationResponseBody::EventBridgeIntegration & eventBridgeIntegration) { DARABONBA_PTR_SET_VALUE(eventBridgeIntegration_, eventBridgeIntegration) };
    inline CreateOrUpdateEventBridgeIntegrationResponseBody& setEventBridgeIntegration(CreateOrUpdateEventBridgeIntegrationResponseBody::EventBridgeIntegration && eventBridgeIntegration) { DARABONBA_PTR_SET_RVALUE(eventBridgeIntegration_, eventBridgeIntegration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateEventBridgeIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the EventBridge integration.
    shared_ptr<CreateOrUpdateEventBridgeIntegrationResponseBody::EventBridgeIntegration> eventBridgeIntegration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
