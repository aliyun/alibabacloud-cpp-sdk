// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDiagnosisSummaryResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDiagnosisSummaryResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(NodeAddress, nodeAddress_);
      DARABONBA_PTR_TO_JSON(NodeCID, nodeCID_);
      DARABONBA_PTR_TO_JSON(NodeID, nodeID_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodePort, nodePort_);
      DARABONBA_PTR_TO_JSON(NodePreferredRole, nodePreferredRole_);
      DARABONBA_PTR_TO_JSON(NodeReplicationMode, nodeReplicationMode_);
      DARABONBA_PTR_TO_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDiagnosisSummaryResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(NodeAddress, nodeAddress_);
      DARABONBA_PTR_FROM_JSON(NodeCID, nodeCID_);
      DARABONBA_PTR_FROM_JSON(NodeID, nodeID_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodePort, nodePort_);
      DARABONBA_PTR_FROM_JSON(NodePreferredRole, nodePreferredRole_);
      DARABONBA_PTR_FROM_JSON(NodeReplicationMode, nodeReplicationMode_);
      DARABONBA_PTR_FROM_JSON(NodeRole, nodeRole_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    DescribeDBInstanceDiagnosisSummaryResponseBodyItems() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodyItems(const DescribeDBInstanceDiagnosisSummaryResponseBodyItems &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodyItems(DescribeDBInstanceDiagnosisSummaryResponseBodyItems &&) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDiagnosisSummaryResponseBodyItems() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodyItems& operator=(const DescribeDBInstanceDiagnosisSummaryResponseBodyItems &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodyItems& operator=(DescribeDBInstanceDiagnosisSummaryResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostname_ != nullptr
        && this->nodeAddress_ != nullptr && this->nodeCID_ != nullptr && this->nodeID_ != nullptr && this->nodeName_ != nullptr && this->nodePort_ != nullptr
        && this->nodePreferredRole_ != nullptr && this->nodeReplicationMode_ != nullptr && this->nodeRole_ != nullptr && this->nodeStatus_ != nullptr && this->nodeType_ != nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // nodeAddress Field Functions 
    bool hasNodeAddress() const { return this->nodeAddress_ != nullptr;};
    void deleteNodeAddress() { this->nodeAddress_ = nullptr;};
    inline string nodeAddress() const { DARABONBA_PTR_GET_DEFAULT(nodeAddress_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeAddress(string nodeAddress) { DARABONBA_PTR_SET_VALUE(nodeAddress_, nodeAddress) };


    // nodeCID Field Functions 
    bool hasNodeCID() const { return this->nodeCID_ != nullptr;};
    void deleteNodeCID() { this->nodeCID_ = nullptr;};
    inline string nodeCID() const { DARABONBA_PTR_GET_DEFAULT(nodeCID_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeCID(string nodeCID) { DARABONBA_PTR_SET_VALUE(nodeCID_, nodeCID) };


    // nodeID Field Functions 
    bool hasNodeID() const { return this->nodeID_ != nullptr;};
    void deleteNodeID() { this->nodeID_ = nullptr;};
    inline string nodeID() const { DARABONBA_PTR_GET_DEFAULT(nodeID_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeID(string nodeID) { DARABONBA_PTR_SET_VALUE(nodeID_, nodeID) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodePort Field Functions 
    bool hasNodePort() const { return this->nodePort_ != nullptr;};
    void deleteNodePort() { this->nodePort_ = nullptr;};
    inline string nodePort() const { DARABONBA_PTR_GET_DEFAULT(nodePort_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodePort(string nodePort) { DARABONBA_PTR_SET_VALUE(nodePort_, nodePort) };


    // nodePreferredRole Field Functions 
    bool hasNodePreferredRole() const { return this->nodePreferredRole_ != nullptr;};
    void deleteNodePreferredRole() { this->nodePreferredRole_ = nullptr;};
    inline string nodePreferredRole() const { DARABONBA_PTR_GET_DEFAULT(nodePreferredRole_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodePreferredRole(string nodePreferredRole) { DARABONBA_PTR_SET_VALUE(nodePreferredRole_, nodePreferredRole) };


    // nodeReplicationMode Field Functions 
    bool hasNodeReplicationMode() const { return this->nodeReplicationMode_ != nullptr;};
    void deleteNodeReplicationMode() { this->nodeReplicationMode_ = nullptr;};
    inline string nodeReplicationMode() const { DARABONBA_PTR_GET_DEFAULT(nodeReplicationMode_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeReplicationMode(string nodeReplicationMode) { DARABONBA_PTR_SET_VALUE(nodeReplicationMode_, nodeReplicationMode) };


    // nodeRole Field Functions 
    bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
    void deleteNodeRole() { this->nodeRole_ = nullptr;};
    inline string nodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodyItems& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    // The name of the node.
    std::shared_ptr<string> hostname_ = nullptr;
    // The IP address of the node.
    std::shared_ptr<string> nodeAddress_ = nullptr;
    // The node group ID.
    std::shared_ptr<string> nodeCID_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeID_ = nullptr;
    // The name of the host where the node resides.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The port number of the node.
    std::shared_ptr<string> nodePort_ = nullptr;
    // The initial role of the node. Valid values:
    // 
    // *   **primary**: primary node.
    // *   **mirror**: secondary node.
    // 
    // If the value of this parameter is the same as that of **NodeRole**, no primary/secondary switchover occurs. If the value of this parameter is different from that of **NodeRole**, a primary/secondary switchover occurs.
    std::shared_ptr<string> nodePreferredRole_ = nullptr;
    // The data synchronization state of the node. Valid values:
    // 
    // *   **Synced**: The node data is synchronized.
    // *   **Not Syncing**: The node data is not synchronized.
    // *   **No sync required**: Data synchronization is not required. This value may be returned only for the coordinator node.
    std::shared_ptr<string> nodeReplicationMode_ = nullptr;
    // The current role of the node. Valid values:
    // 
    // *   **primary**: primary node.
    // *   **mirror**: secondary node.
    std::shared_ptr<string> nodeRole_ = nullptr;
    // The running state of the node. Valid values:
    // 
    // *   **UP**: The node is running.
    // *   **DOWN**: The node is faulty.
    std::shared_ptr<string> nodeStatus_ = nullptr;
    // The type of the node. Valid values:
    // 
    // *   **master**: primary coordinator node.
    // *   **slave**: standby coordinator node.
    // *   **segment**: compute node.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
