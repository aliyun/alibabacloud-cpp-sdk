// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEDBCLUSTERNODESDBCLUSTERNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEDBCLUSTERNODESDBCLUSTERNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ClassType, classType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryNode, disasterRecoveryNode_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeRegionId, nodeRegionId_);
      DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_TO_JSON(NodeZoneId, nodeZoneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ClassType, classType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryNode, disasterRecoveryNode_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeRegionId, nodeRegionId_);
      DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_FROM_JSON(NodeZoneId, nodeZoneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->classType_ == nullptr && return this->cpu_ == nullptr && return this->disasterRecoveryNode_ == nullptr && return this->memory_ == nullptr && return this->nodeId_ == nullptr
        && return this->nodeRegionId_ == nullptr && return this->nodeRole_ == nullptr && return this->nodeZoneId_ == nullptr && return this->status_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // classType Field Functions 
    bool hasClassType() const { return this->classType_ != nullptr;};
    void deleteClassType() { this->classType_ = nullptr;};
    inline string classType() const { DARABONBA_PTR_GET_DEFAULT(classType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setClassType(string classType) { DARABONBA_PTR_SET_VALUE(classType_, classType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // disasterRecoveryNode Field Functions 
    bool hasDisasterRecoveryNode() const { return this->disasterRecoveryNode_ != nullptr;};
    void deleteDisasterRecoveryNode() { this->disasterRecoveryNode_ = nullptr;};
    inline bool disasterRecoveryNode() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryNode_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setDisasterRecoveryNode(bool disasterRecoveryNode) { DARABONBA_PTR_SET_VALUE(disasterRecoveryNode_, disasterRecoveryNode) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeRegionId Field Functions 
    bool hasNodeRegionId() const { return this->nodeRegionId_ != nullptr;};
    void deleteNodeRegionId() { this->nodeRegionId_ = nullptr;};
    inline string nodeRegionId() const { DARABONBA_PTR_GET_DEFAULT(nodeRegionId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setNodeRegionId(string nodeRegionId) { DARABONBA_PTR_SET_VALUE(nodeRegionId_, nodeRegionId) };


    // nodeRole Field Functions 
    bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
    void deleteNodeRole() { this->nodeRole_ = nullptr;};
    inline string nodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


    // nodeZoneId Field Functions 
    bool hasNodeZoneId() const { return this->nodeZoneId_ != nullptr;};
    void deleteNodeZoneId() { this->nodeZoneId_ = nullptr;};
    inline string nodeZoneId() const { DARABONBA_PTR_GET_DEFAULT(nodeZoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setNodeZoneId(string nodeZoneId) { DARABONBA_PTR_SET_VALUE(nodeZoneId_, nodeZoneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeDBClusterNodesDBClusterNode& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The node specification.
    std::shared_ptr<string> classCode_ = nullptr;
    // The node type. Default value: true. Valid values:
    // 
    // *   d: dedicated node type
    // *   x: general-purpose node type
    std::shared_ptr<string> classType_ = nullptr;
    // The number of CPU cores of the node.
    std::shared_ptr<string> cpu_ = nullptr;
    std::shared_ptr<bool> disasterRecoveryNode_ = nullptr;
    // The memory capacity of the node. Unit: MB.
    std::shared_ptr<string> memory_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> nodeRegionId_ = nullptr;
    // The role of the node. Valid values:
    // 
    // *   **primary**
    // *   **secondary**
    std::shared_ptr<string> nodeRole_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> nodeZoneId_ = nullptr;
    // The node status. Valid values:
    // 
    // *   active
    // *   creating
    // *   deleting
    // *   classchanging
    // *   restarting
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
