// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventSourceName, eventSourceName_);
      DARABONBA_PTR_TO_JSON(ExternalSourceConfig, externalSourceConfigShrink_);
      DARABONBA_PTR_TO_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_TO_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_TO_JSON(SourceHttpEventParameters, sourceHttpEventParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceKafkaParameters, sourceKafkaParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceMNSParameters, sourceMNSParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceRabbitMQParameters, sourceRabbitMQParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceRocketMQParameters, sourceRocketMQParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceSLSParameters, sourceSLSParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceScheduledEventParameters, sourceScheduledEventParametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventSourceName, eventSourceName_);
      DARABONBA_PTR_FROM_JSON(ExternalSourceConfig, externalSourceConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_FROM_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_FROM_JSON(SourceHttpEventParameters, sourceHttpEventParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceKafkaParameters, sourceKafkaParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceMNSParameters, sourceMNSParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceRabbitMQParameters, sourceRabbitMQParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceRocketMQParameters, sourceRocketMQParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceSLSParameters, sourceSLSParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceScheduledEventParameters, sourceScheduledEventParametersShrink_);
    };
    CreateEventSourceShrinkRequest() = default ;
    CreateEventSourceShrinkRequest(const CreateEventSourceShrinkRequest &) = default ;
    CreateEventSourceShrinkRequest(CreateEventSourceShrinkRequest &&) = default ;
    CreateEventSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSourceShrinkRequest() = default ;
    CreateEventSourceShrinkRequest& operator=(const CreateEventSourceShrinkRequest &) = default ;
    CreateEventSourceShrinkRequest& operator=(CreateEventSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventBusName_ != nullptr && this->eventSourceName_ != nullptr && this->externalSourceConfigShrink_ != nullptr && this->externalSourceType_ != nullptr && this->linkedExternalSource_ != nullptr
        && this->sourceHttpEventParametersShrink_ != nullptr && this->sourceKafkaParametersShrink_ != nullptr && this->sourceMNSParametersShrink_ != nullptr && this->sourceRabbitMQParametersShrink_ != nullptr && this->sourceRocketMQParametersShrink_ != nullptr
        && this->sourceSLSParametersShrink_ != nullptr && this->sourceScheduledEventParametersShrink_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventSourceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline CreateEventSourceShrinkRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventSourceName Field Functions 
    bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
    void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
    inline string eventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
    inline CreateEventSourceShrinkRequest& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


    // externalSourceConfigShrink Field Functions 
    bool hasExternalSourceConfigShrink() const { return this->externalSourceConfigShrink_ != nullptr;};
    void deleteExternalSourceConfigShrink() { this->externalSourceConfigShrink_ = nullptr;};
    inline string externalSourceConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(externalSourceConfigShrink_, "") };
    inline CreateEventSourceShrinkRequest& setExternalSourceConfigShrink(string externalSourceConfigShrink) { DARABONBA_PTR_SET_VALUE(externalSourceConfigShrink_, externalSourceConfigShrink) };


    // externalSourceType Field Functions 
    bool hasExternalSourceType() const { return this->externalSourceType_ != nullptr;};
    void deleteExternalSourceType() { this->externalSourceType_ = nullptr;};
    inline Darabonba::Bytes externalSourceType() const { DARABONBA_GET(externalSourceType_) };
    inline CreateEventSourceShrinkRequest& setExternalSourceType(Darabonba::Bytes externalSourceType) { DARABONBA_SET_VALUE(externalSourceType_, externalSourceType) };


    // linkedExternalSource Field Functions 
    bool hasLinkedExternalSource() const { return this->linkedExternalSource_ != nullptr;};
    void deleteLinkedExternalSource() { this->linkedExternalSource_ = nullptr;};
    inline bool linkedExternalSource() const { DARABONBA_PTR_GET_DEFAULT(linkedExternalSource_, false) };
    inline CreateEventSourceShrinkRequest& setLinkedExternalSource(bool linkedExternalSource) { DARABONBA_PTR_SET_VALUE(linkedExternalSource_, linkedExternalSource) };


    // sourceHttpEventParametersShrink Field Functions 
    bool hasSourceHttpEventParametersShrink() const { return this->sourceHttpEventParametersShrink_ != nullptr;};
    void deleteSourceHttpEventParametersShrink() { this->sourceHttpEventParametersShrink_ = nullptr;};
    inline string sourceHttpEventParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceHttpEventParametersShrink_, "") };
    inline CreateEventSourceShrinkRequest& setSourceHttpEventParametersShrink(string sourceHttpEventParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceHttpEventParametersShrink_, sourceHttpEventParametersShrink) };


    // sourceKafkaParametersShrink Field Functions 
    bool hasSourceKafkaParametersShrink() const { return this->sourceKafkaParametersShrink_ != nullptr;};
    void deleteSourceKafkaParametersShrink() { this->sourceKafkaParametersShrink_ = nullptr;};
    inline string sourceKafkaParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceKafkaParametersShrink_, "") };
    inline CreateEventSourceShrinkRequest& setSourceKafkaParametersShrink(string sourceKafkaParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceKafkaParametersShrink_, sourceKafkaParametersShrink) };


    // sourceMNSParametersShrink Field Functions 
    bool hasSourceMNSParametersShrink() const { return this->sourceMNSParametersShrink_ != nullptr;};
    void deleteSourceMNSParametersShrink() { this->sourceMNSParametersShrink_ = nullptr;};
    inline string sourceMNSParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceMNSParametersShrink_, "") };
    inline CreateEventSourceShrinkRequest& setSourceMNSParametersShrink(string sourceMNSParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceMNSParametersShrink_, sourceMNSParametersShrink) };


    // sourceRabbitMQParametersShrink Field Functions 
    bool hasSourceRabbitMQParametersShrink() const { return this->sourceRabbitMQParametersShrink_ != nullptr;};
    void deleteSourceRabbitMQParametersShrink() { this->sourceRabbitMQParametersShrink_ = nullptr;};
    inline string sourceRabbitMQParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceRabbitMQParametersShrink_, "") };
    inline CreateEventSourceShrinkRequest& setSourceRabbitMQParametersShrink(string sourceRabbitMQParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParametersShrink_, sourceRabbitMQParametersShrink) };


    // sourceRocketMQParametersShrink Field Functions 
    bool hasSourceRocketMQParametersShrink() const { return this->sourceRocketMQParametersShrink_ != nullptr;};
    void deleteSourceRocketMQParametersShrink() { this->sourceRocketMQParametersShrink_ = nullptr;};
    inline string sourceRocketMQParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceRocketMQParametersShrink_, "") };
    inline CreateEventSourceShrinkRequest& setSourceRocketMQParametersShrink(string sourceRocketMQParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParametersShrink_, sourceRocketMQParametersShrink) };


    // sourceSLSParametersShrink Field Functions 
    bool hasSourceSLSParametersShrink() const { return this->sourceSLSParametersShrink_ != nullptr;};
    void deleteSourceSLSParametersShrink() { this->sourceSLSParametersShrink_ = nullptr;};
    inline string sourceSLSParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceSLSParametersShrink_, "") };
    inline CreateEventSourceShrinkRequest& setSourceSLSParametersShrink(string sourceSLSParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceSLSParametersShrink_, sourceSLSParametersShrink) };


    // sourceScheduledEventParametersShrink Field Functions 
    bool hasSourceScheduledEventParametersShrink() const { return this->sourceScheduledEventParametersShrink_ != nullptr;};
    void deleteSourceScheduledEventParametersShrink() { this->sourceScheduledEventParametersShrink_ = nullptr;};
    inline string sourceScheduledEventParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceScheduledEventParametersShrink_, "") };
    inline CreateEventSourceShrinkRequest& setSourceScheduledEventParametersShrink(string sourceScheduledEventParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceScheduledEventParametersShrink_, sourceScheduledEventParametersShrink) };


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
    std::shared_ptr<string> externalSourceConfigShrink_ = nullptr;
    // The type of the external data source.
    Darabonba::Bytes externalSourceType_ = nullptr;
    // Specify whether to connect to an external data source.
    std::shared_ptr<bool> linkedExternalSource_ = nullptr;
    // The parameters that are configured if the event source is HTTP events.
    std::shared_ptr<string> sourceHttpEventParametersShrink_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for Apache Kafka.
    std::shared_ptr<string> sourceKafkaParametersShrink_ = nullptr;
    // The parameters that are configured if you specify Simple Message Queue (formerly MNS) (SMQ) as the event source. If you specify SMQ as the event source, you must configure RegionId, IsBase64Decode, and QueueName.
    std::shared_ptr<string> sourceMNSParametersShrink_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for RabbitMQ.
    std::shared_ptr<string> sourceRabbitMQParametersShrink_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for Apache RocketMQ.
    std::shared_ptr<string> sourceRocketMQParametersShrink_ = nullptr;
    // The parameters that are configured if the event source is Log Service.
    std::shared_ptr<string> sourceSLSParametersShrink_ = nullptr;
    // The parameters that are configured if you specify scheduled events as the event source.
    std::shared_ptr<string> sourceScheduledEventParametersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
