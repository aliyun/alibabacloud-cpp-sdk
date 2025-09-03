// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceDTSParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceEventBusParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceKafkaParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceMNSParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceMQTTParameters.hpp>
#include <alibabacloud/models/SourceMySQLParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceOSSParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSourceSourceSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSource& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSource& obj) { 
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
    GetEventStreamingResponseBodyDataSource() = default ;
    GetEventStreamingResponseBodyDataSource(const GetEventStreamingResponseBodyDataSource &) = default ;
    GetEventStreamingResponseBodyDataSource(GetEventStreamingResponseBodyDataSource &&) = default ;
    GetEventStreamingResponseBodyDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSource() = default ;
    GetEventStreamingResponseBodyDataSource& operator=(const GetEventStreamingResponseBodyDataSource &) = default ;
    GetEventStreamingResponseBodyDataSource& operator=(GetEventStreamingResponseBodyDataSource &&) = default ;
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
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters & sourceApacheKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheKafkaParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters sourceApacheKafkaParameters() { DARABONBA_PTR_GET(sourceApacheKafkaParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceApacheKafkaParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters & sourceApacheKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheKafkaParameters_, sourceApacheKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceApacheKafkaParameters(Models::GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters && sourceApacheKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheKafkaParameters_, sourceApacheKafkaParameters) };


    // sourceApacheRocketMQCheckpointParameters Field Functions 
    bool hasSourceApacheRocketMQCheckpointParameters() const { return this->sourceApacheRocketMQCheckpointParameters_ != nullptr;};
    void deleteSourceApacheRocketMQCheckpointParameters() { this->sourceApacheRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters sourceApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceApacheRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceApacheRocketMQCheckpointParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceApacheRocketMQCheckpointParameters(Models::GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters && sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };


    // sourceCustomizedKafkaConnectorParameters Field Functions 
    bool hasSourceCustomizedKafkaConnectorParameters() const { return this->sourceCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaConnectorParameters() { this->sourceCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaConnectorParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters sourceCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaConnectorParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceCustomizedKafkaConnectorParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceCustomizedKafkaConnectorParameters(Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters && sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };


    // sourceCustomizedKafkaParameters Field Functions 
    bool hasSourceCustomizedKafkaParameters() const { return this->sourceCustomizedKafkaParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaParameters() { this->sourceCustomizedKafkaParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters sourceCustomizedKafkaParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceCustomizedKafkaParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceCustomizedKafkaParameters(Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters && sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };


    // sourceDTSParameters Field Functions 
    bool hasSourceDTSParameters() const { return this->sourceDTSParameters_ != nullptr;};
    void deleteSourceDTSParameters() { this->sourceDTSParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceDTSParameters & sourceDTSParameters() const { DARABONBA_PTR_GET_CONST(sourceDTSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceDTSParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceDTSParameters sourceDTSParameters() { DARABONBA_PTR_GET(sourceDTSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceDTSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceDTSParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceDTSParameters & sourceDTSParameters) { DARABONBA_PTR_SET_VALUE(sourceDTSParameters_, sourceDTSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceDTSParameters(Models::GetEventStreamingResponseBodyDataSourceSourceDTSParameters && sourceDTSParameters) { DARABONBA_PTR_SET_RVALUE(sourceDTSParameters_, sourceDTSParameters) };


    // sourceEventBusParameters Field Functions 
    bool hasSourceEventBusParameters() const { return this->sourceEventBusParameters_ != nullptr;};
    void deleteSourceEventBusParameters() { this->sourceEventBusParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceEventBusParameters & sourceEventBusParameters() const { DARABONBA_PTR_GET_CONST(sourceEventBusParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceEventBusParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceEventBusParameters sourceEventBusParameters() { DARABONBA_PTR_GET(sourceEventBusParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceEventBusParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceEventBusParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceEventBusParameters & sourceEventBusParameters) { DARABONBA_PTR_SET_VALUE(sourceEventBusParameters_, sourceEventBusParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceEventBusParameters(Models::GetEventStreamingResponseBodyDataSourceSourceEventBusParameters && sourceEventBusParameters) { DARABONBA_PTR_SET_RVALUE(sourceEventBusParameters_, sourceEventBusParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceKafkaParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceKafkaParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceKafkaParameters(Models::GetEventStreamingResponseBodyDataSourceSourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceMNSParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceMNSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceMNSParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceMNSParameters(Models::GetEventStreamingResponseBodyDataSourceSourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceMQTTParameters Field Functions 
    bool hasSourceMQTTParameters() const { return this->sourceMQTTParameters_ != nullptr;};
    void deleteSourceMQTTParameters() { this->sourceMQTTParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceMQTTParameters & sourceMQTTParameters() const { DARABONBA_PTR_GET_CONST(sourceMQTTParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceMQTTParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceMQTTParameters sourceMQTTParameters() { DARABONBA_PTR_GET(sourceMQTTParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceMQTTParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceMQTTParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceMQTTParameters & sourceMQTTParameters) { DARABONBA_PTR_SET_VALUE(sourceMQTTParameters_, sourceMQTTParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceMQTTParameters(Models::GetEventStreamingResponseBodyDataSourceSourceMQTTParameters && sourceMQTTParameters) { DARABONBA_PTR_SET_RVALUE(sourceMQTTParameters_, sourceMQTTParameters) };


    // sourceMySQLParameters Field Functions 
    bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
    void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
    inline const Models::SourceMySQLParameters & sourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline Models::SourceMySQLParameters sourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceMySQLParameters(const Models::SourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceMySQLParameters(Models::SourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


    // sourceOSSParameters Field Functions 
    bool hasSourceOSSParameters() const { return this->sourceOSSParameters_ != nullptr;};
    void deleteSourceOSSParameters() { this->sourceOSSParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceOSSParameters & sourceOSSParameters() const { DARABONBA_PTR_GET_CONST(sourceOSSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceOSSParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceOSSParameters sourceOSSParameters() { DARABONBA_PTR_GET(sourceOSSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceOSSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceOSSParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceOSSParameters & sourceOSSParameters) { DARABONBA_PTR_SET_VALUE(sourceOSSParameters_, sourceOSSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceOSSParameters(Models::GetEventStreamingResponseBodyDataSourceSourceOSSParameters && sourceOSSParameters) { DARABONBA_PTR_SET_RVALUE(sourceOSSParameters_, sourceOSSParameters) };


    // sourceOpenSourceRabbitMQParameters Field Functions 
    bool hasSourceOpenSourceRabbitMQParameters() const { return this->sourceOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSourceOpenSourceRabbitMQParameters() { this->sourceOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceOpenSourceRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters sourceOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceOpenSourceRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceOpenSourceRabbitMQParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceOpenSourceRabbitMQParameters(Models::GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters && sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };


    // sourcePrometheusParameters Field Functions 
    bool hasSourcePrometheusParameters() const { return this->sourcePrometheusParameters_ != nullptr;};
    void deleteSourcePrometheusParameters() { this->sourcePrometheusParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters & sourcePrometheusParameters() const { DARABONBA_PTR_GET_CONST(sourcePrometheusParameters_, Models::GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters sourcePrometheusParameters() { DARABONBA_PTR_GET(sourcePrometheusParameters_, Models::GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourcePrometheusParameters(const Models::GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters & sourcePrometheusParameters) { DARABONBA_PTR_SET_VALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourcePrometheusParameters(Models::GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters && sourcePrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceRabbitMQParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceRabbitMQParameters(Models::GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQCheckpointParameters Field Functions 
    bool hasSourceRocketMQCheckpointParameters() const { return this->sourceRocketMQCheckpointParameters_ != nullptr;};
    void deleteSourceRocketMQCheckpointParameters() { this->sourceRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters sourceRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceRocketMQCheckpointParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceRocketMQCheckpointParameters(Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters && sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceRocketMQParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceRocketMQParameters(Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSourceSourceSLSParameters & sourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceSLSParameters) };
    inline Models::GetEventStreamingResponseBodyDataSourceSourceSLSParameters sourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, Models::GetEventStreamingResponseBodyDataSourceSourceSLSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceSLSParameters(const Models::GetEventStreamingResponseBodyDataSourceSourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline GetEventStreamingResponseBodyDataSource& setSourceSLSParameters(Models::GetEventStreamingResponseBodyDataSourceSourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


  protected:
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceApacheKafkaParameters> sourceApacheKafkaParameters_ = nullptr;
    // The parameters that are returned if Apache RocketMQ (Offset Data) is specified as the event source.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceApacheRocketMQCheckpointParameters> sourceApacheRocketMQCheckpointParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaConnectorParameters> sourceCustomizedKafkaConnectorParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceCustomizedKafkaParameters> sourceCustomizedKafkaParameters_ = nullptr;
    // The parameters that are returned if the event source is Data Transmission Service (DTS).
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceDTSParameters> sourceDTSParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceEventBusParameters> sourceEventBusParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for Kafka is specified as the event source.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    // Source MNS Parameters
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceMNSParameters> sourceMNSParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for MQTT is specified as the event source.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceMQTTParameters> sourceMQTTParameters_ = nullptr;
    std::shared_ptr<Models::SourceMySQLParameters> sourceMySQLParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceOSSParameters> sourceOSSParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceOpenSourceRabbitMQParameters> sourceOpenSourceRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourcePrometheusParameters> sourcePrometheusParameters_ = nullptr;
    // Source RabbitMQ Parameters
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters> sourceRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for RocketMQ is specified as the event source.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
    // The parameters that are returned if the event provider is Simple Log Service.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSourceSourceSLSParameters> sourceSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
