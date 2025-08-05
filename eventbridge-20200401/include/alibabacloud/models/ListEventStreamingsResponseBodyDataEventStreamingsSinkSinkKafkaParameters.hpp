// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Acks, acks_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Acks, acks_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acks_ != nullptr
        && this->instanceId_ != nullptr && this->key_ != nullptr && this->topic_ != nullptr && this->value_ != nullptr; };
    // acks Field Functions 
    bool hasAcks() const { return this->acks_ != nullptr;};
    void deleteAcks() { this->acks_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks & acks() const { DARABONBA_PTR_GET_CONST(acks_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks acks() { DARABONBA_PTR_GET(acks_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setAcks(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks & acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setAcks(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks && acks) { DARABONBA_PTR_SET_RVALUE(acks_, acks) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setInstanceId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setInstanceId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey & key() const { DARABONBA_PTR_GET_CONST(key_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey key() { DARABONBA_PTR_GET(key_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setKey(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setKey(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setTopic(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setTopic(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue value() { DARABONBA_PTR_GET(value_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setValue(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParameters& setValue(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The acknowledgment (ACK) mode.
    // 
    // *   If you set this parameter to 0, no response is returned from the broker. In this mode, the performance is high, but the risk of data loss is also high.
    // *   If you set this parameter to 1, a response is returned when data is written to the leader. In this mode, the performance and the risk of data loss are moderate. Data loss may occur if a failure occurs on the leader.
    // *   If you set this parameter to all, a response is returned when data is written to the leader and synchronized to the followers. In this mode, the performance is low, but the risk of data loss is also low. Data loss occurs if the leader and the followers fail at the same time.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersAcks> acks_ = nullptr;
    // The ID of the ApsaraMQ for Kafka instance.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersInstanceId> instanceId_ = nullptr;
    // The message key.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersKey> key_ = nullptr;
    // The name of the topic on the ApsaraMQ for Kafka instance.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersTopic> topic_ = nullptr;
    // The message body.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkKafkaParametersValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
