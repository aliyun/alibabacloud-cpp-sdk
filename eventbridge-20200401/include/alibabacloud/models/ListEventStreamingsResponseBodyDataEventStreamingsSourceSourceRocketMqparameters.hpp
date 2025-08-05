// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCESOURCEROCKETMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSOURCESOURCEROCKETMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_TO_JSON(FilterSql, filterSql_);
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
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_FROM_JSON(FilterSql, filterSql_);
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
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters(ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->bodyDataType_ != nullptr && this->filterSql_ != nullptr && this->filterType_ != nullptr && this->groupID_ != nullptr && this->instanceEndpoint_ != nullptr
        && this->instanceId_ != nullptr && this->instanceNetwork_ != nullptr && this->instancePassword_ != nullptr && this->instanceSecurityGroupId_ != nullptr && this->instanceType_ != nullptr
        && this->instanceUsername_ != nullptr && this->instanceVSwitchIds_ != nullptr && this->instanceVpcId_ != nullptr && this->network_ != nullptr && this->offset_ != nullptr
        && this->regionId_ != nullptr && this->securityGroupId_ != nullptr && this->tag_ != nullptr && this->timestamp_ != nullptr && this->topic_ != nullptr
        && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // bodyDataType Field Functions 
    bool hasBodyDataType() const { return this->bodyDataType_ != nullptr;};
    void deleteBodyDataType() { this->bodyDataType_ = nullptr;};
    inline string bodyDataType() const { DARABONBA_PTR_GET_DEFAULT(bodyDataType_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setBodyDataType(string bodyDataType) { DARABONBA_PTR_SET_VALUE(bodyDataType_, bodyDataType) };


    // filterSql Field Functions 
    bool hasFilterSql() const { return this->filterSql_ != nullptr;};
    void deleteFilterSql() { this->filterSql_ = nullptr;};
    inline string filterSql() const { DARABONBA_PTR_GET_DEFAULT(filterSql_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setFilterSql(string filterSql) { DARABONBA_PTR_SET_VALUE(filterSql_, filterSql) };


    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string filterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // groupID Field Functions 
    bool hasGroupID() const { return this->groupID_ != nullptr;};
    void deleteGroupID() { this->groupID_ = nullptr;};
    inline string groupID() const { DARABONBA_PTR_GET_DEFAULT(groupID_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setGroupID(string groupID) { DARABONBA_PTR_SET_VALUE(groupID_, groupID) };


    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline string instanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceNetwork Field Functions 
    bool hasInstanceNetwork() const { return this->instanceNetwork_ != nullptr;};
    void deleteInstanceNetwork() { this->instanceNetwork_ = nullptr;};
    inline string instanceNetwork() const { DARABONBA_PTR_GET_DEFAULT(instanceNetwork_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceNetwork(string instanceNetwork) { DARABONBA_PTR_SET_VALUE(instanceNetwork_, instanceNetwork) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline string instancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


    // instanceSecurityGroupId Field Functions 
    bool hasInstanceSecurityGroupId() const { return this->instanceSecurityGroupId_ != nullptr;};
    void deleteInstanceSecurityGroupId() { this->instanceSecurityGroupId_ = nullptr;};
    inline string instanceSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceSecurityGroupId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceSecurityGroupId(string instanceSecurityGroupId) { DARABONBA_PTR_SET_VALUE(instanceSecurityGroupId_, instanceSecurityGroupId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline string instanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


    // instanceVSwitchIds Field Functions 
    bool hasInstanceVSwitchIds() const { return this->instanceVSwitchIds_ != nullptr;};
    void deleteInstanceVSwitchIds() { this->instanceVSwitchIds_ = nullptr;};
    inline string instanceVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(instanceVSwitchIds_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceVSwitchIds(string instanceVSwitchIds) { DARABONBA_PTR_SET_VALUE(instanceVSwitchIds_, instanceVSwitchIds) };


    // instanceVpcId Field Functions 
    bool hasInstanceVpcId() const { return this->instanceVpcId_ != nullptr;};
    void deleteInstanceVpcId() { this->instanceVpcId_ = nullptr;};
    inline string instanceVpcId() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setInstanceVpcId(string instanceVpcId) { DARABONBA_PTR_SET_VALUE(instanceVpcId_, instanceVpcId) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline string offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSourceSourceRocketMQParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The authentication method.
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<string> bodyDataType_ = nullptr;
    std::shared_ptr<string> filterSql_ = nullptr;
    std::shared_ptr<string> filterType_ = nullptr;
    // The ID of the consumer group on the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<string> groupID_ = nullptr;
    // The endpoint that is used to access the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<string> instanceEndpoint_ = nullptr;
    // The ID of the ApsaraMQ for RocketMQ instance
    std::shared_ptr<string> instanceId_ = nullptr;
    // The network type of the ApsaraMQ for RocketMQ instance. Valid values:
    // 
    // *   PublicNetwork
    // *   PrivateNetwork
    std::shared_ptr<string> instanceNetwork_ = nullptr;
    // The password that is used to access the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<string> instancePassword_ = nullptr;
    // The ID of the security group to which the ApsaraMQ for RocketMQ instance belongs.
    std::shared_ptr<string> instanceSecurityGroupId_ = nullptr;
    // The type of the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The username that is used to access the ApsaraMQ for RocketMQ instance.
    std::shared_ptr<string> instanceUsername_ = nullptr;
    // The ID of the vSwitch with which the ApsaraMQ for RocketMQ instance is associated.
    std::shared_ptr<string> instanceVSwitchIds_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the ApsaraMQ for RocketMQ instance belongs.
    std::shared_ptr<string> instanceVpcId_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    // The offset from which messages are consumed. Valid values: CONSUMEFROMLASTOFFSET: Messages are consumed from the latest offset. CONSUMEFROMFIRSTOFFSET: Messages are consumed from the earliest offset. CONSUME_FROM_TIMESTAMP: Messages are consumed from the offset at the specified point in time.
    std::shared_ptr<string> offset_ = nullptr;
    // The ID of the region where the ApsaraMQ for RocketMQ instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The tag that is used to filter messages.
    std::shared_ptr<string> tag_ = nullptr;
    // The timestamp that indicates the time from which messages are consumed. This parameter is valid only if Offset is set to CONSUMEFROMTIMESTAMP.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The topic from which messages are sent.
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
