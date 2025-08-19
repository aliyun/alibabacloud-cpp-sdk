// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCEROCKETMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SOURCEROCKETMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class SourceRocketMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceRocketMQParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(FilterType, filterType_);
      DARABONBA_PTR_TO_JSON(GroupID, groupID_);
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
    friend void from_json(const Darabonba::Json& j, SourceRocketMQParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
      DARABONBA_PTR_FROM_JSON(GroupID, groupID_);
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
    SourceRocketMQParameters() = default ;
    SourceRocketMQParameters(const SourceRocketMQParameters &) = default ;
    SourceRocketMQParameters(SourceRocketMQParameters &&) = default ;
    SourceRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceRocketMQParameters() = default ;
    SourceRocketMQParameters& operator=(const SourceRocketMQParameters &) = default ;
    SourceRocketMQParameters& operator=(SourceRocketMQParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->filterType_ != nullptr && this->groupID_ != nullptr && this->instanceEndpoint_ != nullptr && this->instanceId_ != nullptr && this->instanceNetwork_ != nullptr
        && this->instancePassword_ != nullptr && this->instanceSecurityGroupId_ != nullptr && this->instanceType_ != nullptr && this->instanceUsername_ != nullptr && this->instanceVSwitchIds_ != nullptr
        && this->instanceVpcId_ != nullptr && this->offset_ != nullptr && this->regionId_ != nullptr && this->tag_ != nullptr && this->timestamp_ != nullptr
        && this->topic_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline SourceRocketMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string filterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline SourceRocketMQParameters& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // groupID Field Functions 
    bool hasGroupID() const { return this->groupID_ != nullptr;};
    void deleteGroupID() { this->groupID_ = nullptr;};
    inline string groupID() const { DARABONBA_PTR_GET_DEFAULT(groupID_, "") };
    inline SourceRocketMQParameters& setGroupID(string groupID) { DARABONBA_PTR_SET_VALUE(groupID_, groupID) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline string instanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
    inline SourceRocketMQParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SourceRocketMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceNetwork Field Functions 
    bool hasInstanceNetwork() const { return this->instanceNetwork_ != nullptr;};
    void deleteInstanceNetwork() { this->instanceNetwork_ = nullptr;};
    inline string instanceNetwork() const { DARABONBA_PTR_GET_DEFAULT(instanceNetwork_, "") };
    inline SourceRocketMQParameters& setInstanceNetwork(string instanceNetwork) { DARABONBA_PTR_SET_VALUE(instanceNetwork_, instanceNetwork) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline string instancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
    inline SourceRocketMQParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


    // instanceSecurityGroupId Field Functions 
    bool hasInstanceSecurityGroupId() const { return this->instanceSecurityGroupId_ != nullptr;};
    void deleteInstanceSecurityGroupId() { this->instanceSecurityGroupId_ = nullptr;};
    inline string instanceSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceSecurityGroupId_, "") };
    inline SourceRocketMQParameters& setInstanceSecurityGroupId(string instanceSecurityGroupId) { DARABONBA_PTR_SET_VALUE(instanceSecurityGroupId_, instanceSecurityGroupId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SourceRocketMQParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline string instanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
    inline SourceRocketMQParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


    // instanceVSwitchIds Field Functions 
    bool hasInstanceVSwitchIds() const { return this->instanceVSwitchIds_ != nullptr;};
    void deleteInstanceVSwitchIds() { this->instanceVSwitchIds_ = nullptr;};
    inline string instanceVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(instanceVSwitchIds_, "") };
    inline SourceRocketMQParameters& setInstanceVSwitchIds(string instanceVSwitchIds) { DARABONBA_PTR_SET_VALUE(instanceVSwitchIds_, instanceVSwitchIds) };


    // instanceVpcId Field Functions 
    bool hasInstanceVpcId() const { return this->instanceVpcId_ != nullptr;};
    void deleteInstanceVpcId() { this->instanceVpcId_ = nullptr;};
    inline string instanceVpcId() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcId_, "") };
    inline SourceRocketMQParameters& setInstanceVpcId(string instanceVpcId) { DARABONBA_PTR_SET_VALUE(instanceVpcId_, instanceVpcId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline SourceRocketMQParameters& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SourceRocketMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline SourceRocketMQParameters& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline SourceRocketMQParameters& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline SourceRocketMQParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<string> filterType_ = nullptr;
    std::shared_ptr<string> groupID_ = nullptr;
    std::shared_ptr<string> instanceEndpoint_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceNetwork_ = nullptr;
    std::shared_ptr<string> instancePassword_ = nullptr;
    std::shared_ptr<string> instanceSecurityGroupId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> instanceUsername_ = nullptr;
    std::shared_ptr<string> instanceVSwitchIds_ = nullptr;
    std::shared_ptr<string> instanceVpcId_ = nullptr;
    std::shared_ptr<string> offset_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<int32_t> timestamp_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
