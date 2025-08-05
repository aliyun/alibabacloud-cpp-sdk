// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKAPACHEROCKETMQCHECKPOINTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKAPACHEROCKETMQCHECKPOINTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeTimestamp, consumeTimestamp_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters() = default ;
    UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters(const UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters(UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters() = default ;
    UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& operator=(const UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& operator=(UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeTimestamp_ != nullptr
        && this->group_ != nullptr && this->instanceEndpoint_ != nullptr && this->instancePassword_ != nullptr && this->instanceUsername_ != nullptr && this->networkType_ != nullptr
        && this->securityGroupId_ != nullptr && this->topic_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // consumeTimestamp Field Functions 
    bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
    void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp() const { DARABONBA_PTR_GET_CONST(consumeTimestamp_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp consumeTimestamp() { DARABONBA_PTR_GET(consumeTimestamp_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp) };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setConsumeTimestamp(const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp & consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setConsumeTimestamp(Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp && consumeTimestamp) { DARABONBA_PTR_SET_RVALUE(consumeTimestamp_, consumeTimestamp) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup & group() const { DARABONBA_PTR_GET_CONST(group_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup group() { DARABONBA_PTR_GET(group_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup) };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setGroup(const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setGroup(Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline string instanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline string instancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline string instanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic) };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setTopic(const Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setTopic(Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The timestamp that specifies the time from which messages are consumed.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersConsumeTimestamp> consumeTimestamp_ = nullptr;
    // The ID of the consumer group.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersGroup> group_ = nullptr;
    // The endpoint that is used to access the Apache RocketMQ instance.
    std::shared_ptr<string> instanceEndpoint_ = nullptr;
    // The password that is used to access the Apache RocketMQ instance.
    std::shared_ptr<string> instancePassword_ = nullptr;
    // The username that is used to access the Apache RocketMQ instance.
    std::shared_ptr<string> instanceUsername_ = nullptr;
    // The network type.
    // 
    // *   PublicNetwork
    // *   PrivateNetwork
    std::shared_ptr<string> networkType_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the topic on the Apache RocketMQ instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheRocketMQCheckpointParametersTopic> topic_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
