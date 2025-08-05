// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters(const GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters(GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeTimestamp_ != nullptr
        && this->group_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->topic_ != nullptr; };
    // consumeTimestamp Field Functions 
    bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
    void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp() const { DARABONBA_PTR_GET_CONST(consumeTimestamp_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp consumeTimestamp() { DARABONBA_PTR_GET(consumeTimestamp_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp && consumeTimestamp) { DARABONBA_PTR_SET_RVALUE(consumeTimestamp_, consumeTimestamp) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup & group() const { DARABONBA_PTR_GET_CONST(group_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup group() { DARABONBA_PTR_GET(group_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setGroup(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setGroup(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setTopic(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParameters& setTopic(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersConsumeTimestamp> consumeTimestamp_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersGroup> group_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQCheckpointParametersTopic> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
