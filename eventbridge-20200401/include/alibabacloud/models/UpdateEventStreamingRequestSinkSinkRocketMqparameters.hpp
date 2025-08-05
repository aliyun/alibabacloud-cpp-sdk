// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersBody.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersTags.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkRocketMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkRocketMQParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(DeliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ShardingKey, shardingKey_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkRocketMQParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(DeliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ShardingKey, shardingKey_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateEventStreamingRequestSinkSinkRocketMQParameters() = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQParameters(const UpdateEventStreamingRequestSinkSinkRocketMQParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQParameters(UpdateEventStreamingRequestSinkSinkRocketMQParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkRocketMQParameters() = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQParameters& operator=(const UpdateEventStreamingRequestSinkSinkRocketMQParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkRocketMQParameters& operator=(UpdateEventStreamingRequestSinkSinkRocketMQParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->deliveryOrderType_ != nullptr && this->instanceEndpoint_ != nullptr && this->instanceId_ != nullptr && this->instancePassword_ != nullptr && this->instanceType_ != nullptr
        && this->instanceUsername_ != nullptr && this->keys_ != nullptr && this->network_ != nullptr && this->properties_ != nullptr && this->securityGroupId_ != nullptr
        && this->shardingKey_ != nullptr && this->tags_ != nullptr && this->topic_ != nullptr && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersBody) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersBody) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setBody(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setBody(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType() const { DARABONBA_PTR_GET_CONST(deliveryOrderType_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType deliveryOrderType() { DARABONBA_PTR_GET(deliveryOrderType_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setDeliveryOrderType(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setDeliveryOrderType(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType && deliveryOrderType) { DARABONBA_PTR_SET_RVALUE(deliveryOrderType_, deliveryOrderType) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint() const { DARABONBA_PTR_GET_CONST(instanceEndpoint_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint instanceEndpoint() { DARABONBA_PTR_GET(instanceEndpoint_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceEndpoint(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceEndpoint(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint && instanceEndpoint) { DARABONBA_PTR_SET_RVALUE(instanceEndpoint_, instanceEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceId(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceId(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword & instancePassword() const { DARABONBA_PTR_GET_CONST(instancePassword_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword instancePassword() { DARABONBA_PTR_GET(instancePassword_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstancePassword(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword & instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstancePassword(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword && instancePassword) { DARABONBA_PTR_SET_RVALUE(instancePassword_, instancePassword) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType instanceType() { DARABONBA_PTR_GET(instanceType_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceType(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceType(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername & instanceUsername() const { DARABONBA_PTR_GET_CONST(instanceUsername_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername instanceUsername() { DARABONBA_PTR_GET(instanceUsername_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceUsername(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername & instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceUsername(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername && instanceUsername) { DARABONBA_PTR_SET_RVALUE(instanceUsername_, instanceUsername) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys & keys() const { DARABONBA_PTR_GET_CONST(keys_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys keys() { DARABONBA_PTR_GET(keys_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setKeys(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setKeys(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork network() { DARABONBA_PTR_GET(network_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setNetwork(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setNetwork(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setProperties(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setProperties(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setSecurityGroupId(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setSecurityGroupId(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // shardingKey Field Functions 
    bool hasShardingKey() const { return this->shardingKey_ != nullptr;};
    void deleteShardingKey() { this->shardingKey_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey & shardingKey() const { DARABONBA_PTR_GET_CONST(shardingKey_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey shardingKey() { DARABONBA_PTR_GET(shardingKey_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setShardingKey(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey & shardingKey) { DARABONBA_PTR_SET_VALUE(shardingKey_, shardingKey) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setShardingKey(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey && shardingKey) { DARABONBA_PTR_SET_RVALUE(shardingKey_, shardingKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTags) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTags tags() { DARABONBA_PTR_GET(tags_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTags) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setTags(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setTags(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setTopic(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setTopic(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setVSwitchIds(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setVSwitchIds(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId) };
    inline Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setVpcId(const Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline UpdateEventStreamingRequestSinkSinkRocketMQParameters& setVpcId(Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    // The message body.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersBody> body_ = nullptr;
    // The type of the message delivery order. This parameter is optional. Default value: Concurrently.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType> deliveryOrderType_ = nullptr;
    // The endpoint that is used to access the instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint> instanceEndpoint_ = nullptr;
    // The ID of the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceId> instanceId_ = nullptr;
    // The password that is used to access the instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword> instancePassword_ = nullptr;
    // The instance type.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceType> instanceType_ = nullptr;
    // The username that is used to access the instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername> instanceUsername_ = nullptr;
    // The keys that you want to use to filter messages.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersKeys> keys_ = nullptr;
    // The network type. Valid values:
    // 
    // *   PublicNetwork
    // *   PrivateNetwork
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersNetwork> network_ = nullptr;
    // The attributes that you want to use to filter messages.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersProperties> properties_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId> securityGroupId_ = nullptr;
    // The sharding key.
    // 
    // >  If you set DeliveryOrderType to Orderly, this parameter is required. If you specify ApsaraMQ for RocketMQ as the event source, you can leave this parameter empty. In this case, the combined value of BrokerName and QueueId is used as the sharding key.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersShardingKey> shardingKey_ = nullptr;
    // The tags that you want to use to filter messages.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTags> tags_ = nullptr;
    // The name of the topic on the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersTopic> topic_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds> vSwitchIds_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkRocketMQParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
