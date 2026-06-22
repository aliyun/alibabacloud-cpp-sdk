// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODE_HPP_
#define ALIBABACLOUD_MODELS_NODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class Node : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Node& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaintenanceStatus, maintenanceStatus_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeState, nodeState_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, Node& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaintenanceStatus, maintenanceStatus_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeState, nodeState_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    Node() = default ;
    Node(const Node &) = default ;
    Node(Node &&) = default ;
    Node(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Node() = default ;
    Node& operator=(const Node &) = default ;
    Node& operator=(Node &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewDuration_ == nullptr && this->autoRenewDurationUnit_ == nullptr && this->createTime_ == nullptr && this->expireTime_ == nullptr && this->instanceType_ == nullptr
        && this->maintenanceStatus_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupType_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->nodeState_ == nullptr && this->privateIp_ == nullptr && this->publicIp_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline Node& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline Node& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewDurationUnit Field Functions 
    bool hasAutoRenewDurationUnit() const { return this->autoRenewDurationUnit_ != nullptr;};
    void deleteAutoRenewDurationUnit() { this->autoRenewDurationUnit_ = nullptr;};
    inline string getAutoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDurationUnit_, "") };
    inline Node& setAutoRenewDurationUnit(string autoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(autoRenewDurationUnit_, autoRenewDurationUnit) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Node& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline Node& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline Node& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maintenanceStatus Field Functions 
    bool hasMaintenanceStatus() const { return this->maintenanceStatus_ != nullptr;};
    void deleteMaintenanceStatus() { this->maintenanceStatus_ = nullptr;};
    inline string getMaintenanceStatus() const { DARABONBA_PTR_GET_DEFAULT(maintenanceStatus_, "") };
    inline Node& setMaintenanceStatus(string maintenanceStatus) { DARABONBA_PTR_SET_VALUE(maintenanceStatus_, maintenanceStatus) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline Node& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string getNodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline Node& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline Node& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline Node& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeState Field Functions 
    bool hasNodeState() const { return this->nodeState_ != nullptr;};
    void deleteNodeState() { this->nodeState_ = nullptr;};
    inline string getNodeState() const { DARABONBA_PTR_GET_DEFAULT(nodeState_, "") };
    inline Node& setNodeState(string nodeState) { DARABONBA_PTR_SET_VALUE(nodeState_, nodeState) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline Node& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline Node& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline Node& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Whether auto-renewal is enabled for the node. Valid values:
    // 
    // - true: Auto-renewal is enabled.
    // 
    // - false: Auto-renewal is disabled.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration for the node.
    shared_ptr<int32_t> autoRenewDuration_ {};
    // The unit of the auto-renewal duration.
    shared_ptr<string> autoRenewDurationUnit_ {};
    // The creation time of the node.
    shared_ptr<int64_t> createTime_ {};
    // The expiration time of the node.
    shared_ptr<int64_t> expireTime_ {};
    // The instance type of the node. This corresponds to an ECS instance type. You can call the ECS [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the available instance types.
    shared_ptr<string> instanceType_ {};
    // The maintenance status of the node. Valid values:
    // 
    // - ON: The node is in maintenance mode.
    // 
    // - OFF: The node is not in maintenance mode.
    // 
    // If this parameter is empty, the node is not in maintenance mode.
    shared_ptr<string> maintenanceStatus_ {};
    // The ID of the node group.
    shared_ptr<string> nodeGroupId_ {};
    // The type of the node group. Valid values:
    // 
    // - MASTER: A master node group.
    // 
    // - CORE: A core node group.
    // 
    // - TASK: A task node group.
    shared_ptr<string> nodeGroupType_ {};
    // The ID of the node.
    shared_ptr<string> nodeId_ {};
    // The name of the node.
    shared_ptr<string> nodeName_ {};
    // The state of the node. Valid values:
    // 
    // - Pending: The node is being created.
    // 
    // - Starting: The node is starting up.
    // 
    // - Running: The node is operational and running services.
    // 
    // - Stopping: The node is shutting down.
    // 
    // - Stopped: The node is powered off.
    // 
    // - Terminated: The node has been permanently deleted.
    shared_ptr<string> nodeState_ {};
    // The private IP address of the node.
    shared_ptr<string> privateIp_ {};
    // The public IP address of the node.
    shared_ptr<string> publicIp_ {};
    // The ID of the zone.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
