// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Acks, acks_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Acks, acks_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetEventStreamingResponseBodyDataSinkSinkKafkaParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkKafkaParameters(const GetEventStreamingResponseBodyDataSinkSinkKafkaParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkKafkaParameters(GetEventStreamingResponseBodyDataSinkSinkKafkaParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkKafkaParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkKafkaParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acks_ != nullptr
        && this->headers_ != nullptr && this->instanceId_ != nullptr && this->key_ != nullptr && this->topic_ != nullptr && this->value_ != nullptr; };
    // acks Field Functions 
    bool hasAcks() const { return this->acks_ != nullptr;};
    void deleteAcks() { this->acks_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks & acks() const { DARABONBA_PTR_GET_CONST(acks_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks acks() { DARABONBA_PTR_GET(acks_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setAcks(const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks & acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setAcks(Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks && acks) { DARABONBA_PTR_SET_RVALUE(acks_, acks) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders headers() { DARABONBA_PTR_GET(headers_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setHeaders(const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setHeaders(Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setInstanceId(const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setInstanceId(Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey & key() const { DARABONBA_PTR_GET_CONST(key_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey key() { DARABONBA_PTR_GET(key_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setKey(const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setKey(Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setTopic(const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setTopic(Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue value() { DARABONBA_PTR_GET(value_, Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setValue(const Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetEventStreamingResponseBodyDataSinkSinkKafkaParameters& setValue(Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The acknowledgment information.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersAcks> acks_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersHeaders> headers_ = nullptr;
    // The target service type is Message Queue for Apache Kafka.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersInstanceId> instanceId_ = nullptr;
    // The message key.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersKey> key_ = nullptr;
    // The topic name.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersTopic> topic_ = nullptr;
    // The message content.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkKafkaParametersValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
