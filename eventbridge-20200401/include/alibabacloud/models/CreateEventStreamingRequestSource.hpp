// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceDTSParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceEventBusParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceKafkaParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceMNSParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceMQTTParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceOSSParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourcePrometheusParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceRocketMQParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSourceSourceSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSource& obj) { 
      DARABONBA_PTR_TO_JSON(SourceApacheRocketMQCheckpointParameters, sourceApacheRocketMQCheckpointParameters_);
      DARABONBA_PTR_TO_JSON(SourceCustomizedKafkaConnectorParameters, sourceCustomizedKafkaConnectorParameters_);
      DARABONBA_PTR_TO_JSON(SourceCustomizedKafkaParameters, sourceCustomizedKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SourceDTSParameters, sourceDTSParameters_);
      DARABONBA_PTR_TO_JSON(SourceEventBusParameters, sourceEventBusParameters_);
      DARABONBA_PTR_TO_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_TO_JSON(SourceMQTTParameters, sourceMQTTParameters_);
      DARABONBA_PTR_TO_JSON(SourceMySQLParameters, sourceMySQLParameters_);
      DARABONBA_PTR_TO_JSON(SourceOSSParameters, sourceOSSParameters_);
      DARABONBA_PTR_TO_JSON(SourceOpenSourceRabbitMQParameters, sourceOpenSourceRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SourcePrometheusParameters, sourcePrometheusParameters_);
      DARABONBA_PTR_TO_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceRocketMQCheckpointParameters, sourceRocketMQCheckpointParameters_);
      DARABONBA_PTR_TO_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_TO_JSON(SourceSLSParameters, sourceSLSParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSource& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceApacheRocketMQCheckpointParameters, sourceApacheRocketMQCheckpointParameters_);
      DARABONBA_PTR_FROM_JSON(SourceCustomizedKafkaConnectorParameters, sourceCustomizedKafkaConnectorParameters_);
      DARABONBA_PTR_FROM_JSON(SourceCustomizedKafkaParameters, sourceCustomizedKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SourceDTSParameters, sourceDTSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceEventBusParameters, sourceEventBusParameters_);
      DARABONBA_PTR_FROM_JSON(SourceKafkaParameters, sourceKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SourceMNSParameters, sourceMNSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceMQTTParameters, sourceMQTTParameters_);
      DARABONBA_PTR_FROM_JSON(SourceMySQLParameters, sourceMySQLParameters_);
      DARABONBA_PTR_FROM_JSON(SourceOSSParameters, sourceOSSParameters_);
      DARABONBA_PTR_FROM_JSON(SourceOpenSourceRabbitMQParameters, sourceOpenSourceRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourcePrometheusParameters, sourcePrometheusParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRocketMQCheckpointParameters, sourceRocketMQCheckpointParameters_);
      DARABONBA_PTR_FROM_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
      DARABONBA_PTR_FROM_JSON(SourceSLSParameters, sourceSLSParameters_);
    };
    CreateEventStreamingRequestSource() = default ;
    CreateEventStreamingRequestSource(const CreateEventStreamingRequestSource &) = default ;
    CreateEventStreamingRequestSource(CreateEventStreamingRequestSource &&) = default ;
    CreateEventStreamingRequestSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSource() = default ;
    CreateEventStreamingRequestSource& operator=(const CreateEventStreamingRequestSource &) = default ;
    CreateEventStreamingRequestSource& operator=(CreateEventStreamingRequestSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceApacheRocketMQCheckpointParameters_ != nullptr
        && this->sourceCustomizedKafkaConnectorParameters_ != nullptr && this->sourceCustomizedKafkaParameters_ != nullptr && this->sourceDTSParameters_ != nullptr && this->sourceEventBusParameters_ != nullptr && this->sourceKafkaParameters_ != nullptr
        && this->sourceMNSParameters_ != nullptr && this->sourceMQTTParameters_ != nullptr && this->sourceMySQLParameters_ != nullptr && this->sourceOSSParameters_ != nullptr && this->sourceOpenSourceRabbitMQParameters_ != nullptr
        && this->sourcePrometheusParameters_ != nullptr && this->sourceRabbitMQParameters_ != nullptr && this->sourceRocketMQCheckpointParameters_ != nullptr && this->sourceRocketMQParameters_ != nullptr && this->sourceSLSParameters_ != nullptr; };
    // sourceApacheRocketMQCheckpointParameters Field Functions 
    bool hasSourceApacheRocketMQCheckpointParameters() const { return this->sourceApacheRocketMQCheckpointParameters_ != nullptr;};
    void deleteSourceApacheRocketMQCheckpointParameters() { this->sourceApacheRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters sourceApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceApacheRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSource& setSourceApacheRocketMQCheckpointParameters(const Models::CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSource& setSourceApacheRocketMQCheckpointParameters(Models::CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters && sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };


    // sourceCustomizedKafkaConnectorParameters Field Functions 
    bool hasSourceCustomizedKafkaConnectorParameters() const { return this->sourceCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaConnectorParameters() { this->sourceCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaConnectorParameters_, Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters sourceCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaConnectorParameters_, Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters) };
    inline CreateEventStreamingRequestSource& setSourceCustomizedKafkaConnectorParameters(const Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };
    inline CreateEventStreamingRequestSource& setSourceCustomizedKafkaConnectorParameters(Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters && sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };


    // sourceCustomizedKafkaParameters Field Functions 
    bool hasSourceCustomizedKafkaParameters() const { return this->sourceCustomizedKafkaParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaParameters() { this->sourceCustomizedKafkaParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaParameters_, Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters sourceCustomizedKafkaParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaParameters_, Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters) };
    inline CreateEventStreamingRequestSource& setSourceCustomizedKafkaParameters(const Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };
    inline CreateEventStreamingRequestSource& setSourceCustomizedKafkaParameters(Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters && sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };


    // sourceDTSParameters Field Functions 
    bool hasSourceDTSParameters() const { return this->sourceDTSParameters_ != nullptr;};
    void deleteSourceDTSParameters() { this->sourceDTSParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceDTSParameters & sourceDTSParameters() const { DARABONBA_PTR_GET_CONST(sourceDTSParameters_, Models::CreateEventStreamingRequestSourceSourceDTSParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceDTSParameters sourceDTSParameters() { DARABONBA_PTR_GET(sourceDTSParameters_, Models::CreateEventStreamingRequestSourceSourceDTSParameters) };
    inline CreateEventStreamingRequestSource& setSourceDTSParameters(const Models::CreateEventStreamingRequestSourceSourceDTSParameters & sourceDTSParameters) { DARABONBA_PTR_SET_VALUE(sourceDTSParameters_, sourceDTSParameters) };
    inline CreateEventStreamingRequestSource& setSourceDTSParameters(Models::CreateEventStreamingRequestSourceSourceDTSParameters && sourceDTSParameters) { DARABONBA_PTR_SET_RVALUE(sourceDTSParameters_, sourceDTSParameters) };


    // sourceEventBusParameters Field Functions 
    bool hasSourceEventBusParameters() const { return this->sourceEventBusParameters_ != nullptr;};
    void deleteSourceEventBusParameters() { this->sourceEventBusParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceEventBusParameters & sourceEventBusParameters() const { DARABONBA_PTR_GET_CONST(sourceEventBusParameters_, Models::CreateEventStreamingRequestSourceSourceEventBusParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceEventBusParameters sourceEventBusParameters() { DARABONBA_PTR_GET(sourceEventBusParameters_, Models::CreateEventStreamingRequestSourceSourceEventBusParameters) };
    inline CreateEventStreamingRequestSource& setSourceEventBusParameters(const Models::CreateEventStreamingRequestSourceSourceEventBusParameters & sourceEventBusParameters) { DARABONBA_PTR_SET_VALUE(sourceEventBusParameters_, sourceEventBusParameters) };
    inline CreateEventStreamingRequestSource& setSourceEventBusParameters(Models::CreateEventStreamingRequestSourceSourceEventBusParameters && sourceEventBusParameters) { DARABONBA_PTR_SET_RVALUE(sourceEventBusParameters_, sourceEventBusParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, Models::CreateEventStreamingRequestSourceSourceKafkaParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, Models::CreateEventStreamingRequestSourceSourceKafkaParameters) };
    inline CreateEventStreamingRequestSource& setSourceKafkaParameters(const Models::CreateEventStreamingRequestSourceSourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline CreateEventStreamingRequestSource& setSourceKafkaParameters(Models::CreateEventStreamingRequestSourceSourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, Models::CreateEventStreamingRequestSourceSourceMNSParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, Models::CreateEventStreamingRequestSourceSourceMNSParameters) };
    inline CreateEventStreamingRequestSource& setSourceMNSParameters(const Models::CreateEventStreamingRequestSourceSourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline CreateEventStreamingRequestSource& setSourceMNSParameters(Models::CreateEventStreamingRequestSourceSourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceMQTTParameters Field Functions 
    bool hasSourceMQTTParameters() const { return this->sourceMQTTParameters_ != nullptr;};
    void deleteSourceMQTTParameters() { this->sourceMQTTParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceMQTTParameters & sourceMQTTParameters() const { DARABONBA_PTR_GET_CONST(sourceMQTTParameters_, Models::CreateEventStreamingRequestSourceSourceMQTTParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceMQTTParameters sourceMQTTParameters() { DARABONBA_PTR_GET(sourceMQTTParameters_, Models::CreateEventStreamingRequestSourceSourceMQTTParameters) };
    inline CreateEventStreamingRequestSource& setSourceMQTTParameters(const Models::CreateEventStreamingRequestSourceSourceMQTTParameters & sourceMQTTParameters) { DARABONBA_PTR_SET_VALUE(sourceMQTTParameters_, sourceMQTTParameters) };
    inline CreateEventStreamingRequestSource& setSourceMQTTParameters(Models::CreateEventStreamingRequestSourceSourceMQTTParameters && sourceMQTTParameters) { DARABONBA_PTR_SET_RVALUE(sourceMQTTParameters_, sourceMQTTParameters) };


    // sourceMySQLParameters Field Functions 
    bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
    void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
    inline const Models::SourceMySQLParameters & sourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline Models::SourceMySQLParameters sourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline CreateEventStreamingRequestSource& setSourceMySQLParameters(const Models::SourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
    inline CreateEventStreamingRequestSource& setSourceMySQLParameters(Models::SourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


    // sourceOSSParameters Field Functions 
    bool hasSourceOSSParameters() const { return this->sourceOSSParameters_ != nullptr;};
    void deleteSourceOSSParameters() { this->sourceOSSParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceOSSParameters & sourceOSSParameters() const { DARABONBA_PTR_GET_CONST(sourceOSSParameters_, Models::CreateEventStreamingRequestSourceSourceOSSParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceOSSParameters sourceOSSParameters() { DARABONBA_PTR_GET(sourceOSSParameters_, Models::CreateEventStreamingRequestSourceSourceOSSParameters) };
    inline CreateEventStreamingRequestSource& setSourceOSSParameters(const Models::CreateEventStreamingRequestSourceSourceOSSParameters & sourceOSSParameters) { DARABONBA_PTR_SET_VALUE(sourceOSSParameters_, sourceOSSParameters) };
    inline CreateEventStreamingRequestSource& setSourceOSSParameters(Models::CreateEventStreamingRequestSourceSourceOSSParameters && sourceOSSParameters) { DARABONBA_PTR_SET_RVALUE(sourceOSSParameters_, sourceOSSParameters) };


    // sourceOpenSourceRabbitMQParameters Field Functions 
    bool hasSourceOpenSourceRabbitMQParameters() const { return this->sourceOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSourceOpenSourceRabbitMQParameters() { this->sourceOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceOpenSourceRabbitMQParameters_, Models::CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters sourceOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceOpenSourceRabbitMQParameters_, Models::CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters) };
    inline CreateEventStreamingRequestSource& setSourceOpenSourceRabbitMQParameters(const Models::CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };
    inline CreateEventStreamingRequestSource& setSourceOpenSourceRabbitMQParameters(Models::CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters && sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };


    // sourcePrometheusParameters Field Functions 
    bool hasSourcePrometheusParameters() const { return this->sourcePrometheusParameters_ != nullptr;};
    void deleteSourcePrometheusParameters() { this->sourcePrometheusParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourcePrometheusParameters & sourcePrometheusParameters() const { DARABONBA_PTR_GET_CONST(sourcePrometheusParameters_, Models::CreateEventStreamingRequestSourceSourcePrometheusParameters) };
    inline Models::CreateEventStreamingRequestSourceSourcePrometheusParameters sourcePrometheusParameters() { DARABONBA_PTR_GET(sourcePrometheusParameters_, Models::CreateEventStreamingRequestSourceSourcePrometheusParameters) };
    inline CreateEventStreamingRequestSource& setSourcePrometheusParameters(const Models::CreateEventStreamingRequestSourceSourcePrometheusParameters & sourcePrometheusParameters) { DARABONBA_PTR_SET_VALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };
    inline CreateEventStreamingRequestSource& setSourcePrometheusParameters(Models::CreateEventStreamingRequestSourceSourcePrometheusParameters && sourcePrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, Models::CreateEventStreamingRequestSourceSourceRabbitMQParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, Models::CreateEventStreamingRequestSourceSourceRabbitMQParameters) };
    inline CreateEventStreamingRequestSource& setSourceRabbitMQParameters(const Models::CreateEventStreamingRequestSourceSourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline CreateEventStreamingRequestSource& setSourceRabbitMQParameters(Models::CreateEventStreamingRequestSourceSourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQCheckpointParameters Field Functions 
    bool hasSourceRocketMQCheckpointParameters() const { return this->sourceRocketMQCheckpointParameters_ != nullptr;};
    void deleteSourceRocketMQCheckpointParameters() { this->sourceRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters sourceRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSource& setSourceRocketMQCheckpointParameters(const Models::CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSource& setSourceRocketMQCheckpointParameters(Models::CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters && sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, Models::CreateEventStreamingRequestSourceSourceRocketMQParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, Models::CreateEventStreamingRequestSourceSourceRocketMQParameters) };
    inline CreateEventStreamingRequestSource& setSourceRocketMQParameters(const Models::CreateEventStreamingRequestSourceSourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline CreateEventStreamingRequestSource& setSourceRocketMQParameters(Models::CreateEventStreamingRequestSourceSourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSourceSourceSLSParameters & sourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, Models::CreateEventStreamingRequestSourceSourceSLSParameters) };
    inline Models::CreateEventStreamingRequestSourceSourceSLSParameters sourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, Models::CreateEventStreamingRequestSourceSourceSLSParameters) };
    inline CreateEventStreamingRequestSource& setSourceSLSParameters(const Models::CreateEventStreamingRequestSourceSourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline CreateEventStreamingRequestSource& setSourceSLSParameters(Models::CreateEventStreamingRequestSourceSourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


  protected:
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters> sourceApacheRocketMQCheckpointParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters> sourceCustomizedKafkaConnectorParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceCustomizedKafkaParameters> sourceCustomizedKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify Data Transmission Service (DTS) as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceDTSParameters> sourceDTSParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceEventBusParameters> sourceEventBusParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for Kafka as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify Message Service (MNS) as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceMNSParameters> sourceMNSParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for MQTT as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceMQTTParameters> sourceMQTTParameters_ = nullptr;
    std::shared_ptr<Models::SourceMySQLParameters> sourceMySQLParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceOSSParameters> sourceOSSParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters> sourceOpenSourceRabbitMQParameters_ = nullptr;
    // Parameters that are configured if you specify Managed Service for Prometheus as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourcePrometheusParameters> sourcePrometheusParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RabbitMQ as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceRocketMQCheckpointParameters> sourceRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RocketMQ as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
    // The parameters that are configured if you specify Simple Log Service as the event source.
    std::shared_ptr<Models::CreateEventStreamingRequestSourceSourceSLSParameters> sourceSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
