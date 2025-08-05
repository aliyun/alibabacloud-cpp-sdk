// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELISTSOURCEROCKETMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELISTSOURCEROCKETMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceNetwork, instanceNetwork_);
      DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_TO_JSON(InstanceSecurityGroupId, instanceSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_TO_JSON(InstanceVSwitchIds, instanceVSwitchIds_);
      DARABONBA_PTR_TO_JSON(InstanceVpcId, instanceVpcId_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceNetwork, instanceNetwork_);
      DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_FROM_JSON(InstanceSecurityGroupId, instanceSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_FROM_JSON(InstanceVSwitchIds, instanceVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(InstanceVpcId, instanceVpcId_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters() = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters(const ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters &) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters(ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters &&) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters() = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& operator=(const ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters &) = default ;
    ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& operator=(ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->groupId_ != nullptr && this->instanceEndpoint_ != nullptr && this->instanceId_ != nullptr && this->instanceNetwork_ != nullptr && this->instancePassword_ != nullptr
        && this->instanceSecurityGroupId_ != nullptr && this->instanceType_ != nullptr && this->instanceUsername_ != nullptr && this->instanceVSwitchIds_ != nullptr && this->instanceVpcId_ != nullptr
        && this->offset_ != nullptr && this->regionId_ != nullptr && this->tag_ != nullptr && this->timestamp_ != nullptr && this->topic_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline string instanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceNetwork Field Functions 
    bool hasInstanceNetwork() const { return this->instanceNetwork_ != nullptr;};
    void deleteInstanceNetwork() { this->instanceNetwork_ = nullptr;};
    inline string instanceNetwork() const { DARABONBA_PTR_GET_DEFAULT(instanceNetwork_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceNetwork(string instanceNetwork) { DARABONBA_PTR_SET_VALUE(instanceNetwork_, instanceNetwork) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline string instancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


    // instanceSecurityGroupId Field Functions 
    bool hasInstanceSecurityGroupId() const { return this->instanceSecurityGroupId_ != nullptr;};
    void deleteInstanceSecurityGroupId() { this->instanceSecurityGroupId_ = nullptr;};
    inline string instanceSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceSecurityGroupId_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceSecurityGroupId(string instanceSecurityGroupId) { DARABONBA_PTR_SET_VALUE(instanceSecurityGroupId_, instanceSecurityGroupId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline string instanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


    // instanceVSwitchIds Field Functions 
    bool hasInstanceVSwitchIds() const { return this->instanceVSwitchIds_ != nullptr;};
    void deleteInstanceVSwitchIds() { this->instanceVSwitchIds_ = nullptr;};
    inline string instanceVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(instanceVSwitchIds_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceVSwitchIds(string instanceVSwitchIds) { DARABONBA_PTR_SET_VALUE(instanceVSwitchIds_, instanceVSwitchIds) };


    // instanceVpcId Field Functions 
    bool hasInstanceVpcId() const { return this->instanceVpcId_ != nullptr;};
    void deleteInstanceVpcId() { this->instanceVpcId_ = nullptr;};
    inline string instanceVpcId() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcId_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setInstanceVpcId(string instanceVpcId) { DARABONBA_PTR_SET_VALUE(instanceVpcId_, instanceVpcId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline float timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setTimestamp(float timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListUserDefinedEventSourcesResponseBodyDataEventSourceListSourceRocketMQParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The authentication type. This parameter can be set to ACL or left empty.
    std::shared_ptr<string> authType_ = nullptr;
    // The ID of the consumer group on the Message Queue for Apache RocketMQ instance.
    std::shared_ptr<string> groupId_ = nullptr;
    // The endpoint that is used to access the Message Queue for Apache RocketMQ instance.
    std::shared_ptr<string> instanceEndpoint_ = nullptr;
    // The ID of the Message Queue for Apache RocketMQ instance. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of network over which the Message Queue for Apache RocketMQ instance is accessed.
    std::shared_ptr<string> instanceNetwork_ = nullptr;
    // The password that is used to access the Message Queue for Apache RocketMQ instance.
    std::shared_ptr<string> instancePassword_ = nullptr;
    // The ID of the security group to which the Message Queue for Apache RocketMQ instance belongs.
    std::shared_ptr<string> instanceSecurityGroupId_ = nullptr;
    // The instance type. Valid values: CLOUD_4, CLOUD_5, and SELF_BUILT. The value CLOUD_4 indicates that the instance is a Message Queue for Apache RocketMQ 4.0 instance. The value CLOUD_5 indicates that the instance is a Message Queue for Apache RocketMQ 5.0 instance. The value SELF_BUILT indicates that the instance is a self-managed RocketMQ instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The username that is used to access the Message Queue for Apache RocketMQ instance.
    std::shared_ptr<string> instanceUsername_ = nullptr;
    // The ID of the vSwitch with which the Message Queue for Apache RocketMQ instance is associated.
    std::shared_ptr<string> instanceVSwitchIds_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the Message Queue for Apache RocketMQ instance is deployed.
    std::shared_ptr<string> instanceVpcId_ = nullptr;
    // The offset from which messages are consumed. Valid values:
    // 
    // *   CONSUME_FROM_LAST_OFFSET: Messages are consumed from the latest offset.
    // *   CONSUME_FROM_FIRST_OFFSET: Messages are consumed from the earliest offset.
    // *   CONSUME_FROM_TIMESTAMP: Messages are consumed from the offset at the specified point in time.
    // 
    // Default value: CONSUME_FROM_LAST_OFFSET.
    std::shared_ptr<string> offset_ = nullptr;
    // The ID of the region where the Message Queue for Apache RocketMQ instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tag that is used to filter messages.
    std::shared_ptr<string> tag_ = nullptr;
    // The timestamp that indicates the time from which messages are consumed. This parameter is valid only if Offset is set to CONSUME_FROM_TIMESTAMP.
    std::shared_ptr<float> timestamp_ = nullptr;
    // The name of the topic on the Message Queue for Apache RocketMQ instance. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
