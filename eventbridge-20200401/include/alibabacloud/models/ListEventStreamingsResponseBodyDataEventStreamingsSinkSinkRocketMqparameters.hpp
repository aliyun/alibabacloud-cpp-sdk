// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKROCKETMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKROCKETMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& obj) { 
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
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters &&) = default ;
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
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setBody(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setBody(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType() const { DARABONBA_PTR_GET_CONST(deliveryOrderType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType deliveryOrderType() { DARABONBA_PTR_GET(deliveryOrderType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setDeliveryOrderType(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType & deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setDeliveryOrderType(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType && deliveryOrderType) { DARABONBA_PTR_SET_RVALUE(deliveryOrderType_, deliveryOrderType) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint() const { DARABONBA_PTR_GET_CONST(instanceEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint instanceEndpoint() { DARABONBA_PTR_GET(instanceEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceEndpoint(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint & instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceEndpoint(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint && instanceEndpoint) { DARABONBA_PTR_SET_RVALUE(instanceEndpoint_, instanceEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId instanceId() { DARABONBA_PTR_GET(instanceId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword & instancePassword() const { DARABONBA_PTR_GET_CONST(instancePassword_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword instancePassword() { DARABONBA_PTR_GET(instancePassword_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstancePassword(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword & instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstancePassword(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword && instancePassword) { DARABONBA_PTR_SET_RVALUE(instancePassword_, instancePassword) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType instanceType() { DARABONBA_PTR_GET(instanceType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceType(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceType(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername & instanceUsername() const { DARABONBA_PTR_GET_CONST(instanceUsername_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername instanceUsername() { DARABONBA_PTR_GET(instanceUsername_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceUsername(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername & instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setInstanceUsername(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername && instanceUsername) { DARABONBA_PTR_SET_RVALUE(instanceUsername_, instanceUsername) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys & keys() const { DARABONBA_PTR_GET_CONST(keys_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys keys() { DARABONBA_PTR_GET(keys_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setKeys(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setKeys(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork network() { DARABONBA_PTR_GET(network_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setNetwork(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setNetwork(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setProperties(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setProperties(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setSecurityGroupId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setSecurityGroupId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // shardingKey Field Functions 
    bool hasShardingKey() const { return this->shardingKey_ != nullptr;};
    void deleteShardingKey() { this->shardingKey_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey & shardingKey() const { DARABONBA_PTR_GET_CONST(shardingKey_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey shardingKey() { DARABONBA_PTR_GET(shardingKey_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setShardingKey(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey & shardingKey) { DARABONBA_PTR_SET_VALUE(shardingKey_, shardingKey) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setShardingKey(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey && shardingKey) { DARABONBA_PTR_SET_RVALUE(shardingKey_, shardingKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags tags() { DARABONBA_PTR_GET(tags_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setTags(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setTags(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic & topic() const { DARABONBA_PTR_GET_CONST(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic topic() { DARABONBA_PTR_GET(topic_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setTopic(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setTopic(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setVSwitchIds(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setVSwitchIds(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setVpcId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParameters& setVpcId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    // The message content.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersBody> body_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersDeliveryOrderType> deliveryOrderType_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceEndpoint> instanceEndpoint_ = nullptr;
    // The ID of the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceId> instanceId_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstancePassword> instancePassword_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceType> instanceType_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersInstanceUsername> instanceUsername_ = nullptr;
    // The keys that are used to filter messages.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersKeys> keys_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersNetwork> network_ = nullptr;
    // The properties that are used to filter messages.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersProperties> properties_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersShardingKey> shardingKey_ = nullptr;
    // The tags that are used to filter messages.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTags> tags_ = nullptr;
    // The topic on the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersTopic> topic_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkRocketMQParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
