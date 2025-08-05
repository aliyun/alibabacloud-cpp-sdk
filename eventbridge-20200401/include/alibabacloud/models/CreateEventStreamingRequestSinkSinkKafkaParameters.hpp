// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkKafkaParametersAcks.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkKafkaParametersHeaders.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkKafkaParametersKey.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkKafkaParametersTopic.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkKafkaParametersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Acks, acks_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Acks, acks_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateEventStreamingRequestSinkSinkKafkaParameters() = default ;
    CreateEventStreamingRequestSinkSinkKafkaParameters(const CreateEventStreamingRequestSinkSinkKafkaParameters &) = default ;
    CreateEventStreamingRequestSinkSinkKafkaParameters(CreateEventStreamingRequestSinkSinkKafkaParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkKafkaParameters() = default ;
    CreateEventStreamingRequestSinkSinkKafkaParameters& operator=(const CreateEventStreamingRequestSinkSinkKafkaParameters &) = default ;
    CreateEventStreamingRequestSinkSinkKafkaParameters& operator=(CreateEventStreamingRequestSinkSinkKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acks_ != nullptr
        && this->headers_ != nullptr && this->instanceId_ != nullptr && this->key_ != nullptr && this->topic_ != nullptr && this->value_ != nullptr; };
    // acks Field Functions 
    bool hasAcks() const { return this->acks_ != nullptr;};
    void deleteAcks() { this->acks_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkKafkaParametersAcks & acks() const { DARABONBA_PTR_GET_CONST(acks_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersAcks) };
    inline Models::CreateEventStreamingRequestSinkSinkKafkaParametersAcks acks() { DARABONBA_PTR_GET(acks_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersAcks) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setAcks(const Models::CreateEventStreamingRequestSinkSinkKafkaParametersAcks & acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setAcks(Models::CreateEventStreamingRequestSinkSinkKafkaParametersAcks && acks) { DARABONBA_PTR_SET_RVALUE(acks_, acks) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkKafkaParametersHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersHeaders) };
    inline Models::CreateEventStreamingRequestSinkSinkKafkaParametersHeaders headers() { DARABONBA_PTR_GET(headers_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersHeaders) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setHeaders(const Models::CreateEventStreamingRequestSinkSinkKafkaParametersHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setHeaders(Models::CreateEventStreamingRequestSinkSinkKafkaParametersHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId) };
    inline Models::CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setInstanceId(const Models::CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setInstanceId(Models::CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkKafkaParametersKey & key() const { DARABONBA_PTR_GET_CONST(key_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersKey) };
    inline Models::CreateEventStreamingRequestSinkSinkKafkaParametersKey key() { DARABONBA_PTR_GET(key_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersKey) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setKey(const Models::CreateEventStreamingRequestSinkSinkKafkaParametersKey & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setKey(Models::CreateEventStreamingRequestSinkSinkKafkaParametersKey && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkKafkaParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersTopic) };
    inline Models::CreateEventStreamingRequestSinkSinkKafkaParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersTopic) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setTopic(const Models::CreateEventStreamingRequestSinkSinkKafkaParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setTopic(Models::CreateEventStreamingRequestSinkSinkKafkaParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkKafkaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersValue) };
    inline Models::CreateEventStreamingRequestSinkSinkKafkaParametersValue value() { DARABONBA_PTR_GET(value_, Models::CreateEventStreamingRequestSinkSinkKafkaParametersValue) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setValue(const Models::CreateEventStreamingRequestSinkSinkKafkaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline CreateEventStreamingRequestSinkSinkKafkaParameters& setValue(Models::CreateEventStreamingRequestSinkSinkKafkaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The acknowledgment (ACK) mode.
    // 
    // *   If you set this parameter to 0, no response is returned from the broker. In this mode, the performance is high, but the risk of data loss is also high.
    // *   If you set this parameter to 1, a response is returned when data is written to the leader. In this mode, the performance and the risk of data loss are moderate. Data loss may occur if a failure occurs on the leader.
    // *   If you set this parameter to all, a response is returned when data is written to the leader and synchronized to the followers. In this mode, the performance is low, but the risk of data loss is also low. Data loss occurs if the leader and the followers fail at the same time.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkKafkaParametersAcks> acks_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkKafkaParametersHeaders> headers_ = nullptr;
    // The ID of the ApsaraMQ for Kafka instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkKafkaParametersInstanceId> instanceId_ = nullptr;
    // The message key.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkKafkaParametersKey> key_ = nullptr;
    // The name of the topic on the ApsaraMQ for Kafka instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkKafkaParametersTopic> topic_ = nullptr;
    // The message body.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkKafkaParametersValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
