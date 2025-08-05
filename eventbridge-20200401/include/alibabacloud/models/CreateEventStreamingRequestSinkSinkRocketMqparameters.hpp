// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKROCKETMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersBody.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersKeys.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersProperties.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersTags.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersTopic.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkRocketMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkRocketMQParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkRocketMQParameters& obj) { 
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
    CreateEventStreamingRequestSinkSinkRocketMQParameters() = default ;
    CreateEventStreamingRequestSinkSinkRocketMQParameters(const CreateEventStreamingRequestSinkSinkRocketMQParameters &) = default ;
    CreateEventStreamingRequestSinkSinkRocketMQParameters(CreateEventStreamingRequestSinkSinkRocketMQParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkRocketMQParameters() = default ;
    CreateEventStreamingRequestSinkSinkRocketMQParameters& operator=(const CreateEventStreamingRequestSinkSinkRocketMQParameters &) = default ;
    CreateEventStreamingRequestSinkSinkRocketMQParameters& operator=(CreateEventStreamingRequestSinkSinkRocketMQParameters &&) = default ;
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
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersBody) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersBody) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setBody(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setBody(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType() const { DARABONBA_PTR_GET_CONST(deliveryOrderType_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType deliveryOrderType() { DARABONBA_PTR_GET(deliveryOrderType_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setDeliveryOrderType(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setDeliveryOrderType(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType && deliveryOrderType) { DARABONBA_PTR_SET_RVALUE(deliveryOrderType_, deliveryOrderType) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint() const { DARABONBA_PTR_GET_CONST(instanceEndpoint_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint instanceEndpoint() { DARABONBA_PTR_GET(instanceEndpoint_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceEndpoint(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceEndpoint(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint && instanceEndpoint) { DARABONBA_PTR_SET_RVALUE(instanceEndpoint_, instanceEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceId(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceId(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword & instancePassword() const { DARABONBA_PTR_GET_CONST(instancePassword_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword instancePassword() { DARABONBA_PTR_GET(instancePassword_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstancePassword(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword & instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstancePassword(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword && instancePassword) { DARABONBA_PTR_SET_RVALUE(instancePassword_, instancePassword) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType instanceType() { DARABONBA_PTR_GET(instanceType_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceType(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceType(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername & instanceUsername() const { DARABONBA_PTR_GET_CONST(instanceUsername_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername instanceUsername() { DARABONBA_PTR_GET(instanceUsername_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceUsername(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername & instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setInstanceUsername(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername && instanceUsername) { DARABONBA_PTR_SET_RVALUE(instanceUsername_, instanceUsername) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersKeys & keys() const { DARABONBA_PTR_GET_CONST(keys_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersKeys) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersKeys keys() { DARABONBA_PTR_GET(keys_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersKeys) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setKeys(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersKeys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setKeys(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersKeys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork network() { DARABONBA_PTR_GET(network_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setNetwork(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setNetwork(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersProperties) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersProperties) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setProperties(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setProperties(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setSecurityGroupId(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setSecurityGroupId(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // shardingKey Field Functions 
    bool hasShardingKey() const { return this->shardingKey_ != nullptr;};
    void deleteShardingKey() { this->shardingKey_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey & shardingKey() const { DARABONBA_PTR_GET_CONST(shardingKey_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey shardingKey() { DARABONBA_PTR_GET(shardingKey_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setShardingKey(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey & shardingKey) { DARABONBA_PTR_SET_VALUE(shardingKey_, shardingKey) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setShardingKey(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey && shardingKey) { DARABONBA_PTR_SET_RVALUE(shardingKey_, shardingKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTags) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTags tags() { DARABONBA_PTR_GET(tags_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTags) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setTags(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setTags(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTopic) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTopic) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setTopic(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setTopic(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setVSwitchIds(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setVSwitchIds(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId) };
    inline Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setVpcId(const Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline CreateEventStreamingRequestSinkSinkRocketMQParameters& setVpcId(Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    // The message content.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersBody> body_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersDeliveryOrderType> deliveryOrderType_ = nullptr;
    // The endpoint that you want to use to access the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceEndpoint> instanceEndpoint_ = nullptr;
    // The ID of the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceId> instanceId_ = nullptr;
    // The password that you want to use to access the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstancePassword> instancePassword_ = nullptr;
    // The type of the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceType> instanceType_ = nullptr;
    // The username that you want to use to access the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersInstanceUsername> instanceUsername_ = nullptr;
    // The keys that you want to use to filter messages.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersKeys> keys_ = nullptr;
    // The network type.
    // 
    // *   PublicNetwork
    // *   PrivateNetwork
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersNetwork> network_ = nullptr;
    // The properties that you want to use to filter messages.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersProperties> properties_ = nullptr;
    // The ID of the security group to which the ApsaraMQ for RocketMQ instance belongs.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersShardingKey> shardingKey_ = nullptr;
    // The tags that you want to use to filter messages.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTags> tags_ = nullptr;
    // The name of the topic on the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersTopic> topic_ = nullptr;
    // The ID of the vSwitch with which the ApsaraMQ for RocketMQ instance is associated.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVSwitchIds> vSwitchIds_ = nullptr;
    // The ID of the VPC to which the ApsaraMQ for RocketMQ instance belongs.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkRocketMQParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
