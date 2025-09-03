// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINK_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/SinkBaiLianParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSink : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSink& obj) { 
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
      DARABONBA_PTR_TO_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
      DARABONBA_PTR_TO_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
      DARABONBA_PTR_TO_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
      DARABONBA_PTR_TO_JSON(SinkSLSParameters, sinkSLSParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSink& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
      DARABONBA_PTR_FROM_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
      DARABONBA_PTR_FROM_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
      DARABONBA_PTR_FROM_JSON(SinkSLSParameters, sinkSLSParameters_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSink() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSink(const ListEventStreamingsResponseBodyDataEventStreamingsSink &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSink(ListEventStreamingsResponseBodyDataEventStreamingsSink &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSink(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSink() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSink& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSink &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSink& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSink &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sinkApacheKafkaParameters_ != nullptr
        && this->sinkApacheRocketMQCheckpointParameters_ != nullptr && this->sinkBaiLianParameters_ != nullptr && this->sinkCustomizedKafkaConnectorParameters_ != nullptr && this->sinkCustomizedKafkaParameters_ != nullptr && this->sinkDashVectorParameters_ != nullptr
        && this->sinkDataHubParameters_ != nullptr && this->sinkDorisParameters_ != nullptr && this->sinkFcParameters_ != nullptr && this->sinkFnfParameters_ != nullptr && this->sinkKafkaParameters_ != nullptr
        && this->sinkMNSParameters_ != nullptr && this->sinkOpenSourceRabbitMQParameters_ != nullptr && this->sinkRabbitMQParameters_ != nullptr && this->sinkRocketMQCheckpointParameters_ != nullptr && this->sinkRocketMQParameters_ != nullptr
        && this->sinkSLSParameters_ != nullptr; };
    // sinkApacheKafkaParameters Field Functions 
    bool hasSinkApacheKafkaParameters() const { return this->sinkApacheKafkaParameters_ != nullptr;};
    void deleteSinkApacheKafkaParameters() { this->sinkApacheKafkaParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters & sinkApacheKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters sinkApacheKafkaParameters() { DARABONBA_PTR_GET(sinkApacheKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkApacheKafkaParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters & sinkApacheKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheKafkaParameters_, sinkApacheKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkApacheKafkaParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters && sinkApacheKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheKafkaParameters_, sinkApacheKafkaParameters) };


    // sinkApacheRocketMQCheckpointParameters Field Functions 
    bool hasSinkApacheRocketMQCheckpointParameters() const { return this->sinkApacheRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkApacheRocketMQCheckpointParameters() { this->sinkApacheRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters sinkApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkApacheRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkApacheRocketMQCheckpointParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkApacheRocketMQCheckpointParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters && sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };


    // sinkBaiLianParameters Field Functions 
    bool hasSinkBaiLianParameters() const { return this->sinkBaiLianParameters_ != nullptr;};
    void deleteSinkBaiLianParameters() { this->sinkBaiLianParameters_ = nullptr;};
    inline const Models::SinkBaiLianParameters & sinkBaiLianParameters() const { DARABONBA_PTR_GET_CONST(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline Models::SinkBaiLianParameters sinkBaiLianParameters() { DARABONBA_PTR_GET(sinkBaiLianParameters_, Models::SinkBaiLianParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkBaiLianParameters(const Models::SinkBaiLianParameters & sinkBaiLianParameters) { DARABONBA_PTR_SET_VALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkBaiLianParameters(Models::SinkBaiLianParameters && sinkBaiLianParameters) { DARABONBA_PTR_SET_RVALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };


    // sinkCustomizedKafkaConnectorParameters Field Functions 
    bool hasSinkCustomizedKafkaConnectorParameters() const { return this->sinkCustomizedKafkaConnectorParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaConnectorParameters() { this->sinkCustomizedKafkaConnectorParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaConnectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters sinkCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaConnectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkCustomizedKafkaConnectorParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkCustomizedKafkaConnectorParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters && sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };


    // sinkCustomizedKafkaParameters Field Functions 
    bool hasSinkCustomizedKafkaParameters() const { return this->sinkCustomizedKafkaParameters_ != nullptr;};
    void deleteSinkCustomizedKafkaParameters() { this->sinkCustomizedKafkaParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters sinkCustomizedKafkaParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkCustomizedKafkaParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkCustomizedKafkaParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters && sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };


    // sinkDashVectorParameters Field Functions 
    bool hasSinkDashVectorParameters() const { return this->sinkDashVectorParameters_ != nullptr;};
    void deleteSinkDashVectorParameters() { this->sinkDashVectorParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters & sinkDashVectorParameters() const { DARABONBA_PTR_GET_CONST(sinkDashVectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters sinkDashVectorParameters() { DARABONBA_PTR_GET(sinkDashVectorParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkDashVectorParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters & sinkDashVectorParameters) { DARABONBA_PTR_SET_VALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkDashVectorParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters && sinkDashVectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };


    // sinkDataHubParameters Field Functions 
    bool hasSinkDataHubParameters() const { return this->sinkDataHubParameters_ != nullptr;};
    void deleteSinkDataHubParameters() { this->sinkDataHubParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters & sinkDataHubParameters() const { DARABONBA_PTR_GET_CONST(sinkDataHubParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters sinkDataHubParameters() { DARABONBA_PTR_GET(sinkDataHubParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkDataHubParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters & sinkDataHubParameters) { DARABONBA_PTR_SET_VALUE(sinkDataHubParameters_, sinkDataHubParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkDataHubParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters && sinkDataHubParameters) { DARABONBA_PTR_SET_RVALUE(sinkDataHubParameters_, sinkDataHubParameters) };


    // sinkDorisParameters Field Functions 
    bool hasSinkDorisParameters() const { return this->sinkDorisParameters_ != nullptr;};
    void deleteSinkDorisParameters() { this->sinkDorisParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters & sinkDorisParameters() const { DARABONBA_PTR_GET_CONST(sinkDorisParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters sinkDorisParameters() { DARABONBA_PTR_GET(sinkDorisParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkDorisParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters & sinkDorisParameters) { DARABONBA_PTR_SET_VALUE(sinkDorisParameters_, sinkDorisParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkDorisParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters && sinkDorisParameters) { DARABONBA_PTR_SET_RVALUE(sinkDorisParameters_, sinkDorisParameters) };


    // sinkFcParameters Field Functions 
    bool hasSinkFcParameters() const { return this->sinkFcParameters_ != nullptr;};
    void deleteSinkFcParameters() { this->sinkFcParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters & sinkFcParameters() const { DARABONBA_PTR_GET_CONST(sinkFcParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters sinkFcParameters() { DARABONBA_PTR_GET(sinkFcParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkFcParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters & sinkFcParameters) { DARABONBA_PTR_SET_VALUE(sinkFcParameters_, sinkFcParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkFcParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters && sinkFcParameters) { DARABONBA_PTR_SET_RVALUE(sinkFcParameters_, sinkFcParameters) };


    // sinkFnfParameters Field Functions 
    bool hasSinkFnfParameters() const { return this->sinkFnfParameters_ != nullptr;};
    void deleteSinkFnfParameters() { this->sinkFnfParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters & sinkFnfParameters() const { DARABONBA_PTR_GET_CONST(sinkFnfParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters sinkFnfParameters() { DARABONBA_PTR_GET(sinkFnfParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkFnfParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters & sinkFnfParameters) { DARABONBA_PTR_SET_VALUE(sinkFnfParameters_, sinkFnfParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkFnfParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters && sinkFnfParameters) { DARABONBA_PTR_SET_RVALUE(sinkFnfParameters_, sinkFnfParameters) };


    // sinkKafkaParameters Field Functions 
    bool hasSinkKafkaParameters() const { return this->sinkKafkaParameters_ != nullptr;};
    void deleteSinkKafkaParameters() { this->sinkKafkaParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters & sinkKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters sinkKafkaParameters() { DARABONBA_PTR_GET(sinkKafkaParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkKafkaParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters & sinkKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkKafkaParameters_, sinkKafkaParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkKafkaParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters && sinkKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkKafkaParameters_, sinkKafkaParameters) };


    // sinkMNSParameters Field Functions 
    bool hasSinkMNSParameters() const { return this->sinkMNSParameters_ != nullptr;};
    void deleteSinkMNSParameters() { this->sinkMNSParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters & sinkMNSParameters() const { DARABONBA_PTR_GET_CONST(sinkMNSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters sinkMNSParameters() { DARABONBA_PTR_GET(sinkMNSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkMNSParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters & sinkMNSParameters) { DARABONBA_PTR_SET_VALUE(sinkMNSParameters_, sinkMNSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkMNSParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters && sinkMNSParameters) { DARABONBA_PTR_SET_RVALUE(sinkMNSParameters_, sinkMNSParameters) };


    // sinkOpenSourceRabbitMQParameters Field Functions 
    bool hasSinkOpenSourceRabbitMQParameters() const { return this->sinkOpenSourceRabbitMQParameters_ != nullptr;};
    void deleteSinkOpenSourceRabbitMQParameters() { this->sinkOpenSourceRabbitMQParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkOpenSourceRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters sinkOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sinkOpenSourceRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkOpenSourceRabbitMQParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkOpenSourceRabbitMQParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters && sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };


    // sinkRabbitMQParameters Field Functions 
    bool hasSinkRabbitMQParameters() const { return this->sinkRabbitMQParameters_ != nullptr;};
    void deleteSinkRabbitMQParameters() { this->sinkRabbitMQParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters & sinkRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters sinkRabbitMQParameters() { DARABONBA_PTR_GET(sinkRabbitMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkRabbitMQParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters & sinkRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkRabbitMQParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters && sinkRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };


    // sinkRocketMQCheckpointParameters Field Functions 
    bool hasSinkRocketMQCheckpointParameters() const { return this->sinkRocketMQCheckpointParameters_ != nullptr;};
    void deleteSinkRocketMQCheckpointParameters() { this->sinkRocketMQCheckpointParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters sinkRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkRocketMQCheckpointParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkRocketMQCheckpointParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkRocketMQCheckpointParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters && sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };


    // sinkRocketMQParameters Field Functions 
    bool hasSinkRocketMQParameters() const { return this->sinkRocketMQParameters_ != nullptr;};
    void deleteSinkRocketMQParameters() { this->sinkRocketMQParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters & sinkRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters sinkRocketMQParameters() { DARABONBA_PTR_GET(sinkRocketMQParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkRocketMQParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters & sinkRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkRocketMQParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters && sinkRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };


    // sinkSLSParameters Field Functions 
    bool hasSinkSLSParameters() const { return this->sinkSLSParameters_ != nullptr;};
    void deleteSinkSLSParameters() { this->sinkSLSParameters_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters & sinkSLSParameters() const { DARABONBA_PTR_GET_CONST(sinkSLSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters sinkSLSParameters() { DARABONBA_PTR_GET(sinkSLSParameters_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkSLSParameters(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters & sinkSLSParameters) { DARABONBA_PTR_SET_VALUE(sinkSLSParameters_, sinkSLSParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSink& setSinkSLSParameters(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters && sinkSLSParameters) { DARABONBA_PTR_SET_RVALUE(sinkSLSParameters_, sinkSLSParameters) };


  protected:
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters> sinkApacheKafkaParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheRocketMQCheckpointParameters> sinkApacheRocketMQCheckpointParameters_ = nullptr;
    std::shared_ptr<Models::SinkBaiLianParameters> sinkBaiLianParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaConnectorParameters> sinkCustomizedKafkaConnectorParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkCustomizedKafkaParameters> sinkCustomizedKafkaParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDashVectorParameters> sinkDashVectorParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDataHubParameters> sinkDataHubParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters> sinkDorisParameters_ = nullptr;
    // The parameters that are returned if Function Compute is specified as the event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParameters> sinkFcParameters_ = nullptr;
    // The parameters that are returned if CloudFlow is specified as the event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters> sinkFnfParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for Kafka is specified as the event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters> sinkKafkaParameters_ = nullptr;
    // The parameters that are returned if MNS is specified as the event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkMNSParameters> sinkMNSParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkOpenSourceRabbitMQParameters> sinkOpenSourceRabbitMQParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for RabbitMQ is specified as the event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRabbitMQParameters> sinkRabbitMQParameters_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters> sinkRocketMQCheckpointParameters_ = nullptr;
    // The parameters that are returned if ApsaraMQ for RocketMQ is specified as the event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters> sinkRocketMQParameters_ = nullptr;
    // The parameters that are returned if Simple Log Service is specified as the event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParameters> sinkSLSParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
