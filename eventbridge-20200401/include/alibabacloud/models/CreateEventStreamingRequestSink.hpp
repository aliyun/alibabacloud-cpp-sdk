// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINK_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkApacheKafkaParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/SinkBaiLianParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDashVectorParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDataHubParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFcParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFnfParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkKafkaParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkMNSParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRabbitMQParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSink : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSink& obj) { 
      DARABONBA_PTR_TO_JSON(SinkApacheKafkaParameters, sinkApacheKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SinkApacheRocketMQCheckpointParameters, sinkApacheRocketMQCheckpointParameters_);
      DARABONBA_PTR_TO_JSON(SinkBaiLianParameters, sinkBaiLianParameters_);
      DARABONBA_PTR_TO_JSON(SinkCustomizedKafkaConnectorParameters, sinkCustomizedKafkaConnectorParameters_);
      DARABONBA_PTR_TO_JSON(SinkCustomizedKafkaParameters, sinkCustomizedKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SinkDashVectorParameters, sinkDashVectorParameters_);
      DARABONBA_PTR_TO_JSON(SinkDataHubParameters, sinkDataHubParameters_);
      DARABONBA_PTR_TO_JSON(SinkDorisParameters, sinkDorisParameters_);
      DARABONBA_PTR_TO_JSON(SinkFcParameters, sinkFcParameters_);
      DARABONBA_PTR_TO_JSON(SinkFnfParameters, sinkFnfParameters_);
      DARABONBA_PTR_TO_JSON(SinkKafkaParameters, sinkKafkaParameters_);
      DARABONBA_PTR_TO_JSON(SinkMNSParameters, sinkMNSParameters_);
      DARABONBA_PTR_TO_JSON(SinkOpenSourceRabbitMQParameters, sinkOpenSourceRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SinkPrometheusParameters, sinkPrometheusParameters_);
      DARABONBA_PTR_TO_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
      DARABONBA_PTR_TO_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
      DARABONBA_PTR_TO_JSON(SinkSLSParameters, sinkSLSParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSink& obj) { 
      DARABONBA_PTR_FROM_JSON(SinkApacheKafkaParameters, sinkApacheKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SinkApacheRocketMQCheckpointParameters, sinkApacheRocketMQCheckpointParameters_);
      DARABONBA_PTR_FROM_JSON(SinkBaiLianParameters, sinkBaiLianParameters_);
      DARABONBA_PTR_FROM_JSON(SinkCustomizedKafkaConnectorParameters, sinkCustomizedKafkaConnectorParameters_);
      DARABONBA_PTR_FROM_JSON(SinkCustomizedKafkaParameters, sinkCustomizedKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SinkDashVectorParameters, sinkDashVectorParameters_);
      DARABONBA_PTR_FROM_JSON(SinkDataHubParameters, sinkDataHubParameters_);
      DARABONBA_PTR_FROM_JSON(SinkDorisParameters, sinkDorisParameters_);
      DARABONBA_PTR_FROM_JSON(SinkFcParameters, sinkFcParameters_);
      DARABONBA_PTR_FROM_JSON(SinkFnfParameters, sinkFnfParameters_);
      DARABONBA_PTR_FROM_JSON(SinkKafkaParameters, sinkKafkaParameters_);
      DARABONBA_PTR_FROM_JSON(SinkMNSParameters, sinkMNSParameters_);
      DARABONBA_PTR_FROM_JSON(SinkOpenSourceRabbitMQParameters, sinkOpenSourceRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SinkPrometheusParameters, sinkPrometheusParameters_);
      DARABONBA_PTR_FROM_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
      DARABONBA_PTR_FROM_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
      DARABONBA_PTR_FROM_JSON(SinkSLSParameters, sinkSLSParameters_);
    };
    CreateEventStreamingRequestSink() = default ;
    CreateEventStreamingRequestSink(const CreateEventStreamingRequestSink &) = default ;
    CreateEventStreamingRequestSink(CreateEventStreamingRequestSink &&) = default ;
    CreateEventStreamingRequestSink(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSink() = default ;
    CreateEventStreamingRequestSink& operator=(const CreateEventStreamingRequestSink &) = default ;
    CreateEventStreamingRequestSink& operator=(CreateEventStreamingRequestSink &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sinkApacheKafkaParameters_ != nullptr
        && this->sinkApacheRocketMQCheckpointParameters_ != nullptr && this->sinkBaiLianParameters_ != nullptr && this->sinkCustomizedKafkaConnectorParameters_ != nullptr && this->sinkCustomizedKafkaParameters_ != nullptr && this->sinkDashVectorParameters_ != nullptr
        && this->sinkDataHubParameters_ != nullptr && this->sinkDorisParameters_ != nullptr && this->sinkFcParameters_ != nullptr && this->sinkFnfParameters_ != nullptr && this->sinkKafkaParameters_ != nullptr
        && this->sinkMNSParameters_ != nullptr && this->sinkOpenSourceRabbitMQParameters_ != nullptr && this->sinkPrometheusParameters_ != nullptr && this->sinkRabbitMQParameters_ != nullptr && this->sinkRocketMQCheckpointParameters_ != nullptr
        && this->sinkRocketMQParameters_ != nullptr && this->sinkSLSParameters_ != nullptr; };
    // sinkApacheKafkaParameters Field Functions 
    bool hasSinkApacheKafkaParameters() const { return this->sinkApacheKafkaParameters_ != nullptr;};
    void deleteSinkApacheKafkaParameters() { this->sinkApacheKafkaParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkApacheKafkaParameters & sinkApacheKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheKafkaParameters_, Models::CreateEventStreamingRequestSinkSinkApacheKafkaParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkApacheKafkaParameters sinkApacheKafkaParameters() { DARABONBA_PTR_GET(sinkApacheKafkaParameters_, Models::CreateEventStreamingRequestSinkSinkApacheKafkaParameters) };
    inline CreateEventStreamingRequestSink& setSinkApacheKafkaParameters(const Models::CreateEventStreamingRequestSinkSinkApacheKafkaParameters & sinkApacheKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheKafkaParameters_, sinkApacheKafkaParameters) };
    inline CreateEventStreamingRequestSink& setSinkApacheKafkaParameters(Models::CreateEventStreamingRequestSinkSinkApacheKafkaParameters && sinkApacheKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheKafkaParameters_, sinkApacheKafkaParameters) };


    // sinkApacheRocketMQCheckpointParameters Field Functions 
    bool hasSinkApacheRocketMQCheckpointParameters() const { return this->sinkApacheRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkApacheRocketMQCheckpointParameters() { this->sinkApacheRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters sinkApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkApacheRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSink& setSinkApacheRocketMQCheckpointParameters(const Models::CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSink& setSinkApacheRocketMQCheckpointParameters(Models::CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters && sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };


    // sinkBaiLianParameters Field Functions 
    bool hasSinkBaiLianParameters() const { return this->sinkBaiLianParameters_ != nullptr;};
    void deleteSinkBaiLianParameters() { this->sinkBaiLianParameters_ = nullptr;};
    inline const Models::SinkBaiLianParameters & sinkBaiLianParameters() const { DARABONBA_PTR_GET_CONST(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline Models::SinkBaiLianParameters sinkBaiLianParameters() { DARABONBA_PTR_GET(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline CreateEventStreamingRequestSink& setSinkBaiLianParameters(const Models::SinkBaiLianParameters & sinkBaiLianParameters) { DARABONBA_PTR_SET_VALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };
    inline CreateEventStreamingRequestSink& setSinkBaiLianParameters(Models::SinkBaiLianParameters && sinkBaiLianParameters) { DARABONBA_PTR_SET_RVALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };


    // sinkCustomizedKafkaConnectorParameters Field Functions 
    bool hasSinkCustomizedKafkaConnectorParameters() const { return this->sinkCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaConnectorParameters() { this->sinkCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaConnectorParameters_, Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters sinkCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaConnectorParameters_, Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters) };
    inline CreateEventStreamingRequestSink& setSinkCustomizedKafkaConnectorParameters(const Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };
    inline CreateEventStreamingRequestSink& setSinkCustomizedKafkaConnectorParameters(Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters && sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };


    // sinkCustomizedKafkaParameters Field Functions 
    bool hasSinkCustomizedKafkaParameters() const { return this->sinkCustomizedKafkaParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaParameters() { this->sinkCustomizedKafkaParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaParameters_, Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters sinkCustomizedKafkaParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaParameters_, Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters) };
    inline CreateEventStreamingRequestSink& setSinkCustomizedKafkaParameters(const Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };
    inline CreateEventStreamingRequestSink& setSinkCustomizedKafkaParameters(Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters && sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };


    // sinkDashVectorParameters Field Functions 
    bool hasSinkDashVectorParameters() const { return this->sinkDashVectorParameters_ != nullptr;};
    void deleteSinkDashVectorParameters() { this->sinkDashVectorParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDashVectorParameters & sinkDashVectorParameters() const { DARABONBA_PTR_GET_CONST(sinkDashVectorParameters_, Models::CreateEventStreamingRequestSinkSinkDashVectorParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkDashVectorParameters sinkDashVectorParameters() { DARABONBA_PTR_GET(sinkDashVectorParameters_, Models::CreateEventStreamingRequestSinkSinkDashVectorParameters) };
    inline CreateEventStreamingRequestSink& setSinkDashVectorParameters(const Models::CreateEventStreamingRequestSinkSinkDashVectorParameters & sinkDashVectorParameters) { DARABONBA_PTR_SET_VALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };
    inline CreateEventStreamingRequestSink& setSinkDashVectorParameters(Models::CreateEventStreamingRequestSinkSinkDashVectorParameters && sinkDashVectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };


    // sinkDataHubParameters Field Functions 
    bool hasSinkDataHubParameters() const { return this->sinkDataHubParameters_ != nullptr;};
    void deleteSinkDataHubParameters() { this->sinkDataHubParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDataHubParameters & sinkDataHubParameters() const { DARABONBA_PTR_GET_CONST(sinkDataHubParameters_, Models::CreateEventStreamingRequestSinkSinkDataHubParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkDataHubParameters sinkDataHubParameters() { DARABONBA_PTR_GET(sinkDataHubParameters_, Models::CreateEventStreamingRequestSinkSinkDataHubParameters) };
    inline CreateEventStreamingRequestSink& setSinkDataHubParameters(const Models::CreateEventStreamingRequestSinkSinkDataHubParameters & sinkDataHubParameters) { DARABONBA_PTR_SET_VALUE(sinkDataHubParameters_, sinkDataHubParameters) };
    inline CreateEventStreamingRequestSink& setSinkDataHubParameters(Models::CreateEventStreamingRequestSinkSinkDataHubParameters && sinkDataHubParameters) { DARABONBA_PTR_SET_RVALUE(sinkDataHubParameters_, sinkDataHubParameters) };


    // sinkDorisParameters Field Functions 
    bool hasSinkDorisParameters() const { return this->sinkDorisParameters_ != nullptr;};
    void deleteSinkDorisParameters() { this->sinkDorisParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParameters & sinkDorisParameters() const { DARABONBA_PTR_GET_CONST(sinkDorisParameters_, Models::CreateEventStreamingRequestSinkSinkDorisParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParameters sinkDorisParameters() { DARABONBA_PTR_GET(sinkDorisParameters_, Models::CreateEventStreamingRequestSinkSinkDorisParameters) };
    inline CreateEventStreamingRequestSink& setSinkDorisParameters(const Models::CreateEventStreamingRequestSinkSinkDorisParameters & sinkDorisParameters) { DARABONBA_PTR_SET_VALUE(sinkDorisParameters_, sinkDorisParameters) };
    inline CreateEventStreamingRequestSink& setSinkDorisParameters(Models::CreateEventStreamingRequestSinkSinkDorisParameters && sinkDorisParameters) { DARABONBA_PTR_SET_RVALUE(sinkDorisParameters_, sinkDorisParameters) };


    // sinkFcParameters Field Functions 
    bool hasSinkFcParameters() const { return this->sinkFcParameters_ != nullptr;};
    void deleteSinkFcParameters() { this->sinkFcParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFcParameters & sinkFcParameters() const { DARABONBA_PTR_GET_CONST(sinkFcParameters_, Models::CreateEventStreamingRequestSinkSinkFcParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkFcParameters sinkFcParameters() { DARABONBA_PTR_GET(sinkFcParameters_, Models::CreateEventStreamingRequestSinkSinkFcParameters) };
    inline CreateEventStreamingRequestSink& setSinkFcParameters(const Models::CreateEventStreamingRequestSinkSinkFcParameters & sinkFcParameters) { DARABONBA_PTR_SET_VALUE(sinkFcParameters_, sinkFcParameters) };
    inline CreateEventStreamingRequestSink& setSinkFcParameters(Models::CreateEventStreamingRequestSinkSinkFcParameters && sinkFcParameters) { DARABONBA_PTR_SET_RVALUE(sinkFcParameters_, sinkFcParameters) };


    // sinkFnfParameters Field Functions 
    bool hasSinkFnfParameters() const { return this->sinkFnfParameters_ != nullptr;};
    void deleteSinkFnfParameters() { this->sinkFnfParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFnfParameters & sinkFnfParameters() const { DARABONBA_PTR_GET_CONST(sinkFnfParameters_, Models::CreateEventStreamingRequestSinkSinkFnfParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkFnfParameters sinkFnfParameters() { DARABONBA_PTR_GET(sinkFnfParameters_, Models::CreateEventStreamingRequestSinkSinkFnfParameters) };
    inline CreateEventStreamingRequestSink& setSinkFnfParameters(const Models::CreateEventStreamingRequestSinkSinkFnfParameters & sinkFnfParameters) { DARABONBA_PTR_SET_VALUE(sinkFnfParameters_, sinkFnfParameters) };
    inline CreateEventStreamingRequestSink& setSinkFnfParameters(Models::CreateEventStreamingRequestSinkSinkFnfParameters && sinkFnfParameters) { DARABONBA_PTR_SET_RVALUE(sinkFnfParameters_, sinkFnfParameters) };


    // sinkKafkaParameters Field Functions 
    bool hasSinkKafkaParameters() const { return this->sinkKafkaParameters_ != nullptr;};
    void deleteSinkKafkaParameters() { this->sinkKafkaParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkKafkaParameters & sinkKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkKafkaParameters_, Models::CreateEventStreamingRequestSinkSinkKafkaParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkKafkaParameters sinkKafkaParameters() { DARABONBA_PTR_GET(sinkKafkaParameters_, Models::CreateEventStreamingRequestSinkSinkKafkaParameters) };
    inline CreateEventStreamingRequestSink& setSinkKafkaParameters(const Models::CreateEventStreamingRequestSinkSinkKafkaParameters & sinkKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkKafkaParameters_, sinkKafkaParameters) };
    inline CreateEventStreamingRequestSink& setSinkKafkaParameters(Models::CreateEventStreamingRequestSinkSinkKafkaParameters && sinkKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkKafkaParameters_, sinkKafkaParameters) };


    // sinkMNSParameters Field Functions 
    bool hasSinkMNSParameters() const { return this->sinkMNSParameters_ != nullptr;};
    void deleteSinkMNSParameters() { this->sinkMNSParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkMNSParameters & sinkMNSParameters() const { DARABONBA_PTR_GET_CONST(sinkMNSParameters_, Models::CreateEventStreamingRequestSinkSinkMNSParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkMNSParameters sinkMNSParameters() { DARABONBA_PTR_GET(sinkMNSParameters_, Models::CreateEventStreamingRequestSinkSinkMNSParameters) };
    inline CreateEventStreamingRequestSink& setSinkMNSParameters(const Models::CreateEventStreamingRequestSinkSinkMNSParameters & sinkMNSParameters) { DARABONBA_PTR_SET_VALUE(sinkMNSParameters_, sinkMNSParameters) };
    inline CreateEventStreamingRequestSink& setSinkMNSParameters(Models::CreateEventStreamingRequestSinkSinkMNSParameters && sinkMNSParameters) { DARABONBA_PTR_SET_RVALUE(sinkMNSParameters_, sinkMNSParameters) };


    // sinkOpenSourceRabbitMQParameters Field Functions 
    bool hasSinkOpenSourceRabbitMQParameters() const { return this->sinkOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSinkOpenSourceRabbitMQParameters() { this->sinkOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkOpenSourceRabbitMQParameters_, Models::CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters sinkOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sinkOpenSourceRabbitMQParameters_, Models::CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters) };
    inline CreateEventStreamingRequestSink& setSinkOpenSourceRabbitMQParameters(const Models::CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };
    inline CreateEventStreamingRequestSink& setSinkOpenSourceRabbitMQParameters(Models::CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters && sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };


    // sinkPrometheusParameters Field Functions 
    bool hasSinkPrometheusParameters() const { return this->sinkPrometheusParameters_ != nullptr;};
    void deleteSinkPrometheusParameters() { this->sinkPrometheusParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParameters & sinkPrometheusParameters() const { DARABONBA_PTR_GET_CONST(sinkPrometheusParameters_, Models::CreateEventStreamingRequestSinkSinkPrometheusParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParameters sinkPrometheusParameters() { DARABONBA_PTR_GET(sinkPrometheusParameters_, Models::CreateEventStreamingRequestSinkSinkPrometheusParameters) };
    inline CreateEventStreamingRequestSink& setSinkPrometheusParameters(const Models::CreateEventStreamingRequestSinkSinkPrometheusParameters & sinkPrometheusParameters) { DARABONBA_PTR_SET_VALUE(sinkPrometheusParameters_, sinkPrometheusParameters) };
    inline CreateEventStreamingRequestSink& setSinkPrometheusParameters(Models::CreateEventStreamingRequestSinkSinkPrometheusParameters && sinkPrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sinkPrometheusParameters_, sinkPrometheusParameters) };


    // sinkRabbitMQParameters Field Functions 
    bool hasSinkRabbitMQParameters() const { return this->sinkRabbitMQParameters_ != nullptr;};
    void deleteSinkRabbitMQParameters() { this->sinkRabbitMQParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRabbitMQParameters & sinkRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRabbitMQParameters_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkRabbitMQParameters sinkRabbitMQParameters() { DARABONBA_PTR_GET(sinkRabbitMQParameters_, Models::CreateEventStreamingRequestSinkSinkRabbitMQParameters) };
    inline CreateEventStreamingRequestSink& setSinkRabbitMQParameters(const Models::CreateEventStreamingRequestSinkSinkRabbitMQParameters & sinkRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };
    inline CreateEventStreamingRequestSink& setSinkRabbitMQParameters(Models::CreateEventStreamingRequestSinkSinkRabbitMQParameters && sinkRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };


    // sinkRocketMQCheckpointParameters Field Functions 
    bool hasSinkRocketMQCheckpointParameters() const { return this->sinkRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkRocketMQCheckpointParameters() { this->sinkRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters sinkRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkRocketMQCheckpointParameters_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSink& setSinkRocketMQCheckpointParameters(const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };
    inline CreateEventStreamingRequestSink& setSinkRocketMQCheckpointParameters(Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters && sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };


    // sinkRocketMQParameters Field Functions 
    bool hasSinkRocketMQParameters() const { return this->sinkRocketMQParameters_ != nullptr;};
    void deleteSinkRocketMQParameters() { this->sinkRocketMQParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParameters & sinkRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQParameters_, Models::CreateEventStreamingRequestSinkSinkRocketMQParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParameters sinkRocketMQParameters() { DARABONBA_PTR_GET(sinkRocketMQParameters_, Models::CreateEventStreamingRequestSinkSinkRocketMQParameters) };
    inline CreateEventStreamingRequestSink& setSinkRocketMQParameters(const Models::CreateEventStreamingRequestSinkSinkRocketMQParameters & sinkRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };
    inline CreateEventStreamingRequestSink& setSinkRocketMQParameters(Models::CreateEventStreamingRequestSinkSinkRocketMQParameters && sinkRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };


    // sinkSLSParameters Field Functions 
    bool hasSinkSLSParameters() const { return this->sinkSLSParameters_ != nullptr;};
    void deleteSinkSLSParameters() { this->sinkSLSParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkSLSParameters & sinkSLSParameters() const { DARABONBA_PTR_GET_CONST(sinkSLSParameters_, Models::CreateEventStreamingRequestSinkSinkSLSParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkSLSParameters sinkSLSParameters() { DARABONBA_PTR_GET(sinkSLSParameters_, Models::CreateEventStreamingRequestSinkSinkSLSParameters) };
    inline CreateEventStreamingRequestSink& setSinkSLSParameters(const Models::CreateEventStreamingRequestSinkSinkSLSParameters & sinkSLSParameters) { DARABONBA_PTR_SET_VALUE(sinkSLSParameters_, sinkSLSParameters) };
    inline CreateEventStreamingRequestSink& setSinkSLSParameters(Models::CreateEventStreamingRequestSinkSinkSLSParameters && sinkSLSParameters) { DARABONBA_PTR_SET_RVALUE(sinkSLSParameters_, sinkSLSParameters) };


  protected:
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkApacheKafkaParameters> sinkApacheKafkaParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters> sinkApacheRocketMQCheckpointParameters_ = nullptr;
    std::shared_ptr<Models::SinkBaiLianParameters> sinkBaiLianParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters> sinkCustomizedKafkaConnectorParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkCustomizedKafkaParameters> sinkCustomizedKafkaParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDashVectorParameters> sinkDashVectorParameters_ = nullptr;
    // The parameters that are configured if you specify DataHub as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDataHubParameters> sinkDataHubParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParameters> sinkDorisParameters_ = nullptr;
    // The parameters that are configured if you specify Function Compute as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFcParameters> sinkFcParameters_ = nullptr;
    // The parameters that are configured if you specify CloudFlow as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFnfParameters> sinkFnfParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for Kafka as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkKafkaParameters> sinkKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify MNS as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkMNSParameters> sinkMNSParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters> sinkOpenSourceRabbitMQParameters_ = nullptr;
    // The parameters that are configured if you specify Managed Service for Prometheus as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParameters> sinkPrometheusParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RabbitMQ as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRabbitMQParameters> sinkRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters> sinkRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RocketMQ as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParameters> sinkRocketMQParameters_ = nullptr;
    // The parameters that are configured if you specify Simple Log Service as the event target.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkSLSParameters> sinkSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
