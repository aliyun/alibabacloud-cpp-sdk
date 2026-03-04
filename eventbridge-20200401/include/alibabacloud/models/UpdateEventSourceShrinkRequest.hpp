// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventSourceName, eventSourceName_);
      DARABONBA_PTR_TO_JSON(ExternalSourceConfig, externalSourceConfigShrink_);
      DARABONBA_PTR_TO_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_TO_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_TO_JSON(SourceHttpEventParameters, sourceHttpEventParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceKafkaParameters, sourceKafkaParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceMNSParameters, sourceMNSParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceOSSEventParameters, sourceOSSEventParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceRabbitMQParameters, sourceRabbitMQParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceRocketMQParameters, sourceRocketMQParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceSLSParameters, sourceSLSParametersShrink_);
      DARABONBA_PTR_TO_JSON(SourceScheduledEventParameters, sourceScheduledEventParametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventSourceName, eventSourceName_);
      DARABONBA_PTR_FROM_JSON(ExternalSourceConfig, externalSourceConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ExternalSourceType, externalSourceType_);
      DARABONBA_PTR_FROM_JSON(LinkedExternalSource, linkedExternalSource_);
      DARABONBA_PTR_FROM_JSON(SourceHttpEventParameters, sourceHttpEventParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceKafkaParameters, sourceKafkaParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceMNSParameters, sourceMNSParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceOSSEventParameters, sourceOSSEventParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceRabbitMQParameters, sourceRabbitMQParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceRocketMQParameters, sourceRocketMQParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceSLSParameters, sourceSLSParametersShrink_);
      DARABONBA_PTR_FROM_JSON(SourceScheduledEventParameters, sourceScheduledEventParametersShrink_);
    };
    UpdateEventSourceShrinkRequest() = default ;
    UpdateEventSourceShrinkRequest(const UpdateEventSourceShrinkRequest &) = default ;
    UpdateEventSourceShrinkRequest(UpdateEventSourceShrinkRequest &&) = default ;
    UpdateEventSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventSourceShrinkRequest() = default ;
    UpdateEventSourceShrinkRequest& operator=(const UpdateEventSourceShrinkRequest &) = default ;
    UpdateEventSourceShrinkRequest& operator=(UpdateEventSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->eventBusName_ == nullptr && this->eventSourceName_ == nullptr && this->externalSourceConfigShrink_ == nullptr && this->externalSourceType_ == nullptr && this->linkedExternalSource_ == nullptr
        && this->sourceHttpEventParametersShrink_ == nullptr && this->sourceKafkaParametersShrink_ == nullptr && this->sourceMNSParametersShrink_ == nullptr && this->sourceOSSEventParametersShrink_ == nullptr && this->sourceRabbitMQParametersShrink_ == nullptr
        && this->sourceRocketMQParametersShrink_ == nullptr && this->sourceSLSParametersShrink_ == nullptr && this->sourceScheduledEventParametersShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEventSourceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline UpdateEventSourceShrinkRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventSourceName Field Functions 
    bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
    void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
    inline string getEventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
    inline UpdateEventSourceShrinkRequest& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


    // externalSourceConfigShrink Field Functions 
    bool hasExternalSourceConfigShrink() const { return this->externalSourceConfigShrink_ != nullptr;};
    void deleteExternalSourceConfigShrink() { this->externalSourceConfigShrink_ = nullptr;};
    inline string getExternalSourceConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(externalSourceConfigShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setExternalSourceConfigShrink(string externalSourceConfigShrink) { DARABONBA_PTR_SET_VALUE(externalSourceConfigShrink_, externalSourceConfigShrink) };


    // externalSourceType Field Functions 
    bool hasExternalSourceType() const { return this->externalSourceType_ != nullptr;};
    void deleteExternalSourceType() { this->externalSourceType_ = nullptr;};
    inline string getExternalSourceType() const { DARABONBA_PTR_GET_DEFAULT(externalSourceType_, "") };
    inline UpdateEventSourceShrinkRequest& setExternalSourceType(string externalSourceType) { DARABONBA_PTR_SET_VALUE(externalSourceType_, externalSourceType) };


    // linkedExternalSource Field Functions 
    bool hasLinkedExternalSource() const { return this->linkedExternalSource_ != nullptr;};
    void deleteLinkedExternalSource() { this->linkedExternalSource_ = nullptr;};
    inline bool getLinkedExternalSource() const { DARABONBA_PTR_GET_DEFAULT(linkedExternalSource_, false) };
    inline UpdateEventSourceShrinkRequest& setLinkedExternalSource(bool linkedExternalSource) { DARABONBA_PTR_SET_VALUE(linkedExternalSource_, linkedExternalSource) };


    // sourceHttpEventParametersShrink Field Functions 
    bool hasSourceHttpEventParametersShrink() const { return this->sourceHttpEventParametersShrink_ != nullptr;};
    void deleteSourceHttpEventParametersShrink() { this->sourceHttpEventParametersShrink_ = nullptr;};
    inline string getSourceHttpEventParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceHttpEventParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceHttpEventParametersShrink(string sourceHttpEventParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceHttpEventParametersShrink_, sourceHttpEventParametersShrink) };


    // sourceKafkaParametersShrink Field Functions 
    bool hasSourceKafkaParametersShrink() const { return this->sourceKafkaParametersShrink_ != nullptr;};
    void deleteSourceKafkaParametersShrink() { this->sourceKafkaParametersShrink_ = nullptr;};
    inline string getSourceKafkaParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceKafkaParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceKafkaParametersShrink(string sourceKafkaParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceKafkaParametersShrink_, sourceKafkaParametersShrink) };


    // sourceMNSParametersShrink Field Functions 
    bool hasSourceMNSParametersShrink() const { return this->sourceMNSParametersShrink_ != nullptr;};
    void deleteSourceMNSParametersShrink() { this->sourceMNSParametersShrink_ = nullptr;};
    inline string getSourceMNSParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceMNSParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceMNSParametersShrink(string sourceMNSParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceMNSParametersShrink_, sourceMNSParametersShrink) };


    // sourceOSSEventParametersShrink Field Functions 
    bool hasSourceOSSEventParametersShrink() const { return this->sourceOSSEventParametersShrink_ != nullptr;};
    void deleteSourceOSSEventParametersShrink() { this->sourceOSSEventParametersShrink_ = nullptr;};
    inline string getSourceOSSEventParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceOSSEventParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceOSSEventParametersShrink(string sourceOSSEventParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceOSSEventParametersShrink_, sourceOSSEventParametersShrink) };


    // sourceRabbitMQParametersShrink Field Functions 
    bool hasSourceRabbitMQParametersShrink() const { return this->sourceRabbitMQParametersShrink_ != nullptr;};
    void deleteSourceRabbitMQParametersShrink() { this->sourceRabbitMQParametersShrink_ = nullptr;};
    inline string getSourceRabbitMQParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceRabbitMQParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceRabbitMQParametersShrink(string sourceRabbitMQParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParametersShrink_, sourceRabbitMQParametersShrink) };


    // sourceRocketMQParametersShrink Field Functions 
    bool hasSourceRocketMQParametersShrink() const { return this->sourceRocketMQParametersShrink_ != nullptr;};
    void deleteSourceRocketMQParametersShrink() { this->sourceRocketMQParametersShrink_ = nullptr;};
    inline string getSourceRocketMQParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceRocketMQParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceRocketMQParametersShrink(string sourceRocketMQParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParametersShrink_, sourceRocketMQParametersShrink) };


    // sourceSLSParametersShrink Field Functions 
    bool hasSourceSLSParametersShrink() const { return this->sourceSLSParametersShrink_ != nullptr;};
    void deleteSourceSLSParametersShrink() { this->sourceSLSParametersShrink_ = nullptr;};
    inline string getSourceSLSParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceSLSParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceSLSParametersShrink(string sourceSLSParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceSLSParametersShrink_, sourceSLSParametersShrink) };


    // sourceScheduledEventParametersShrink Field Functions 
    bool hasSourceScheduledEventParametersShrink() const { return this->sourceScheduledEventParametersShrink_ != nullptr;};
    void deleteSourceScheduledEventParametersShrink() { this->sourceScheduledEventParametersShrink_ = nullptr;};
    inline string getSourceScheduledEventParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceScheduledEventParametersShrink_, "") };
    inline UpdateEventSourceShrinkRequest& setSourceScheduledEventParametersShrink(string sourceScheduledEventParametersShrink) { DARABONBA_PTR_SET_VALUE(sourceScheduledEventParametersShrink_, sourceScheduledEventParametersShrink) };


  protected:
    // The description of the event source.
    shared_ptr<string> description_ {};
    // The event bus with which the event source is associated.
    // 
    // This parameter is required.
    shared_ptr<string> eventBusName_ {};
    // The name of the event source.
    // 
    // This parameter is required.
    shared_ptr<string> eventSourceName_ {};
    // The configurations of the external data source.
    shared_ptr<string> externalSourceConfigShrink_ {};
    // The type of the external data source.
    shared_ptr<string> externalSourceType_ {};
    // Specifies whether to connect to an external data source.
    shared_ptr<bool> linkedExternalSource_ {};
    // The parameters that are configured if the event source is HTTP events.
    shared_ptr<string> sourceHttpEventParametersShrink_ {};
    // The parameters that are configured if the event source is Message Queue for Apache Kafka.
    shared_ptr<string> sourceKafkaParametersShrink_ {};
    // The parameters that are configured if the event source is Message Service (MNS).
    shared_ptr<string> sourceMNSParametersShrink_ {};
    shared_ptr<string> sourceOSSEventParametersShrink_ {};
    // The parameters that are configured if the event source is Message Queue for RabbitMQ.
    shared_ptr<string> sourceRabbitMQParametersShrink_ {};
    // The parameters that are configured if the event source is Message Queue for Apache RocketMQ.
    shared_ptr<string> sourceRocketMQParametersShrink_ {};
    // SourceSLSParameters
    shared_ptr<string> sourceSLSParametersShrink_ {};
    // The parameters that are configured if you specify scheduled events as the event source.
    shared_ptr<string> sourceScheduledEventParametersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
