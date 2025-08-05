// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters() = default ;
    CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters(const CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &) = default ;
    CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters(CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters() = default ;
    CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& operator=(const CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &) = default ;
    CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& operator=(CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeTimestamp_ != nullptr
        && this->group_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->topic_ != nullptr; };
    // consumeTimestamp Field Functions 
    bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
    void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp() const { DARABONBA_PTR_GET_CONST(consumeTimestamp_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp consumeTimestamp() { DARABONBA_PTR_GET(consumeTimestamp_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp && consumeTimestamp) { DARABONBA_PTR_SET_RVALUE(consumeTimestamp_, consumeTimestamp) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup & group() const { DARABONBA_PTR_GET_CONST(group_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup group() { DARABONBA_PTR_GET(group_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup) };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setGroup(const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setGroup(Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic) };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setTopic(const Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline CreateEventStreamingRequestSinkSinkRocketMQCheckpointParameters& setTopic(Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersConsumeTimestamp> consumeTimestamp_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersGroup> group_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQCheckpointParametersTopic> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
