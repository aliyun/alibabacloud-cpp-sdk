// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKROCKETMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKROCKETMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& obj) { 
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
    GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters(const GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters(GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters &&) = default ;
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
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType() const { DARABONBA_PTR_GET_CONST(deliveryOrderType_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType deliveryOrderType() { DARABONBA_PTR_GET(deliveryOrderType_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setDeliveryOrderType(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setDeliveryOrderType(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType && deliveryOrderType) { DARABONBA_PTR_SET_RVALUE(deliveryOrderType_, deliveryOrderType) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint() const { DARABONBA_PTR_GET_CONST(instanceEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint instanceEndpoint() { DARABONBA_PTR_GET(instanceEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceEndpoint(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceEndpoint(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint && instanceEndpoint) { DARABONBA_PTR_SET_RVALUE(instanceEndpoint_, instanceEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceId(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceId(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword & instancePassword() const { DARABONBA_PTR_GET_CONST(instancePassword_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword instancePassword() { DARABONBA_PTR_GET(instancePassword_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstancePassword(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword & instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstancePassword(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword && instancePassword) { DARABONBA_PTR_SET_RVALUE(instancePassword_, instancePassword) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType instanceType() { DARABONBA_PTR_GET(instanceType_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceType(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceType(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername & instanceUsername() const { DARABONBA_PTR_GET_CONST(instanceUsername_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername instanceUsername() { DARABONBA_PTR_GET(instanceUsername_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceUsername(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername & instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setInstanceUsername(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername && instanceUsername) { DARABONBA_PTR_SET_RVALUE(instanceUsername_, instanceUsername) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys & keys() const { DARABONBA_PTR_GET_CONST(keys_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys keys() { DARABONBA_PTR_GET(keys_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setKeys(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setKeys(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork network() { DARABONBA_PTR_GET(network_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setNetwork(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setNetwork(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setProperties(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setProperties(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setSecurityGroupId(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setSecurityGroupId(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // shardingKey Field Functions 
    bool hasShardingKey() const { return this->shardingKey_ != nullptr;};
    void deleteShardingKey() { this->shardingKey_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey & shardingKey() const { DARABONBA_PTR_GET_CONST(shardingKey_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey shardingKey() { DARABONBA_PTR_GET(shardingKey_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setShardingKey(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey & shardingKey) { DARABONBA_PTR_SET_VALUE(shardingKey_, shardingKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setShardingKey(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey && shardingKey) { DARABONBA_PTR_SET_RVALUE(shardingKey_, shardingKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags tags() { DARABONBA_PTR_GET(tags_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setTags(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setTags(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setTopic(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setTopic(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setVSwitchIds(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setVSwitchIds(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setVpcId(const Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline GetEventStreamingResponseBodyDataSinkSinkRocketMQParameters& setVpcId(Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    // The message content.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersBody> body_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersDeliveryOrderType> deliveryOrderType_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceEndpoint> instanceEndpoint_ = nullptr;
    // The target service type is Message Queue for Apache RocketMQ.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceId> instanceId_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstancePassword> instancePassword_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceType> instanceType_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersInstanceUsername> instanceUsername_ = nullptr;
    // The tags that are used to filter messages.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersKeys> keys_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersNetwork> network_ = nullptr;
    // The tags that are used to filter messages.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersProperties> properties_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersShardingKey> shardingKey_ = nullptr;
    // The tags that are used to filter messages.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTags> tags_ = nullptr;
    // The name of the topic in the Message Queue for Apache RocketMQ instance.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersTopic> topic_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkRocketMQParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
