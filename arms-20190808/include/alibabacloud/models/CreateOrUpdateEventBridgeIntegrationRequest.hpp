// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEEVENTBRIDGEINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEEVENTBRIDGEINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateEventBridgeIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateEventBridgeIntegrationRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateEventBridgeIntegrationRequest& obj) { 
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
    CreateOrUpdateEventBridgeIntegrationRequest() = default ;
    CreateOrUpdateEventBridgeIntegrationRequest(const CreateOrUpdateEventBridgeIntegrationRequest &) = default ;
    CreateOrUpdateEventBridgeIntegrationRequest(CreateOrUpdateEventBridgeIntegrationRequest &&) = default ;
    CreateOrUpdateEventBridgeIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateEventBridgeIntegrationRequest() = default ;
    CreateOrUpdateEventBridgeIntegrationRequest& operator=(const CreateOrUpdateEventBridgeIntegrationRequest &) = default ;
    CreateOrUpdateEventBridgeIntegrationRequest& operator=(CreateOrUpdateEventBridgeIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->accessSecret_ != nullptr && this->description_ != nullptr && this->endpoint_ != nullptr && this->eventBusName_ != nullptr && this->eventBusRegionId_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->source_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // accessSecret Field Functions 
    bool hasAccessSecret() const { return this->accessSecret_ != nullptr;};
    void deleteAccessSecret() { this->accessSecret_ = nullptr;};
    inline string accessSecret() const { DARABONBA_PTR_GET_DEFAULT(accessSecret_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setAccessSecret(string accessSecret) { DARABONBA_PTR_SET_VALUE(accessSecret_, accessSecret) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventBusRegionId Field Functions 
    bool hasEventBusRegionId() const { return this->eventBusRegionId_ != nullptr;};
    void deleteEventBusRegionId() { this->eventBusRegionId_ = nullptr;};
    inline string eventBusRegionId() const { DARABONBA_PTR_GET_DEFAULT(eventBusRegionId_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setEventBusRegionId(string eventBusRegionId) { DARABONBA_PTR_SET_VALUE(eventBusRegionId_, eventBusRegionId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateOrUpdateEventBridgeIntegrationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The AccessKey ID that is used to connect to EventBridge.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The AccessKey secret that is used to connect to EventBridge.
    std::shared_ptr<string> accessSecret_ = nullptr;
    // The description of the EventBridge integration.
    std::shared_ptr<string> description_ = nullptr;
    // The public endpoint of EventBridge.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The region ID of the event bus.
    std::shared_ptr<string> eventBusRegionId_ = nullptr;
    // The ID of the EventBridge integration.
    // 
    // *   If you do not specify this parameter, an EventBridge integration is created.
    // *   If you specify this parameter, the specified EventBridge integration is modified.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the EventBridge integration.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The event source.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
