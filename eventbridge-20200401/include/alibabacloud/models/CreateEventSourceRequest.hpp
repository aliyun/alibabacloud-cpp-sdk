// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventSourceRequestSourceHttpEventParameters.hpp>
#include <alibabacloud/models/CreateEventSourceRequestSourceKafkaParameters.hpp>
#include <alibabacloud/models/CreateEventSourceRequestSourceMNSParameters.hpp>
#include <alibabacloud/models/CreateEventSourceRequestSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/CreateEventSourceRequestSourceRocketMQParameters.hpp>
#include <alibabacloud/models/CreateEventSourceRequestSourceSLSParameters.hpp>
#include <alibabacloud/models/CreateEventSourceRequestSourceScheduledEventParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventSourceName, eventSourceName_);
      DARABONBA_ANY_TO_JSON(ExternalSourceConfig, externalSourceConfig_);
      DARABONBA_PTR_TO_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_TO_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_TO_JSON(SourceHttpEventParameters, sourceHttpEventParameters_);
      DARABONBA_PTR_TO_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_TO_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceSLSParameters, sourceSLSParameters_);
      DARABONBA_PTR_TO_JSON(SourceScheduledEventParameters, sourceScheduledEventParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventSourceName, eventSourceName_);
      DARABONBA_ANY_FROM_JSON(ExternalSourceConfig, externalSourceConfig_);
      DARABONBA_PTR_FROM_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_FROM_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_FROM_JSON(SourceHttpEventParameters, sourceHttpEventParameters_);
      DARABONBA_PTR_FROM_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceSLSParameters, sourceSLSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceScheduledEventParameters, sourceScheduledEventParameters_);
    };
    CreateEventSourceRequest() = default ;
    CreateEventSourceRequest(const CreateEventSourceRequest &) = default ;
    CreateEventSourceRequest(CreateEventSourceRequest &&) = default ;
    CreateEventSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSourceRequest() = default ;
    CreateEventSourceRequest& operator=(const CreateEventSourceRequest &) = default ;
    CreateEventSourceRequest& operator=(CreateEventSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventBusName_ != nullptr && this->eventSourceName_ != nullptr && this->externalSourceConfig_ != nullptr && this->externalSourceType_ != nullptr && this->linkedExternalSource_ != nullptr
        && this->sourceHttpEventParameters_ != nullptr && this->sourceKafkaParameters_ != nullptr && this->sourceMNSParameters_ != nullptr && this->sourceRabbitMQParameters_ != nullptr && this->sourceRocketMQParameters_ != nullptr
        && this->sourceSLSParameters_ != nullptr && this->sourceScheduledEventParameters_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline CreateEventSourceRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventSourceName Field Functions 
    bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
    void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
    inline string eventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
    inline CreateEventSourceRequest& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


    // externalSourceConfig Field Functions 
    bool hasExternalSourceConfig() const { return this->externalSourceConfig_ != nullptr;};
    void deleteExternalSourceConfig() { this->externalSourceConfig_ = nullptr;};
    inline     const Darabonba::Json & externalSourceConfig() const { DARABONBA_GET(externalSourceConfig_) };
    Darabonba::Json & externalSourceConfig() { DARABONBA_GET(externalSourceConfig_) };
    inline CreateEventSourceRequest& setExternalSourceConfig(const Darabonba::Json & externalSourceConfig) { DARABONBA_SET_VALUE(externalSourceConfig_, externalSourceConfig) };
    inline CreateEventSourceRequest& setExternalSourceConfig(Darabonba::Json & externalSourceConfig) { DARABONBA_SET_RVALUE(externalSourceConfig_, externalSourceConfig) };


    // externalSourceType Field Functions 
    bool hasExternalSourceType() const { return this->externalSourceType_ != nullptr;};
    void deleteExternalSourceType() { this->externalSourceType_ = nullptr;};
    inline Darabonba::Bytes externalSourceType() const { DARABONBA_GET(externalSourceType_) };
    inline CreateEventSourceRequest& setExternalSourceType(Darabonba::Bytes externalSourceType) { DARABONBA_SET_VALUE(externalSourceType_, externalSourceType) };


    // linkedExternalSource Field Functions 
    bool hasLinkedExternalSource() const { return this->linkedExternalSource_ != nullptr;};
    void deleteLinkedExternalSource() { this->linkedExternalSource_ = nullptr;};
    inline bool linkedExternalSource() const { DARABONBA_PTR_GET_DEFAULT(linkedExternalSource_, false) };
    inline CreateEventSourceRequest& setLinkedExternalSource(bool linkedExternalSource) { DARABONBA_PTR_SET_VALUE(linkedExternalSource_, linkedExternalSource) };


    // sourceHttpEventParameters Field Functions 
    bool hasSourceHttpEventParameters() const { return this->sourceHttpEventParameters_ != nullptr;};
    void deleteSourceHttpEventParameters() { this->sourceHttpEventParameters_ = nullptr;};
    inline const CreateEventSourceRequestSourceHttpEventParameters & sourceHttpEventParameters() const { DARABONBA_PTR_GET_CONST(sourceHttpEventParameters_, CreateEventSourceRequestSourceHttpEventParameters) };
    inline CreateEventSourceRequestSourceHttpEventParameters sourceHttpEventParameters() { DARABONBA_PTR_GET(sourceHttpEventParameters_, CreateEventSourceRequestSourceHttpEventParameters) };
    inline CreateEventSourceRequest& setSourceHttpEventParameters(const CreateEventSourceRequestSourceHttpEventParameters & sourceHttpEventParameters) { DARABONBA_PTR_SET_VALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };
    inline CreateEventSourceRequest& setSourceHttpEventParameters(CreateEventSourceRequestSourceHttpEventParameters && sourceHttpEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const CreateEventSourceRequestSourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, CreateEventSourceRequestSourceKafkaParameters) };
    inline CreateEventSourceRequestSourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, CreateEventSourceRequestSourceKafkaParameters) };
    inline CreateEventSourceRequest& setSourceKafkaParameters(const CreateEventSourceRequestSourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline CreateEventSourceRequest& setSourceKafkaParameters(CreateEventSourceRequestSourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const CreateEventSourceRequestSourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, CreateEventSourceRequestSourceMNSParameters) };
    inline CreateEventSourceRequestSourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, CreateEventSourceRequestSourceMNSParameters) };
    inline CreateEventSourceRequest& setSourceMNSParameters(const CreateEventSourceRequestSourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline CreateEventSourceRequest& setSourceMNSParameters(CreateEventSourceRequestSourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const CreateEventSourceRequestSourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, CreateEventSourceRequestSourceRabbitMQParameters) };
    inline CreateEventSourceRequestSourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, CreateEventSourceRequestSourceRabbitMQParameters) };
    inline CreateEventSourceRequest& setSourceRabbitMQParameters(const CreateEventSourceRequestSourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline CreateEventSourceRequest& setSourceRabbitMQParameters(CreateEventSourceRequestSourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const CreateEventSourceRequestSourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, CreateEventSourceRequestSourceRocketMQParameters) };
    inline CreateEventSourceRequestSourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, CreateEventSourceRequestSourceRocketMQParameters) };
    inline CreateEventSourceRequest& setSourceRocketMQParameters(const CreateEventSourceRequestSourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline CreateEventSourceRequest& setSourceRocketMQParameters(CreateEventSourceRequestSourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const CreateEventSourceRequestSourceSLSParameters & sourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, CreateEventSourceRequestSourceSLSParameters) };
    inline CreateEventSourceRequestSourceSLSParameters sourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, CreateEventSourceRequestSourceSLSParameters) };
    inline CreateEventSourceRequest& setSourceSLSParameters(const CreateEventSourceRequestSourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline CreateEventSourceRequest& setSourceSLSParameters(CreateEventSourceRequestSourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


    // sourceScheduledEventParameters Field Functions 
    bool hasSourceScheduledEventParameters() const { return this->sourceScheduledEventParameters_ != nullptr;};
    void deleteSourceScheduledEventParameters() { this->sourceScheduledEventParameters_ = nullptr;};
    inline const CreateEventSourceRequestSourceScheduledEventParameters & sourceScheduledEventParameters() const { DARABONBA_PTR_GET_CONST(sourceScheduledEventParameters_, CreateEventSourceRequestSourceScheduledEventParameters) };
    inline CreateEventSourceRequestSourceScheduledEventParameters sourceScheduledEventParameters() { DARABONBA_PTR_GET(sourceScheduledEventParameters_, CreateEventSourceRequestSourceScheduledEventParameters) };
    inline CreateEventSourceRequest& setSourceScheduledEventParameters(const CreateEventSourceRequestSourceScheduledEventParameters & sourceScheduledEventParameters) { DARABONBA_PTR_SET_VALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };
    inline CreateEventSourceRequest& setSourceScheduledEventParameters(CreateEventSourceRequestSourceScheduledEventParameters && sourceScheduledEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };


  protected:
    // The description of the event source.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the event bus with which the event source is associated.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The name of the event source.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventSourceName_ = nullptr;
    // The configurations of the external data source.
    Darabonba::Json externalSourceConfig_ = nullptr;
    // The type of the external data source.
    Darabonba::Bytes externalSourceType_ = nullptr;
    // Specify whether to connect to an external data source.
    std::shared_ptr<bool> linkedExternalSource_ = nullptr;
    // The parameters that are configured if the event source is HTTP events.
    std::shared_ptr<CreateEventSourceRequestSourceHttpEventParameters> sourceHttpEventParameters_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for Apache Kafka.
    std::shared_ptr<CreateEventSourceRequestSourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify Simple Message Queue (formerly MNS) (SMQ) as the event source. If you specify SMQ as the event source, you must configure RegionId, IsBase64Decode, and QueueName.
    std::shared_ptr<CreateEventSourceRequestSourceMNSParameters> sourceMNSParameters_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for RabbitMQ.
    std::shared_ptr<CreateEventSourceRequestSourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for Apache RocketMQ.
    std::shared_ptr<CreateEventSourceRequestSourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
    // The parameters that are configured if the event source is Log Service.
    std::shared_ptr<CreateEventSourceRequestSourceSLSParameters> sourceSLSParameters_ = nullptr;
    // The parameters that are configured if you specify scheduled events as the event source.
    std::shared_ptr<CreateEventSourceRequestSourceScheduledEventParameters> sourceScheduledEventParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
