// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters() = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters(const UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters(UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters() = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& operator=(const UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& operator=(UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeTimestamp_ != nullptr
        && this->group_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->topic_ != nullptr; };
    // consumeTimestamp Field Functions 
    bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
    void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp() const { DARABONBA_PTR_GET_CONST(consumeTimestamp_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp consumeTimestamp() { DARABONBA_PTR_GET(consumeTimestamp_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp && consumeTimestamp) { DARABONBA_PTR_SET_RVALUE(consumeTimestamp_, consumeTimestamp) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup & group() const { DARABONBA_PTR_GET_CONST(group_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup group() { DARABONBA_PTR_GET(group_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setGroup(const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setGroup(Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setTopic(const Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setTopic(Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    // The timestamp that specifies the time from which messages are consumed.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp> consumeTimestamp_ = nullptr;
    // The ID of the consumer group.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup> group_ = nullptr;
    // The ID of the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance type. Valid values:
    // 
    // *   Cloud_4: ApsaraMQ for RocketMQ 4.0 instance
    // *   Cloud_5: ApsaraMQ for RocketMQ 5.0 instance
    std::shared_ptr<string> instanceType_ = nullptr;
    // The name of the topic on the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
