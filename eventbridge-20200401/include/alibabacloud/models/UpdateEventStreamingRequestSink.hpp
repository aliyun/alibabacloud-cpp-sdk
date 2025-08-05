// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINK_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDashVectorParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDataHubParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFcParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFnfParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkKafkaParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkMNSParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRabbitMQParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSink : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSink& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSink& obj) { 
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
    UpdateEventStreamingRequestSink() = default ;
    UpdateEventStreamingRequestSink(const UpdateEventStreamingRequestSink &) = default ;
    UpdateEventStreamingRequestSink(UpdateEventStreamingRequestSink &&) = default ;
    UpdateEventStreamingRequestSink(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSink() = default ;
    UpdateEventStreamingRequestSink& operator=(const UpdateEventStreamingRequestSink &) = default ;
    UpdateEventStreamingRequestSink& operator=(UpdateEventStreamingRequestSink &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sinkApacheRocketMQCheckpointParameters_ != nullptr
        && this->sinkBaiLianParameters_ != nullptr && this->sinkCustomizedKafkaConnectorParameters_ != nullptr && this->sinkCustomizedKafkaParameters_ != nullptr && this->sinkDashVectorParameters_ != nullptr && this->sinkDataHubParameters_ != nullptr
        && this->sinkDorisParameters_ != nullptr && this->sinkFcParameters_ != nullptr && this->sinkFnfParameters_ != nullptr && this->sinkKafkaParameters_ != nullptr && this->sinkMNSParameters_ != nullptr
        && this->sinkOpenSourceRabbitMQParameters_ != nullptr && this->sinkPrometheusParameters_ != nullptr && this->sinkRabbitMQParameters_ != nullptr && this->sinkRocketMQCheckpointParameters_ != nullptr && this->sinkRocketMQParameters_ != nullptr
        && this->sinkSLSParameters_ != nullptr; };
    // sinkApacheRocketMQCheckpointParameters Field Functions 
    bool hasSinkApacheRocketMQCheckpointParameters() const { return this->sinkApacheRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkApacheRocketMQCheckpointParameters() { this->sinkApacheRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters sinkApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkApacheRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSink& setSinkApacheRocketMQCheckpointParameters(const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSink& setSinkApacheRocketMQCheckpointParameters(Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters && sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };


    // sinkBaiLianParameters Field Functions 
    bool hasSinkBaiLianParameters() const { return this->sinkBaiLianParameters_ != nullptr;};
    void deleteSinkBaiLianParameters() { this->sinkBaiLianParameters_ = nullptr;};
    inline const Models::SinkBaiLianParameters & sinkBaiLianParameters() const { DARABONBA_PTR_GET_CONST(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline Models::SinkBaiLianParameters sinkBaiLianParameters() { DARABONBA_PTR_GET(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline UpdateEventStreamingRequestSink& setSinkBaiLianParameters(const Models::SinkBaiLianParameters & sinkBaiLianParameters) { DARABONBA_PTR_SET_VALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };
    inline UpdateEventStreamingRequestSink& setSinkBaiLianParameters(Models::SinkBaiLianParameters && sinkBaiLianParameters) { DARABONBA_PTR_SET_RVALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };


    // sinkCustomizedKafkaConnectorParameters Field Functions 
    bool hasSinkCustomizedKafkaConnectorParameters() const { return this->sinkCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaConnectorParameters() { this->sinkCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaConnectorParameters_, Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters sinkCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaConnectorParameters_, Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters) };
    inline UpdateEventStreamingRequestSink& setSinkCustomizedKafkaConnectorParameters(const Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };
    inline UpdateEventStreamingRequestSink& setSinkCustomizedKafkaConnectorParameters(Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters && sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };


    // sinkCustomizedKafkaParameters Field Functions 
    bool hasSinkCustomizedKafkaParameters() const { return this->sinkCustomizedKafkaParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaParameters() { this->sinkCustomizedKafkaParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaParameters_, Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters sinkCustomizedKafkaParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaParameters_, Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters) };
    inline UpdateEventStreamingRequestSink& setSinkCustomizedKafkaParameters(const Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };
    inline UpdateEventStreamingRequestSink& setSinkCustomizedKafkaParameters(Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters && sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };


    // sinkDashVectorParameters Field Functions 
    bool hasSinkDashVectorParameters() const { return this->sinkDashVectorParameters_ != nullptr;};
    void deleteSinkDashVectorParameters() { this->sinkDashVectorParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDashVectorParameters & sinkDashVectorParameters() const { DARABONBA_PTR_GET_CONST(sinkDashVectorParameters_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkDashVectorParameters sinkDashVectorParameters() { DARABONBA_PTR_GET(sinkDashVectorParameters_, Models::UpdateEventStreamingRequestSinkSinkDashVectorParameters) };
    inline UpdateEventStreamingRequestSink& setSinkDashVectorParameters(const Models::UpdateEventStreamingRequestSinkSinkDashVectorParameters & sinkDashVectorParameters) { DARABONBA_PTR_SET_VALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };
    inline UpdateEventStreamingRequestSink& setSinkDashVectorParameters(Models::UpdateEventStreamingRequestSinkSinkDashVectorParameters && sinkDashVectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };


    // sinkDataHubParameters Field Functions 
    bool hasSinkDataHubParameters() const { return this->sinkDataHubParameters_ != nullptr;};
    void deleteSinkDataHubParameters() { this->sinkDataHubParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDataHubParameters & sinkDataHubParameters() const { DARABONBA_PTR_GET_CONST(sinkDataHubParameters_, Models::UpdateEventStreamingRequestSinkSinkDataHubParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkDataHubParameters sinkDataHubParameters() { DARABONBA_PTR_GET(sinkDataHubParameters_, Models::UpdateEventStreamingRequestSinkSinkDataHubParameters) };
    inline UpdateEventStreamingRequestSink& setSinkDataHubParameters(const Models::UpdateEventStreamingRequestSinkSinkDataHubParameters & sinkDataHubParameters) { DARABONBA_PTR_SET_VALUE(sinkDataHubParameters_, sinkDataHubParameters) };
    inline UpdateEventStreamingRequestSink& setSinkDataHubParameters(Models::UpdateEventStreamingRequestSinkSinkDataHubParameters && sinkDataHubParameters) { DARABONBA_PTR_SET_RVALUE(sinkDataHubParameters_, sinkDataHubParameters) };


    // sinkDorisParameters Field Functions 
    bool hasSinkDorisParameters() const { return this->sinkDorisParameters_ != nullptr;};
    void deleteSinkDorisParameters() { this->sinkDorisParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParameters & sinkDorisParameters() const { DARABONBA_PTR_GET_CONST(sinkDorisParameters_, Models::UpdateEventStreamingRequestSinkSinkDorisParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParameters sinkDorisParameters() { DARABONBA_PTR_GET(sinkDorisParameters_, Models::UpdateEventStreamingRequestSinkSinkDorisParameters) };
    inline UpdateEventStreamingRequestSink& setSinkDorisParameters(const Models::UpdateEventStreamingRequestSinkSinkDorisParameters & sinkDorisParameters) { DARABONBA_PTR_SET_VALUE(sinkDorisParameters_, sinkDorisParameters) };
    inline UpdateEventStreamingRequestSink& setSinkDorisParameters(Models::UpdateEventStreamingRequestSinkSinkDorisParameters && sinkDorisParameters) { DARABONBA_PTR_SET_RVALUE(sinkDorisParameters_, sinkDorisParameters) };


    // sinkFcParameters Field Functions 
    bool hasSinkFcParameters() const { return this->sinkFcParameters_ != nullptr;};
    void deleteSinkFcParameters() { this->sinkFcParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFcParameters & sinkFcParameters() const { DARABONBA_PTR_GET_CONST(sinkFcParameters_, Models::UpdateEventStreamingRequestSinkSinkFcParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkFcParameters sinkFcParameters() { DARABONBA_PTR_GET(sinkFcParameters_, Models::UpdateEventStreamingRequestSinkSinkFcParameters) };
    inline UpdateEventStreamingRequestSink& setSinkFcParameters(const Models::UpdateEventStreamingRequestSinkSinkFcParameters & sinkFcParameters) { DARABONBA_PTR_SET_VALUE(sinkFcParameters_, sinkFcParameters) };
    inline UpdateEventStreamingRequestSink& setSinkFcParameters(Models::UpdateEventStreamingRequestSinkSinkFcParameters && sinkFcParameters) { DARABONBA_PTR_SET_RVALUE(sinkFcParameters_, sinkFcParameters) };


    // sinkFnfParameters Field Functions 
    bool hasSinkFnfParameters() const { return this->sinkFnfParameters_ != nullptr;};
    void deleteSinkFnfParameters() { this->sinkFnfParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFnfParameters & sinkFnfParameters() const { DARABONBA_PTR_GET_CONST(sinkFnfParameters_, Models::UpdateEventStreamingRequestSinkSinkFnfParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkFnfParameters sinkFnfParameters() { DARABONBA_PTR_GET(sinkFnfParameters_, Models::UpdateEventStreamingRequestSinkSinkFnfParameters) };
    inline UpdateEventStreamingRequestSink& setSinkFnfParameters(const Models::UpdateEventStreamingRequestSinkSinkFnfParameters & sinkFnfParameters) { DARABONBA_PTR_SET_VALUE(sinkFnfParameters_, sinkFnfParameters) };
    inline UpdateEventStreamingRequestSink& setSinkFnfParameters(Models::UpdateEventStreamingRequestSinkSinkFnfParameters && sinkFnfParameters) { DARABONBA_PTR_SET_RVALUE(sinkFnfParameters_, sinkFnfParameters) };


    // sinkKafkaParameters Field Functions 
    bool hasSinkKafkaParameters() const { return this->sinkKafkaParameters_ != nullptr;};
    void deleteSinkKafkaParameters() { this->sinkKafkaParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkKafkaParameters & sinkKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkKafkaParameters_, Models::UpdateEventStreamingRequestSinkSinkKafkaParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkKafkaParameters sinkKafkaParameters() { DARABONBA_PTR_GET(sinkKafkaParameters_, Models::UpdateEventStreamingRequestSinkSinkKafkaParameters) };
    inline UpdateEventStreamingRequestSink& setSinkKafkaParameters(const Models::UpdateEventStreamingRequestSinkSinkKafkaParameters & sinkKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkKafkaParameters_, sinkKafkaParameters) };
    inline UpdateEventStreamingRequestSink& setSinkKafkaParameters(Models::UpdateEventStreamingRequestSinkSinkKafkaParameters && sinkKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkKafkaParameters_, sinkKafkaParameters) };


    // sinkMNSParameters Field Functions 
    bool hasSinkMNSParameters() const { return this->sinkMNSParameters_ != nullptr;};
    void deleteSinkMNSParameters() { this->sinkMNSParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkMNSParameters & sinkMNSParameters() const { DARABONBA_PTR_GET_CONST(sinkMNSParameters_, Models::UpdateEventStreamingRequestSinkSinkMNSParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkMNSParameters sinkMNSParameters() { DARABONBA_PTR_GET(sinkMNSParameters_, Models::UpdateEventStreamingRequestSinkSinkMNSParameters) };
    inline UpdateEventStreamingRequestSink& setSinkMNSParameters(const Models::UpdateEventStreamingRequestSinkSinkMNSParameters & sinkMNSParameters) { DARABONBA_PTR_SET_VALUE(sinkMNSParameters_, sinkMNSParameters) };
    inline UpdateEventStreamingRequestSink& setSinkMNSParameters(Models::UpdateEventStreamingRequestSinkSinkMNSParameters && sinkMNSParameters) { DARABONBA_PTR_SET_RVALUE(sinkMNSParameters_, sinkMNSParameters) };


    // sinkOpenSourceRabbitMQParameters Field Functions 
    bool hasSinkOpenSourceRabbitMQParameters() const { return this->sinkOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSinkOpenSourceRabbitMQParameters() { this->sinkOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkOpenSourceRabbitMQParameters_, Models::UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters sinkOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sinkOpenSourceRabbitMQParameters_, Models::UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters) };
    inline UpdateEventStreamingRequestSink& setSinkOpenSourceRabbitMQParameters(const Models::UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };
    inline UpdateEventStreamingRequestSink& setSinkOpenSourceRabbitMQParameters(Models::UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters && sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };


    // sinkPrometheusParameters Field Functions 
    bool hasSinkPrometheusParameters() const { return this->sinkPrometheusParameters_ != nullptr;};
    void deleteSinkPrometheusParameters() { this->sinkPrometheusParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParameters & sinkPrometheusParameters() const { DARABONBA_PTR_GET_CONST(sinkPrometheusParameters_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParameters sinkPrometheusParameters() { DARABONBA_PTR_GET(sinkPrometheusParameters_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParameters) };
    inline UpdateEventStreamingRequestSink& setSinkPrometheusParameters(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParameters & sinkPrometheusParameters) { DARABONBA_PTR_SET_VALUE(sinkPrometheusParameters_, sinkPrometheusParameters) };
    inline UpdateEventStreamingRequestSink& setSinkPrometheusParameters(Models::UpdateEventStreamingRequestSinkSinkPrometheusParameters && sinkPrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sinkPrometheusParameters_, sinkPrometheusParameters) };


    // sinkRabbitMQParameters Field Functions 
    bool hasSinkRabbitMQParameters() const { return this->sinkRabbitMQParameters_ != nullptr;};
    void deleteSinkRabbitMQParameters() { this->sinkRabbitMQParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParameters & sinkRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRabbitMQParameters_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkRabbitMQParameters sinkRabbitMQParameters() { DARABONBA_PTR_GET(sinkRabbitMQParameters_, Models::UpdateEventStreamingRequestSinkSinkRabbitMQParameters) };
    inline UpdateEventStreamingRequestSink& setSinkRabbitMQParameters(const Models::UpdateEventStreamingRequestSinkSinkRabbitMQParameters & sinkRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };
    inline UpdateEventStreamingRequestSink& setSinkRabbitMQParameters(Models::UpdateEventStreamingRequestSinkSinkRabbitMQParameters && sinkRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };


    // sinkRocketMQCheckpointParameters Field Functions 
    bool hasSinkRocketMQCheckpointParameters() const { return this->sinkRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkRocketMQCheckpointParameters() { this->sinkRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters sinkRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkRocketMQCheckpointParameters_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSink& setSinkRocketMQCheckpointParameters(const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };
    inline UpdateEventStreamingRequestSink& setSinkRocketMQCheckpointParameters(Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters && sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };


    // sinkRocketMQParameters Field Functions 
    bool hasSinkRocketMQParameters() const { return this->sinkRocketMQParameters_ != nullptr;};
    void deleteSinkRocketMQParameters() { this->sinkRocketMQParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParameters & sinkRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQParameters_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParameters sinkRocketMQParameters() { DARABONBA_PTR_GET(sinkRocketMQParameters_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParameters) };
    inline UpdateEventStreamingRequestSink& setSinkRocketMQParameters(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParameters & sinkRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };
    inline UpdateEventStreamingRequestSink& setSinkRocketMQParameters(Models::UpdateEventStreamingRequestSinkSinkRocketMQParameters && sinkRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };


    // sinkSLSParameters Field Functions 
    bool hasSinkSLSParameters() const { return this->sinkSLSParameters_ != nullptr;};
    void deleteSinkSLSParameters() { this->sinkSLSParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkSLSParameters & sinkSLSParameters() const { DARABONBA_PTR_GET_CONST(sinkSLSParameters_, Models::UpdateEventStreamingRequestSinkSinkSLSParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkSLSParameters sinkSLSParameters() { DARABONBA_PTR_GET(sinkSLSParameters_, Models::UpdateEventStreamingRequestSinkSinkSLSParameters) };
    inline UpdateEventStreamingRequestSink& setSinkSLSParameters(const Models::UpdateEventStreamingRequestSinkSinkSLSParameters & sinkSLSParameters) { DARABONBA_PTR_SET_VALUE(sinkSLSParameters_, sinkSLSParameters) };
    inline UpdateEventStreamingRequestSink& setSinkSLSParameters(Models::UpdateEventStreamingRequestSinkSinkSLSParameters && sinkSLSParameters) { DARABONBA_PTR_SET_RVALUE(sinkSLSParameters_, sinkSLSParameters) };


  protected:
    // The parameters that are configured if you specify Apache RocketMQ (Offset Data) as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters> sinkApacheRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are configured if you specify BaiLian as the event target.
    std::shared_ptr<Models::SinkBaiLianParameters> sinkBaiLianParameters_ = nullptr;
    // The parameters that are configured if you specify Kafka Sink Connect as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaConnectorParameters> sinkCustomizedKafkaConnectorParameters_ = nullptr;
    // The parameters that are configured if you specify Kafka Source Connect as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkCustomizedKafkaParameters> sinkCustomizedKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify DashVector as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDashVectorParameters> sinkDashVectorParameters_ = nullptr;
    // The parameters that are configured if you specify DataHub as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDataHubParameters> sinkDataHubParameters_ = nullptr;
    // The type of the event source.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParameters> sinkDorisParameters_ = nullptr;
    // The parameters that are configured if you specify Function Compute as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFcParameters> sinkFcParameters_ = nullptr;
    // The parameters that are configured if you specify CloudFlow as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFnfParameters> sinkFnfParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for Kafka as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkKafkaParameters> sinkKafkaParameters_ = nullptr;
    // The parameters that are configured if you specify Simple Message Queue (SMQ, formerly MNS) as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkMNSParameters> sinkMNSParameters_ = nullptr;
    // The parameters that are configured if you specify open source RabbitMQ as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkOpenSourceRabbitMQParameters> sinkOpenSourceRabbitMQParameters_ = nullptr;
    // The parameters that are configured if you specify Managed Service for Prometheus as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParameters> sinkPrometheusParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RabbitMQ as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRabbitMQParameters> sinkRabbitMQParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RocketMQ (Offset Data) as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters> sinkRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are configured if you specify ApsaraMQ for RocketMQ as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParameters> sinkRocketMQParameters_ = nullptr;
    // The parameters that are configured if you specify Simple Log Service as the event target.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkSLSParameters> sinkSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
