// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventSourceRequestSourceHttpEventParameters.hpp>
#include <alibabacloud/models/UpdateEventSourceRequestSourceKafkaParameters.hpp>
#include <alibabacloud/models/UpdateEventSourceRequestSourceMNSParameters.hpp>
#include <alibabacloud/models/UpdateEventSourceRequestSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/UpdateEventSourceRequestSourceRocketMQParameters.hpp>
#include <alibabacloud/models/UpdateEventSourceRequestSourceSLSParameters.hpp>
#include <alibabacloud/models/UpdateEventSourceRequestSourceScheduledEventParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventSourceRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateEventSourceRequest& obj) { 
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
    UpdateEventSourceRequest() = default ;
    UpdateEventSourceRequest(const UpdateEventSourceRequest &) = default ;
    UpdateEventSourceRequest(UpdateEventSourceRequest &&) = default ;
    UpdateEventSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventSourceRequest() = default ;
    UpdateEventSourceRequest& operator=(const UpdateEventSourceRequest &) = default ;
    UpdateEventSourceRequest& operator=(UpdateEventSourceRequest &&) = default ;
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
    inline UpdateEventSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline UpdateEventSourceRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventSourceName Field Functions 
    bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
    void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
    inline string eventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
    inline UpdateEventSourceRequest& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


    // externalSourceConfig Field Functions 
    bool hasExternalSourceConfig() const { return this->externalSourceConfig_ != nullptr;};
    void deleteExternalSourceConfig() { this->externalSourceConfig_ = nullptr;};
    inline     const Darabonba::Json & externalSourceConfig() const { DARABONBA_GET(externalSourceConfig_) };
    Darabonba::Json & externalSourceConfig() { DARABONBA_GET(externalSourceConfig_) };
    inline UpdateEventSourceRequest& setExternalSourceConfig(const Darabonba::Json & externalSourceConfig) { DARABONBA_SET_VALUE(externalSourceConfig_, externalSourceConfig) };
    inline UpdateEventSourceRequest& setExternalSourceConfig(Darabonba::Json & externalSourceConfig) { DARABONBA_SET_RVALUE(externalSourceConfig_, externalSourceConfig) };


    // externalSourceType Field Functions 
    bool hasExternalSourceType() const { return this->externalSourceType_ != nullptr;};
    void deleteExternalSourceType() { this->externalSourceType_ = nullptr;};
    inline string externalSourceType() const { DARABONBA_PTR_GET_DEFAULT(externalSourceType_, "") };
    inline UpdateEventSourceRequest& setExternalSourceType(string externalSourceType) { DARABONBA_PTR_SET_VALUE(externalSourceType_, externalSourceType) };


    // linkedExternalSource Field Functions 
    bool hasLinkedExternalSource() const { return this->linkedExternalSource_ != nullptr;};
    void deleteLinkedExternalSource() { this->linkedExternalSource_ = nullptr;};
    inline bool linkedExternalSource() const { DARABONBA_PTR_GET_DEFAULT(linkedExternalSource_, false) };
    inline UpdateEventSourceRequest& setLinkedExternalSource(bool linkedExternalSource) { DARABONBA_PTR_SET_VALUE(linkedExternalSource_, linkedExternalSource) };


    // sourceHttpEventParameters Field Functions 
    bool hasSourceHttpEventParameters() const { return this->sourceHttpEventParameters_ != nullptr;};
    void deleteSourceHttpEventParameters() { this->sourceHttpEventParameters_ = nullptr;};
    inline const UpdateEventSourceRequestSourceHttpEventParameters & sourceHttpEventParameters() const { DARABONBA_PTR_GET_CONST(sourceHttpEventParameters_, UpdateEventSourceRequestSourceHttpEventParameters) };
    inline UpdateEventSourceRequestSourceHttpEventParameters sourceHttpEventParameters() { DARABONBA_PTR_GET(sourceHttpEventParameters_, UpdateEventSourceRequestSourceHttpEventParameters) };
    inline UpdateEventSourceRequest& setSourceHttpEventParameters(const UpdateEventSourceRequestSourceHttpEventParameters & sourceHttpEventParameters) { DARABONBA_PTR_SET_VALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };
    inline UpdateEventSourceRequest& setSourceHttpEventParameters(UpdateEventSourceRequestSourceHttpEventParameters && sourceHttpEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceHttpEventParameters_, sourceHttpEventParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const UpdateEventSourceRequestSourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, UpdateEventSourceRequestSourceKafkaParameters) };
    inline UpdateEventSourceRequestSourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, UpdateEventSourceRequestSourceKafkaParameters) };
    inline UpdateEventSourceRequest& setSourceKafkaParameters(const UpdateEventSourceRequestSourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline UpdateEventSourceRequest& setSourceKafkaParameters(UpdateEventSourceRequestSourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const UpdateEventSourceRequestSourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, UpdateEventSourceRequestSourceMNSParameters) };
    inline UpdateEventSourceRequestSourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, UpdateEventSourceRequestSourceMNSParameters) };
    inline UpdateEventSourceRequest& setSourceMNSParameters(const UpdateEventSourceRequestSourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline UpdateEventSourceRequest& setSourceMNSParameters(UpdateEventSourceRequestSourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const UpdateEventSourceRequestSourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, UpdateEventSourceRequestSourceRabbitMQParameters) };
    inline UpdateEventSourceRequestSourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, UpdateEventSourceRequestSourceRabbitMQParameters) };
    inline UpdateEventSourceRequest& setSourceRabbitMQParameters(const UpdateEventSourceRequestSourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline UpdateEventSourceRequest& setSourceRabbitMQParameters(UpdateEventSourceRequestSourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const UpdateEventSourceRequestSourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, UpdateEventSourceRequestSourceRocketMQParameters) };
    inline UpdateEventSourceRequestSourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, UpdateEventSourceRequestSourceRocketMQParameters) };
    inline UpdateEventSourceRequest& setSourceRocketMQParameters(const UpdateEventSourceRequestSourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline UpdateEventSourceRequest& setSourceRocketMQParameters(UpdateEventSourceRequestSourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const UpdateEventSourceRequestSourceSLSParameters & sourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, UpdateEventSourceRequestSourceSLSParameters) };
    inline UpdateEventSourceRequestSourceSLSParameters sourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, UpdateEventSourceRequestSourceSLSParameters) };
    inline UpdateEventSourceRequest& setSourceSLSParameters(const UpdateEventSourceRequestSourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline UpdateEventSourceRequest& setSourceSLSParameters(UpdateEventSourceRequestSourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


    // sourceScheduledEventParameters Field Functions 
    bool hasSourceScheduledEventParameters() const { return this->sourceScheduledEventParameters_ != nullptr;};
    void deleteSourceScheduledEventParameters() { this->sourceScheduledEventParameters_ = nullptr;};
    inline const UpdateEventSourceRequestSourceScheduledEventParameters & sourceScheduledEventParameters() const { DARABONBA_PTR_GET_CONST(sourceScheduledEventParameters_, UpdateEventSourceRequestSourceScheduledEventParameters) };
    inline UpdateEventSourceRequestSourceScheduledEventParameters sourceScheduledEventParameters() { DARABONBA_PTR_GET(sourceScheduledEventParameters_, UpdateEventSourceRequestSourceScheduledEventParameters) };
    inline UpdateEventSourceRequest& setSourceScheduledEventParameters(const UpdateEventSourceRequestSourceScheduledEventParameters & sourceScheduledEventParameters) { DARABONBA_PTR_SET_VALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };
    inline UpdateEventSourceRequest& setSourceScheduledEventParameters(UpdateEventSourceRequestSourceScheduledEventParameters && sourceScheduledEventParameters) { DARABONBA_PTR_SET_RVALUE(sourceScheduledEventParameters_, sourceScheduledEventParameters) };


  protected:
    // The description of the event source.
    std::shared_ptr<string> description_ = nullptr;
    // The event bus with which the event source is associated.
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
    std::shared_ptr<string> externalSourceType_ = nullptr;
    // Specifies whether to connect to an external data source.
    std::shared_ptr<bool> linkedExternalSource_ = nullptr;
    // The parameters that are configured if the event source is HTTP events.
    std::shared_ptr<UpdateEventSourceRequestSourceHttpEventParameters> sourceHttpEventParameters_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for Apache Kafka.
    std::shared_ptr<UpdateEventSourceRequestSourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    // The parameters that are configured if the event source is Message Service (MNS).
    std::shared_ptr<UpdateEventSourceRequestSourceMNSParameters> sourceMNSParameters_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for RabbitMQ.
    std::shared_ptr<UpdateEventSourceRequestSourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    // The parameters that are configured if the event source is Message Queue for Apache RocketMQ.
    std::shared_ptr<UpdateEventSourceRequestSourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
    // SourceSLSParameters
    std::shared_ptr<UpdateEventSourceRequestSourceSLSParameters> sourceSLSParameters_ = nullptr;
    // The parameters that are configured if you specify scheduled events as the event source.
    std::shared_ptr<UpdateEventSourceRequestSourceScheduledEventParameters> sourceScheduledEventParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
