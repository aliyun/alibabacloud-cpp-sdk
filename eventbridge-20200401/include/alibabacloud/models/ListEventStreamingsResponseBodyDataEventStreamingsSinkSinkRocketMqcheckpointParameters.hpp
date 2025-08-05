// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKROCKETMQCHECKPOINTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeTimestamp_ != nullptr
        && this->group_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->topic_ != nullptr; };
    // consumeTimestamp Field Functions 
    bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
    void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp() const { DARABONBA_PTR_GET_CONST(consumeTimestamp_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp consumeTimestamp() { DARABONBA_PTR_GET(consumeTimestamp_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setConsumeTimestamp(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp && consumeTimestamp) { DARABONBA_PTR_SET_RVALUE(consumeTimestamp_, consumeTimestamp) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup & group() const { DARABONBA_PTR_GET_CONST(group_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup group() { DARABONBA_PTR_GET(group_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setGroup(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setGroup(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setTopic(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParameters& setTopic(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


  protected:
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersConsumeTimestamp> consumeTimestamp_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersGroup> group_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQCheckpointParametersTopic> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
