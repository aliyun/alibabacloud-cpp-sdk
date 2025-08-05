// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSource& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSource& obj) { 
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
    ListEventStreamingsResponseBodyDataEventStreamingsSource() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSource(const ListEventStreamingsResponseBodyDataEventStreamingsSource &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSource(ListEventStreamingsResponseBodyDataEventStreamingsSource &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSource() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSource& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSource &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSource& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSource &&) = default ;
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
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters sourceApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceApacheRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceApacheRocketMQCheckpointParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceApacheRocketMQCheckpointParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters && sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };


    // sourceCustomizedKafkaConnectorParameters Field Functions 
    bool hasSourceCustomizedKafkaConnectorParameters() const { return this->sourceCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaConnectorParameters() { this->sourceCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaConnectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters sourceCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaConnectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceCustomizedKafkaConnectorParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceCustomizedKafkaConnectorParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters && sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };


    // sourceCustomizedKafkaParameters Field Functions 
    bool hasSourceCustomizedKafkaParameters() const { return this->sourceCustomizedKafkaParameters_ != nullptr;};
    void deleteSourceCustomizedKafkaParameters() { this->sourceCustomizedKafkaParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters sourceCustomizedKafkaParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceCustomizedKafkaParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceCustomizedKafkaParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters && sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };


    // sourceDTSParameters Field Functions 
    bool hasSourceDTSParameters() const { return this->sourceDTSParameters_ != nullptr;};
    void deleteSourceDTSParameters() { this->sourceDTSParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters & sourceDTSParameters() const { DARABONBA_PTR_GET_CONST(sourceDTSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters sourceDTSParameters() { DARABONBA_PTR_GET(sourceDTSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceDTSParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters & sourceDTSParameters) { DARABONBA_PTR_SET_VALUE(sourceDTSParameters_, sourceDTSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceDTSParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters && sourceDTSParameters) { DARABONBA_PTR_SET_RVALUE(sourceDTSParameters_, sourceDTSParameters) };


    // sourceEventBusParameters Field Functions 
    bool hasSourceEventBusParameters() const { return this->sourceEventBusParameters_ != nullptr;};
    void deleteSourceEventBusParameters() { this->sourceEventBusParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters & sourceEventBusParameters() const { DARABONBA_PTR_GET_CONST(sourceEventBusParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters sourceEventBusParameters() { DARABONBA_PTR_GET(sourceEventBusParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceEventBusParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters & sourceEventBusParameters) { DARABONBA_PTR_SET_VALUE(sourceEventBusParameters_, sourceEventBusParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceEventBusParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters && sourceEventBusParameters) { DARABONBA_PTR_SET_RVALUE(sourceEventBusParameters_, sourceEventBusParameters) };


    // sourceKafkaParameters Field Functions 
    bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
    void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters & sourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters sourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceKafkaParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceKafkaParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


    // sourceMNSParameters Field Functions 
    bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
    void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters & sourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters sourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceMNSParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceMNSParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


    // sourceMQTTParameters Field Functions 
    bool hasSourceMQTTParameters() const { return this->sourceMQTTParameters_ != nullptr;};
    void deleteSourceMQTTParameters() { this->sourceMQTTParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters & sourceMQTTParameters() const { DARABONBA_PTR_GET_CONST(sourceMQTTParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters sourceMQTTParameters() { DARABONBA_PTR_GET(sourceMQTTParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceMQTTParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters & sourceMQTTParameters) { DARABONBA_PTR_SET_VALUE(sourceMQTTParameters_, sourceMQTTParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceMQTTParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters && sourceMQTTParameters) { DARABONBA_PTR_SET_RVALUE(sourceMQTTParameters_, sourceMQTTParameters) };


    // sourceMySQLParameters Field Functions 
    bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
    void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
    inline const Models::SourceMySQLParameters & sourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline Models::SourceMySQLParameters sourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, Models::SourceMySQLParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceMySQLParameters(const Models::SourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceMySQLParameters(Models::SourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


    // sourceOSSParameters Field Functions 
    bool hasSourceOSSParameters() const { return this->sourceOSSParameters_ != nullptr;};
    void deleteSourceOSSParameters() { this->sourceOSSParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters & sourceOSSParameters() const { DARABONBA_PTR_GET_CONST(sourceOSSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters sourceOSSParameters() { DARABONBA_PTR_GET(sourceOSSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceOSSParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters & sourceOSSParameters) { DARABONBA_PTR_SET_VALUE(sourceOSSParameters_, sourceOSSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceOSSParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters && sourceOSSParameters) { DARABONBA_PTR_SET_RVALUE(sourceOSSParameters_, sourceOSSParameters) };


    // sourceOpenSourceRabbitMQParameters Field Functions 
    bool hasSourceOpenSourceRabbitMQParameters() const { return this->sourceOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSourceOpenSourceRabbitMQParameters() { this->sourceOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceOpenSourceRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters sourceOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceOpenSourceRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceOpenSourceRabbitMQParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceOpenSourceRabbitMQParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters && sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };


    // sourcePrometheusParameters Field Functions 
    bool hasSourcePrometheusParameters() const { return this->sourcePrometheusParameters_ != nullptr;};
    void deleteSourcePrometheusParameters() { this->sourcePrometheusParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters & sourcePrometheusParameters() const { DARABONBA_PTR_GET_CONST(sourcePrometheusParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters sourcePrometheusParameters() { DARABONBA_PTR_GET(sourcePrometheusParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourcePrometheusParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters & sourcePrometheusParameters) { DARABONBA_PTR_SET_VALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourcePrometheusParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters && sourcePrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };


    // sourceRabbitMQParameters Field Functions 
    bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
    void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters & sourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters sourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceRabbitMQParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceRabbitMQParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


    // sourceRocketMQCheckpointParameters Field Functions 
    bool hasSourceRocketMQCheckpointParameters() const { return this->sourceRocketMQCheckpointParameters_ != nullptr;};
    void deleteSourceRocketMQCheckpointParameters() { this->sourceRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters sourceRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceRocketMQCheckpointParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceRocketMQCheckpointParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters && sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };


    // sourceRocketMQParameters Field Functions 
    bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
    void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters & sourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters sourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceRocketMQParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceRocketMQParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


    // sourceSLSParameters Field Functions 
    bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
    void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters & sourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters sourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceSLSParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSource& setSourceSLSParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


  protected:
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceApacheRocketMQCheckpointParameters> sourceApacheRocketMQCheckpointParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaConnectorParameters> sourceCustomizedKafkaConnectorParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceCustomizedKafkaParameters> sourceCustomizedKafkaParameters_ = nullptr;
    // The parameters that are returned if Data Transmission Service (DTS) is specified as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceDTSParameters> sourceDTSParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceEventBusParameters> sourceEventBusParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for Kafka is specified as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceKafkaParameters> sourceKafkaParameters_ = nullptr;
    // The parameters that are returned if Message Queue (MNS) is specified as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMNSParameters> sourceMNSParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for MQTT is specified as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceMQTTParameters> sourceMQTTParameters_ = nullptr;
    std::shared_ptr<Models::SourceMySQLParameters> sourceMySQLParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOSSParameters> sourceOSSParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceOpenSourceRabbitMQParameters> sourceOpenSourceRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourcePrometheusParameters> sourcePrometheusParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for RabbitMQ is specified as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRabbitMQParameters> sourceRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQCheckpointParameters> sourceRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for RocketMQ is specified as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters> sourceRocketMQParameters_ = nullptr;
    // The parameters that are returned if Simple Log Service is specified as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceSLSParameters> sourceSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
