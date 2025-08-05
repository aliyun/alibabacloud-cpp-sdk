// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkKafkaParametersAcks.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkKafkaParametersKey.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkKafkaParametersTopic.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkKafkaParametersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Acks, acks_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Acks, acks_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateEventStreamingRequestSinkSinkKafkaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkKafkaParameters(const UpdateEventStreamingRequestSinkSinkKafkaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkKafkaParameters(UpdateEventStreamingRequestSinkSinkKafkaParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkKafkaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkKafkaParameters& operator=(const UpdateEventStreamingRequestSinkSinkKafkaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkKafkaParameters& operator=(UpdateEventStreamingRequestSinkSinkKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acks_ != nullptr
        && this->headers_ != nullptr && this->instanceId_ != nullptr && this->key_ != nullptr && this->topic_ != nullptr && this->value_ != nullptr; };
    // acks Field Functions 
    bool hasAcks() const { return this->acks_ != nullptr;};
    void deleteAcks() { this->acks_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersAcks & acks() const { DARABONBA_PTR_GET_CONST(acks_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersAcks) };
    inline Models::UpdateEventStreamingRequestSinkSinkKafkaParametersAcks acks() { DARABONBA_PTR_GET(acks_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersAcks) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setAcks(const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersAcks & acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setAcks(Models::UpdateEventStreamingRequestSinkSinkKafkaParametersAcks && acks) { DARABONBA_PTR_SET_RVALUE(acks_, acks) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders) };
    inline Models::UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders headers() { DARABONBA_PTR_GET(headers_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setHeaders(const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setHeaders(Models::UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId) };
    inline Models::UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setInstanceId(const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setInstanceId(Models::UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersKey & key() const { DARABONBA_PTR_GET_CONST(key_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersKey) };
    inline Models::UpdateEventStreamingRequestSinkSinkKafkaParametersKey key() { DARABONBA_PTR_GET(key_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersKey) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setKey(const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersKey & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setKey(Models::UpdateEventStreamingRequestSinkSinkKafkaParametersKey && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersTopic) };
    inline Models::UpdateEventStreamingRequestSinkSinkKafkaParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersTopic) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setTopic(const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setTopic(Models::UpdateEventStreamingRequestSinkSinkKafkaParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersValue) };
    inline Models::UpdateEventStreamingRequestSinkSinkKafkaParametersValue value() { DARABONBA_PTR_GET(value_, Models::UpdateEventStreamingRequestSinkSinkKafkaParametersValue) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setValue(const Models::UpdateEventStreamingRequestSinkSinkKafkaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline UpdateEventStreamingRequestSinkSinkKafkaParameters& setValue(Models::UpdateEventStreamingRequestSinkSinkKafkaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The acknowledgment (ACK) mode.
    // 
    // *   If you set this parameter to 0, no response is returned from the broker. In this mode, the performance is high, but the risk of data loss is also high.
    // *   If you set this parameter to 1, a response is returned when data is written to the leader. In this mode, the performance and the risk of data loss are moderate. Data loss may occur if a failure occurs on the leader.
    // *   If you set this parameter to all, a response is returned when data is written to the leader and synchronized to the followers. In this mode, the performance is low, but the risk of data loss is also low. Data loss occurs if the leader and the followers fail at the same time.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkKafkaParametersAcks> acks_ = nullptr;
    // The metadata added to messages in the ApsaraMQ for Kafka instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkKafkaParametersHeaders> headers_ = nullptr;
    // The ID of the ApsaraMQ for Kafka instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkKafkaParametersInstanceId> instanceId_ = nullptr;
    // The message key.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkKafkaParametersKey> key_ = nullptr;
    // The name of the topic on the ApsaraMQ for Kafka instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkKafkaParametersTopic> topic_ = nullptr;
    // The message body.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkKafkaParametersValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
