// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINK_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDataHubParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFcParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFnfParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkKafkaParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkMNSParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSink : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSink& obj) { 
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
      DARABONBA_PTR_TO_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
      DARABONBA_PTR_TO_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
      DARABONBA_PTR_TO_JSON(SinkSLSParameters, sinkSLSParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSink& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
      DARABONBA_PTR_FROM_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
      DARABONBA_PTR_FROM_JSON(SinkSLSParameters, sinkSLSParameters_);
    };
    GetEventStreamingResponseBodyDataSink() = default ;
    GetEventStreamingResponseBodyDataSink(const GetEventStreamingResponseBodyDataSink &) = default ;
    GetEventStreamingResponseBodyDataSink(GetEventStreamingResponseBodyDataSink &&) = default ;
    GetEventStreamingResponseBodyDataSink(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSink() = default ;
    GetEventStreamingResponseBodyDataSink& operator=(const GetEventStreamingResponseBodyDataSink &) = default ;
    GetEventStreamingResponseBodyDataSink& operator=(GetEventStreamingResponseBodyDataSink &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sinkApacheRocketMQCheckpointParameters_ != nullptr
        && this->sinkBaiLianParameters_ != nullptr && this->sinkCustomizedKafkaConnectorParameters_ != nullptr && this->sinkCustomizedKafkaParameters_ != nullptr && this->sinkDashVectorParameters_ != nullptr && this->sinkDataHubParameters_ != nullptr
        && this->sinkDorisParameters_ != nullptr && this->sinkFcParameters_ != nullptr && this->sinkFnfParameters_ != nullptr && this->sinkKafkaParameters_ != nullptr && this->sinkMNSParameters_ != nullptr
        && this->sinkOpenSourceRabbitMQParameters_ != nullptr && this->sinkRabbitMQParameters_ != nullptr && this->sinkRocketMQCheckpointParameters_ != nullptr && this->sinkRocketMQParameters_ != nullptr && this->sinkSLSParameters_ != nullptr; };
    // sinkApacheRocketMQCheckpointParameters Field Functions 
    bool hasSinkApacheRocketMQCheckpointParameters() const { return this->sinkApacheRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkApacheRocketMQCheckpointParameters() { this->sinkApacheRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters sinkApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkApacheRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkApacheRocketMQCheckpointParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkApacheRocketMQCheckpointParameters(Models::GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters && sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };


    // sinkBaiLianParameters Field Functions 
    bool hasSinkBaiLianParameters() const { return this->sinkBaiLianParameters_ != nullptr;};
    void deleteSinkBaiLianParameters() { this->sinkBaiLianParameters_ = nullptr;};
    inline const Models::SinkBaiLianParameters & sinkBaiLianParameters() const { DARABONBA_PTR_GET_CONST(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline Models::SinkBaiLianParameters sinkBaiLianParameters() { DARABONBA_PTR_GET(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkBaiLianParameters(const Models::SinkBaiLianParameters & sinkBaiLianParameters) { DARABONBA_PTR_SET_VALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkBaiLianParameters(Models::SinkBaiLianParameters && sinkBaiLianParameters) { DARABONBA_PTR_SET_RVALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };


    // sinkCustomizedKafkaConnectorParameters Field Functions 
    bool hasSinkCustomizedKafkaConnectorParameters() const { return this->sinkCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaConnectorParameters() { this->sinkCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaConnectorParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters sinkCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaConnectorParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkCustomizedKafkaConnectorParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkCustomizedKafkaConnectorParameters(Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters && sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };


    // sinkCustomizedKafkaParameters Field Functions 
    bool hasSinkCustomizedKafkaParameters() const { return this->sinkCustomizedKafkaParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaParameters() { this->sinkCustomizedKafkaParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters sinkCustomizedKafkaParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkCustomizedKafkaParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkCustomizedKafkaParameters(Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters && sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };


    // sinkDashVectorParameters Field Functions 
    bool hasSinkDashVectorParameters() const { return this->sinkDashVectorParameters_ != nullptr;};
    void deleteSinkDashVectorParameters() { this->sinkDashVectorParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters & sinkDashVectorParameters() const { DARABONBA_PTR_GET_CONST(sinkDashVectorParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters sinkDashVectorParameters() { DARABONBA_PTR_GET(sinkDashVectorParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkDashVectorParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters & sinkDashVectorParameters) { DARABONBA_PTR_SET_VALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkDashVectorParameters(Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters && sinkDashVectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };


    // sinkDataHubParameters Field Functions 
    bool hasSinkDataHubParameters() const { return this->sinkDataHubParameters_ != nullptr;};
    void deleteSinkDataHubParameters() { this->sinkDataHubParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParameters & sinkDataHubParameters() const { DARABONBA_PTR_GET_CONST(sinkDataHubParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParameters sinkDataHubParameters() { DARABONBA_PTR_GET(sinkDataHubParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkDataHubParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParameters & sinkDataHubParameters) { DARABONBA_PTR_SET_VALUE(sinkDataHubParameters_, sinkDataHubParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkDataHubParameters(Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParameters && sinkDataHubParameters) { DARABONBA_PTR_SET_RVALUE(sinkDataHubParameters_, sinkDataHubParameters) };


    // sinkDorisParameters Field Functions 
    bool hasSinkDorisParameters() const { return this->sinkDorisParameters_ != nullptr;};
    void deleteSinkDorisParameters() { this->sinkDorisParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParameters & sinkDorisParameters() const { DARABONBA_PTR_GET_CONST(sinkDorisParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParameters sinkDorisParameters() { DARABONBA_PTR_GET(sinkDorisParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkDorisParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParameters & sinkDorisParameters) { DARABONBA_PTR_SET_VALUE(sinkDorisParameters_, sinkDorisParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkDorisParameters(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParameters && sinkDorisParameters) { DARABONBA_PTR_SET_RVALUE(sinkDorisParameters_, sinkDorisParameters) };


    // sinkFcParameters Field Functions 
    bool hasSinkFcParameters() const { return this->sinkFcParameters_ != nullptr;};
    void deleteSinkFcParameters() { this->sinkFcParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFcParameters & sinkFcParameters() const { DARABONBA_PTR_GET_CONST(sinkFcParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFcParameters sinkFcParameters() { DARABONBA_PTR_GET(sinkFcParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkFcParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkFcParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkFcParameters & sinkFcParameters) { DARABONBA_PTR_SET_VALUE(sinkFcParameters_, sinkFcParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkFcParameters(Models::GetEventStreamingResponseBodyDataSinkSinkFcParameters && sinkFcParameters) { DARABONBA_PTR_SET_RVALUE(sinkFcParameters_, sinkFcParameters) };


    // sinkFnfParameters Field Functions 
    bool hasSinkFnfParameters() const { return this->sinkFnfParameters_ != nullptr;};
    void deleteSinkFnfParameters() { this->sinkFnfParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParameters & sinkFnfParameters() const { DARABONBA_PTR_GET_CONST(sinkFnfParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFnfParameters sinkFnfParameters() { DARABONBA_PTR_GET(sinkFnfParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkFnfParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParameters & sinkFnfParameters) { DARABONBA_PTR_SET_VALUE(sinkFnfParameters_, sinkFnfParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkFnfParameters(Models::GetEventStreamingResponseBodyDataSinkSinkFnfParameters && sinkFnfParameters) { DARABONBA_PTR_SET_RVALUE(sinkFnfParameters_, sinkFnfParameters) };


    // sinkKafkaParameters Field Functions 
    bool hasSinkKafkaParameters() const { return this->sinkKafkaParameters_ != nullptr;};
    void deleteSinkKafkaParameters() { this->sinkKafkaParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParameters & sinkKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkKafkaParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParameters sinkKafkaParameters() { DARABONBA_PTR_GET(sinkKafkaParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkKafkaParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParameters & sinkKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkKafkaParameters_, sinkKafkaParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkKafkaParameters(Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParameters && sinkKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkKafkaParameters_, sinkKafkaParameters) };


    // sinkMNSParameters Field Functions 
    bool hasSinkMNSParameters() const { return this->sinkMNSParameters_ != nullptr;};
    void deleteSinkMNSParameters() { this->sinkMNSParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParameters & sinkMNSParameters() const { DARABONBA_PTR_GET_CONST(sinkMNSParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkMNSParameters sinkMNSParameters() { DARABONBA_PTR_GET(sinkMNSParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkMNSParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkMNSParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkMNSParameters & sinkMNSParameters) { DARABONBA_PTR_SET_VALUE(sinkMNSParameters_, sinkMNSParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkMNSParameters(Models::GetEventStreamingResponseBodyDataSinkSinkMNSParameters && sinkMNSParameters) { DARABONBA_PTR_SET_RVALUE(sinkMNSParameters_, sinkMNSParameters) };


    // sinkOpenSourceRabbitMQParameters Field Functions 
    bool hasSinkOpenSourceRabbitMQParameters() const { return this->sinkOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSinkOpenSourceRabbitMQParameters() { this->sinkOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkOpenSourceRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters sinkOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sinkOpenSourceRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkOpenSourceRabbitMQParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkOpenSourceRabbitMQParameters(Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters && sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };


    // sinkRabbitMQParameters Field Functions 
    bool hasSinkRabbitMQParameters() const { return this->sinkRabbitMQParameters_ != nullptr;};
    void deleteSinkRabbitMQParameters() { this->sinkRabbitMQParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters & sinkRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters sinkRabbitMQParameters() { DARABONBA_PTR_GET(sinkRabbitMQParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkRabbitMQParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters & sinkRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkRabbitMQParameters(Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters && sinkRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };


    // sinkRocketMQCheckpointParameters Field Functions 
    bool hasSinkRocketMQCheckpointParameters() const { return this->sinkRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkRocketMQCheckpointParameters() { this->sinkRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters sinkRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkRocketMQCheckpointParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkRocketMQCheckpointParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkRocketMQCheckpointParameters(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters && sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };


    // sinkRocketMQParameters Field Functions 
    bool hasSinkRocketMQParameters() const { return this->sinkRocketMQParameters_ != nullptr;};
    void deleteSinkRocketMQParameters() { this->sinkRocketMQParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters & sinkRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters sinkRocketMQParameters() { DARABONBA_PTR_GET(sinkRocketMQParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkRocketMQParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters & sinkRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkRocketMQParameters(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters && sinkRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };


    // sinkSLSParameters Field Functions 
    bool hasSinkSLSParameters() const { return this->sinkSLSParameters_ != nullptr;};
    void deleteSinkSLSParameters() { this->sinkSLSParameters_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParameters & sinkSLSParameters() const { DARABONBA_PTR_GET_CONST(sinkSLSParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParameters) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkSLSParameters sinkSLSParameters() { DARABONBA_PTR_GET(sinkSLSParameters_, Models::GetEventStreamingResponseBodyDataSinkSinkSLSParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkSLSParameters(const Models::GetEventStreamingResponseBodyDataSinkSinkSLSParameters & sinkSLSParameters) { DARABONBA_PTR_SET_VALUE(sinkSLSParameters_, sinkSLSParameters) };
    inline GetEventStreamingResponseBodyDataSink& setSinkSLSParameters(Models::GetEventStreamingResponseBodyDataSinkSinkSLSParameters && sinkSLSParameters) { DARABONBA_PTR_SET_RVALUE(sinkSLSParameters_, sinkSLSParameters) };


  protected:
    // Sink Apache RocketMQ Checkpoint Parameters
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheRocketMQCheckpointParameters> sinkApacheRocketMQCheckpointParameters_ = nullptr;
    // Sink BaiLian Parameters
    std::shared_ptr<Models::SinkBaiLianParameters> sinkBaiLianParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaConnectorParameters> sinkCustomizedKafkaConnectorParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkCustomizedKafkaParameters> sinkCustomizedKafkaParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDashVectorParameters> sinkDashVectorParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDataHubParameters> sinkDataHubParameters_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParameters> sinkDorisParameters_ = nullptr;
    // The parameters that are returned if the event target is Function Compute.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFcParameters> sinkFcParameters_ = nullptr;
    // The Sink Fnf parameters.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFnfParameters> sinkFnfParameters_ = nullptr;
    // The parameters that are returned if the event target is Message Queue for Apache Kafka.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParameters> sinkKafkaParameters_ = nullptr;
    // The parameters that are returned if the event target is Message Service (MNS).
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkMNSParameters> sinkMNSParameters_ = nullptr;
    // Sink Open Source RabbitMQ Parameters
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters> sinkOpenSourceRabbitMQParameters_ = nullptr;
    // The parameters that are returned if the event target is Message Queue for RabbitMQ.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRabbitMQParameters> sinkRabbitMQParameters_ = nullptr;
    // Sink RocketMQ Checkpoint Parameters
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters> sinkRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for RocketMQ is specified as the event target.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters> sinkRocketMQParameters_ = nullptr;
    // The parameters that are returned if Simple Log Service is specified as the event target.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkSLSParameters> sinkSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
