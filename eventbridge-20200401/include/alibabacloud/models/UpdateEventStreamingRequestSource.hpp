// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceApacheKafkaParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceDTSParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceEventBusParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceKafkaParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceMNSParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceMQTTParameters.hpp>
#include <alibabacloud/models/SourceMySQLParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceOSSParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourcePrometheusParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceRocketMQParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSourceSourceSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSource& obj) { 
      DARABONBA_PTR_TO_JSON(SourceApacheKafkaParameters, sourceApacheKafkaParameters_);
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
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSource& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceApacheKafkaParameters, sourceApacheKafkaParameters_);
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
    UpdateEventStreamingRequestSource() = default ;
    UpdateEventStreamingRequestSource(const UpdateEventStreamingRequestSource &) = default ;
    UpdateEventStreamingRequestSource(UpdateEventStreamingRequestSource &&) = default ;
    UpdateEventStreamingRequestSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSource() = default ;
    UpdateEventStreamingRequestSource& operator=(const UpdateEventStreamingRequestSource &) = default ;
    UpdateEventStreamingRequestSource& operator=(UpdateEventStreamingRequestSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceApacheKafkaParameters_ != nullptr
        && this->sourceApacheRocketMQCheckpointParameters_ != nullptr && this->sourceCustomizedKafkaConnectorParameters_ != nullptr && this->sourceCustomizedKafkaParameters_ != nullptr && this->sourceDTSParameters_ != nullptr && this->sourceEventBusParameters_ != nullptr
        && this->sourceKafkaParameters_ != nullptr && this->sourceMNSParameters_ != nullptr && this->sourceMQTTParameters_ != nullptr && this->sourceMySQLParameters_ != nullptr && this->sourceOSSParameters_ != nullptr
        && this->sourceOpenSourceRabbitMQParameters_ != nullptr && this->sourcePrometheusParameters_ != nullptr && this->sourceRabbitMQParameters_ != nullptr && this->sourceRocketMQCheckpointParameters_ != nullptr && this->sourceRocketMQParameters_ != nullptr
        && this->sourceSLSParameters_ != nullptr; };
    // sourceApacheKafkaParameters Field Functions 
    bool hasSourceApacheKafkaParameters() const { return this->sourceApacheKafkaParameters_ != nullptr;};
    void deleteSourceApacheKafkaParameters() { this->sourceApacheKafkaParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceApacheKafkaParameters & sourceApacheKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheKafkaParameters_, Models::UpdateEventStreamingRequestSourceSourceApacheKafkaParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceApacheKafkaParameters sourceApacheKafkaParameters() { DARABONBA_PTR_GET(sourceApacheKafkaParameters_, Models::UpdateEventStreamingRequestSourceSourceApacheKafkaParameters) };
    inline UpdateEventStreamingRequestSource& setSourceApacheKafkaParameters(const Models::UpdateEventStreamingRequestSourceSourceApacheKafkaParameters & sourceApacheKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheKafkaParameters_, sourceApacheKafkaParameters) };
    inline UpdateEventStreamingRequestSource& setSourceApacheKafkaParameters(Models::UpdateEventStreamingRequestSourceSourceApacheKafkaParameters && sourceApacheKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheKafkaParameters_, sourceApacheKafkaParameters) };


    // sourceApacheRocketMQCheckpointParameters Field Functions 
    bool hasSourceApacheRocketMQCheckpointParameters() const { return this->sourceApacheRocketMQCheckpointParameters_ != nullptr;};
    void deleteSourceApacheRocketMQCheckpointParameters() { this->sourceApacheRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters sourceApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceApacheRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSource& setSourceApacheRocketMQCheckpointParameters(const Models::UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSource& setSourceApacheRocketMQCheckpointParameters(Models::UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters && sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };


    // sourceCustomizedKafkaConnectorParameters Field Functions 
    bool hasSourceCustomizedKafkaConnectorParameters() const { return this->sourceCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaConnectorParameters() { this->sourceCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaConnectorParameters_, Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters sourceCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaConnectorParameters_, Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters) };
    inline UpdateEventStreamingRequestSource& setSourceCustomizedKafkaConnectorParameters(const Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };
    inline UpdateEventStreamingRequestSource& setSourceCustomizedKafkaConnectorParameters(Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters && sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };


    // sourceCustomizedKafkaParameters Field Functions 
    bool hasSourceCustomizedKafkaParameters() const { return this->sourceCustomizedKafkaParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaParameters() { this->sourceCustomizedKafkaParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaParameters_, Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters sourceCustomizedKafkaParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaParameters_, Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters) };
    inline UpdateEventStreamingRequestSource& setSourceCustomizedKafkaParameters(const Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };
    inline UpdateEventStreamingRequestSource& setSourceCustomizedKafkaParameters(Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters && sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };


    // sourceDTSParameters Field Functions 
    bool hasSourceDTSParameters() const { return this->sourceDTSParameters_ != nullptr;};
    void deleteSourceDTSParameters() { this->sourceDTSParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceDTSParameters & sourceDTSParameters() const { DARABONBA_PTR_GET_CONST(sourceDTSParameters_, Models::UpdateEventStreamingRequestSourceSourceDTSParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceDTSParameters sourceDTSParameters() { DARABONBA_PTR_GET(sourceDTSParameters_, Models::UpdateEventStreamingRequestSourceSourceDTSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceDTSParameters(const Models::UpdateEventStreamingRequestSourceSourceDTSParameters & sourceDTSParameters) { DARABONBA_PTR_SET_VALUE(sourceDTSParameters_, sourceDTSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceDTSParameters(Models::UpdateEventStreamingRequestSourceSourceDTSParameters && sourceDTSParameters) { DARABONBA_PTR_SET_RVALUE(sourceDTSParameters_, sourceDTSParameters) };


    // sourceEventBusParameters Field Functions 
    bool hasSourceEventBusParameters() const { return this->sourceEventBusParameters_ != nullptr;};
    void deleteSourceEventBusParameters() { this->sourceEventBusParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceEventBusParameters & sourceEventBusParameters() const { DARABONBA_PTR_GET_CONST(sourceEventBusParameters_, Models::UpdateEventStreamingRequestSourceSourceEventBusParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceEventBusParameters sourceEventBusParameters() { DARABONBA_PTR_GET(sourceEventBusParameters_, Models::UpdateEventStreamingRequestSourceSourceEventBusParameters) };
    inline UpdateEventStreamingRequestSource& setSourceEventBusParameters(const Models::UpdateEventStreamingRequestSourceSourceEventBusParameters & sourceEventBusParameters) { DARABONBA_PTR_SET_VALUE(sourceEventBusParameters_, sourceEventBusParameters) };
    inline UpdateEventStreamingRequestSource& setSourceEventBusParameters(Models::UpdateEventStreamingRequestSourceSourceEventBusParameters && sourceEventBusParameters) { DARABONBA_PTR_SET_RVALUE(sourceEventBusParameters_, sourceEventBusParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, Models::UpdateEventStreamingRequestSourceSourceKafkaParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, Models::UpdateEventStreamingRequestSourceSourceKafkaParameters) };
    inline UpdateEventStreamingRequestSource& setSourceKafkaParameters(const Models::UpdateEventStreamingRequestSourceSourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline UpdateEventStreamingRequestSource& setSourceKafkaParameters(Models::UpdateEventStreamingRequestSourceSourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, Models::UpdateEventStreamingRequestSourceSourceMNSParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, Models::UpdateEventStreamingRequestSourceSourceMNSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceMNSParameters(const Models::UpdateEventStreamingRequestSourceSourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceMNSParameters(Models::UpdateEventStreamingRequestSourceSourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceMQTTParameters Field Functions 
    bool hasSourceMQTTParameters() const { return this->sourceMQTTParameters_ != nullptr;};
    void deleteSourceMQTTParameters() { this->sourceMQTTParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceMQTTParameters & sourceMQTTParameters() const { DARABONBA_PTR_GET_CONST(sourceMQTTParameters_, Models::UpdateEventStreamingRequestSourceSourceMQTTParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceMQTTParameters sourceMQTTParameters() { DARABONBA_PTR_GET(sourceMQTTParameters_, Models::UpdateEventStreamingRequestSourceSourceMQTTParameters) };
    inline UpdateEventStreamingRequestSource& setSourceMQTTParameters(const Models::UpdateEventStreamingRequestSourceSourceMQTTParameters & sourceMQTTParameters) { DARABONBA_PTR_SET_VALUE(sourceMQTTParameters_, sourceMQTTParameters) };
    inline UpdateEventStreamingRequestSource& setSourceMQTTParameters(Models::UpdateEventStreamingRequestSourceSourceMQTTParameters && sourceMQTTParameters) { DARABONBA_PTR_SET_RVALUE(sourceMQTTParameters_, sourceMQTTParameters) };


    // sourceMySQLParameters Field Functions 
    bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
    void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
    inline const Models::SourceMySQLParameters & sourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline Models::SourceMySQLParameters sourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline UpdateEventStreamingRequestSource& setSourceMySQLParameters(const Models::SourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
    inline UpdateEventStreamingRequestSource& setSourceMySQLParameters(Models::SourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


    // sourceOSSParameters Field Functions 
    bool hasSourceOSSParameters() const { return this->sourceOSSParameters_ != nullptr;};
    void deleteSourceOSSParameters() { this->sourceOSSParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceOSSParameters & sourceOSSParameters() const { DARABONBA_PTR_GET_CONST(sourceOSSParameters_, Models::UpdateEventStreamingRequestSourceSourceOSSParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceOSSParameters sourceOSSParameters() { DARABONBA_PTR_GET(sourceOSSParameters_, Models::UpdateEventStreamingRequestSourceSourceOSSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceOSSParameters(const Models::UpdateEventStreamingRequestSourceSourceOSSParameters & sourceOSSParameters) { DARABONBA_PTR_SET_VALUE(sourceOSSParameters_, sourceOSSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceOSSParameters(Models::UpdateEventStreamingRequestSourceSourceOSSParameters && sourceOSSParameters) { DARABONBA_PTR_SET_RVALUE(sourceOSSParameters_, sourceOSSParameters) };


    // sourceOpenSourceRabbitMQParameters Field Functions 
    bool hasSourceOpenSourceRabbitMQParameters() const { return this->sourceOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSourceOpenSourceRabbitMQParameters() { this->sourceOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceOpenSourceRabbitMQParameters_, Models::UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters sourceOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceOpenSourceRabbitMQParameters_, Models::UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters) };
    inline UpdateEventStreamingRequestSource& setSourceOpenSourceRabbitMQParameters(const Models::UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };
    inline UpdateEventStreamingRequestSource& setSourceOpenSourceRabbitMQParameters(Models::UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters && sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };


    // sourcePrometheusParameters Field Functions 
    bool hasSourcePrometheusParameters() const { return this->sourcePrometheusParameters_ != nullptr;};
    void deleteSourcePrometheusParameters() { this->sourcePrometheusParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourcePrometheusParameters & sourcePrometheusParameters() const { DARABONBA_PTR_GET_CONST(sourcePrometheusParameters_, Models::UpdateEventStreamingRequestSourceSourcePrometheusParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourcePrometheusParameters sourcePrometheusParameters() { DARABONBA_PTR_GET(sourcePrometheusParameters_, Models::UpdateEventStreamingRequestSourceSourcePrometheusParameters) };
    inline UpdateEventStreamingRequestSource& setSourcePrometheusParameters(const Models::UpdateEventStreamingRequestSourceSourcePrometheusParameters & sourcePrometheusParameters) { DARABONBA_PTR_SET_VALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };
    inline UpdateEventStreamingRequestSource& setSourcePrometheusParameters(Models::UpdateEventStreamingRequestSourceSourcePrometheusParameters && sourcePrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, Models::UpdateEventStreamingRequestSourceSourceRabbitMQParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, Models::UpdateEventStreamingRequestSourceSourceRabbitMQParameters) };
    inline UpdateEventStreamingRequestSource& setSourceRabbitMQParameters(const Models::UpdateEventStreamingRequestSourceSourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline UpdateEventStreamingRequestSource& setSourceRabbitMQParameters(Models::UpdateEventStreamingRequestSourceSourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQCheckpointParameters Field Functions 
    bool hasSourceRocketMQCheckpointParameters() const { return this->sourceRocketMQCheckpointParameters_ != nullptr;};
    void deleteSourceRocketMQCheckpointParameters() { this->sourceRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters sourceRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSource& setSourceRocketMQCheckpointParameters(const Models::UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSource& setSourceRocketMQCheckpointParameters(Models::UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters && sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, Models::UpdateEventStreamingRequestSourceSourceRocketMQParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, Models::UpdateEventStreamingRequestSourceSourceRocketMQParameters) };
    inline UpdateEventStreamingRequestSource& setSourceRocketMQParameters(const Models::UpdateEventStreamingRequestSourceSourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline UpdateEventStreamingRequestSource& setSourceRocketMQParameters(Models::UpdateEventStreamingRequestSourceSourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSourceSourceSLSParameters & sourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, Models::UpdateEventStreamingRequestSourceSourceSLSParameters) };
    inline Models::UpdateEventStreamingRequestSourceSourceSLSParameters sourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, Models::UpdateEventStreamingRequestSourceSourceSLSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceSLSParameters(const Models::UpdateEventStreamingRequestSourceSourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline UpdateEventStreamingRequestSource& setSourceSLSParameters(Models::UpdateEventStreamingRequestSourceSourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


  protected:
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceApacheKafkaParameters> sourceApacheKafkaParameters_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters> sourceApacheRocketMQCheckpointParameters_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaConnectorParameters> sourceCustomizedKafkaConnectorParameters_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceCustomizedKafkaParameters> sourceCustomizedKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify Data Transmission Service (DTS) as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceDTSParameters> sourceDTSParameters_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceEventBusParameters> sourceEventBusParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for Kafka as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify Message Service (MNS) as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceMNSParameters> sourceMNSParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for MQTT as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceMQTTParameters> sourceMQTTParameters_ = nullptr;
    std::shared_ptr<Models::SourceMySQLParameters> sourceMySQLParameters_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceOSSParameters> sourceOSSParameters_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceOpenSourceRabbitMQParameters> sourceOpenSourceRabbitMQParameters_ = nullptr;
    // The parameters that are configured if you specify Managed Service for Prometheus as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourcePrometheusParameters> sourcePrometheusParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RabbitMQ as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceRocketMQCheckpointParameters> sourceRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RocketMQ as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
    // The parameters that are configured if you specify Simple Log Service as the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSourceSourceSLSParameters> sourceSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
