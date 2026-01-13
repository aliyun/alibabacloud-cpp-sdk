// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDiagnosisSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDiagnosisSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MasterStatusInfo, masterStatusInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SegmentStatusInfo, segmentStatusInfo_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDiagnosisSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MasterStatusInfo, masterStatusInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SegmentStatusInfo, segmentStatusInfo_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstanceDiagnosisSummaryResponseBody() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody(const DescribeDBInstanceDiagnosisSummaryResponseBody &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody(DescribeDBInstanceDiagnosisSummaryResponseBody &&) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDiagnosisSummaryResponseBody() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody& operator=(const DescribeDBInstanceDiagnosisSummaryResponseBody &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBody& operator=(DescribeDBInstanceDiagnosisSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SegmentStatusInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SegmentStatusInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ExceptionNodeNum, exceptionNodeNum_);
        DARABONBA_PTR_TO_JSON(NormalNodeNum, normalNodeNum_);
        DARABONBA_PTR_TO_JSON(NotPreferredNodeNum, notPreferredNodeNum_);
        DARABONBA_PTR_TO_JSON(NotSyncingNodeNum, notSyncingNodeNum_);
        DARABONBA_PTR_TO_JSON(PreferredNodeNum, preferredNodeNum_);
        DARABONBA_PTR_TO_JSON(SyncedNodeNum, syncedNodeNum_);
      };
      friend void from_json(const Darabonba::Json& j, SegmentStatusInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ExceptionNodeNum, exceptionNodeNum_);
        DARABONBA_PTR_FROM_JSON(NormalNodeNum, normalNodeNum_);
        DARABONBA_PTR_FROM_JSON(NotPreferredNodeNum, notPreferredNodeNum_);
        DARABONBA_PTR_FROM_JSON(NotSyncingNodeNum, notSyncingNodeNum_);
        DARABONBA_PTR_FROM_JSON(PreferredNodeNum, preferredNodeNum_);
        DARABONBA_PTR_FROM_JSON(SyncedNodeNum, syncedNodeNum_);
      };
      SegmentStatusInfo() = default ;
      SegmentStatusInfo(const SegmentStatusInfo &) = default ;
      SegmentStatusInfo(SegmentStatusInfo &&) = default ;
      SegmentStatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SegmentStatusInfo() = default ;
      SegmentStatusInfo& operator=(const SegmentStatusInfo &) = default ;
      SegmentStatusInfo& operator=(SegmentStatusInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exceptionNodeNum_ == nullptr
        && this->normalNodeNum_ == nullptr && this->notPreferredNodeNum_ == nullptr && this->notSyncingNodeNum_ == nullptr && this->preferredNodeNum_ == nullptr && this->syncedNodeNum_ == nullptr; };
      // exceptionNodeNum Field Functions 
      bool hasExceptionNodeNum() const { return this->exceptionNodeNum_ != nullptr;};
      void deleteExceptionNodeNum() { this->exceptionNodeNum_ = nullptr;};
      inline int32_t getExceptionNodeNum() const { DARABONBA_PTR_GET_DEFAULT(exceptionNodeNum_, 0) };
      inline SegmentStatusInfo& setExceptionNodeNum(int32_t exceptionNodeNum) { DARABONBA_PTR_SET_VALUE(exceptionNodeNum_, exceptionNodeNum) };


      // normalNodeNum Field Functions 
      bool hasNormalNodeNum() const { return this->normalNodeNum_ != nullptr;};
      void deleteNormalNodeNum() { this->normalNodeNum_ = nullptr;};
      inline int32_t getNormalNodeNum() const { DARABONBA_PTR_GET_DEFAULT(normalNodeNum_, 0) };
      inline SegmentStatusInfo& setNormalNodeNum(int32_t normalNodeNum) { DARABONBA_PTR_SET_VALUE(normalNodeNum_, normalNodeNum) };


      // notPreferredNodeNum Field Functions 
      bool hasNotPreferredNodeNum() const { return this->notPreferredNodeNum_ != nullptr;};
      void deleteNotPreferredNodeNum() { this->notPreferredNodeNum_ = nullptr;};
      inline int32_t getNotPreferredNodeNum() const { DARABONBA_PTR_GET_DEFAULT(notPreferredNodeNum_, 0) };
      inline SegmentStatusInfo& setNotPreferredNodeNum(int32_t notPreferredNodeNum) { DARABONBA_PTR_SET_VALUE(notPreferredNodeNum_, notPreferredNodeNum) };


      // notSyncingNodeNum Field Functions 
      bool hasNotSyncingNodeNum() const { return this->notSyncingNodeNum_ != nullptr;};
      void deleteNotSyncingNodeNum() { this->notSyncingNodeNum_ = nullptr;};
      inline int32_t getNotSyncingNodeNum() const { DARABONBA_PTR_GET_DEFAULT(notSyncingNodeNum_, 0) };
      inline SegmentStatusInfo& setNotSyncingNodeNum(int32_t notSyncingNodeNum) { DARABONBA_PTR_SET_VALUE(notSyncingNodeNum_, notSyncingNodeNum) };


      // preferredNodeNum Field Functions 
      bool hasPreferredNodeNum() const { return this->preferredNodeNum_ != nullptr;};
      void deletePreferredNodeNum() { this->preferredNodeNum_ = nullptr;};
      inline int32_t getPreferredNodeNum() const { DARABONBA_PTR_GET_DEFAULT(preferredNodeNum_, 0) };
      inline SegmentStatusInfo& setPreferredNodeNum(int32_t preferredNodeNum) { DARABONBA_PTR_SET_VALUE(preferredNodeNum_, preferredNodeNum) };


      // syncedNodeNum Field Functions 
      bool hasSyncedNodeNum() const { return this->syncedNodeNum_ != nullptr;};
      void deleteSyncedNodeNum() { this->syncedNodeNum_ = nullptr;};
      inline int32_t getSyncedNodeNum() const { DARABONBA_PTR_GET_DEFAULT(syncedNodeNum_, 0) };
      inline SegmentStatusInfo& setSyncedNodeNum(int32_t syncedNodeNum) { DARABONBA_PTR_SET_VALUE(syncedNodeNum_, syncedNodeNum) };


    protected:
      // The number of abnormal nodes.
      shared_ptr<int32_t> exceptionNodeNum_ {};
      // The number of normal nodes.
      shared_ptr<int32_t> normalNodeNum_ {};
      // The number of nodes whose roles are reversed.
      shared_ptr<int32_t> notPreferredNodeNum_ {};
      // The number of unsynchronized nodes.
      shared_ptr<int32_t> notSyncingNodeNum_ {};
      // The number of nodes whose roles are normal.
      shared_ptr<int32_t> preferredNodeNum_ {};
      // The number of synchronized nodes.
      shared_ptr<int32_t> syncedNodeNum_ {};
    };

    class MasterStatusInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MasterStatusInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ExceptionNodeNum, exceptionNodeNum_);
        DARABONBA_PTR_TO_JSON(NormalNodeNum, normalNodeNum_);
        DARABONBA_PTR_TO_JSON(NotPreferredNodeNum, notPreferredNodeNum_);
        DARABONBA_PTR_TO_JSON(NotSyncingNodeNum, notSyncingNodeNum_);
        DARABONBA_PTR_TO_JSON(PreferredNodeNum, preferredNodeNum_);
        DARABONBA_PTR_TO_JSON(SyncedNodeNum, syncedNodeNum_);
      };
      friend void from_json(const Darabonba::Json& j, MasterStatusInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ExceptionNodeNum, exceptionNodeNum_);
        DARABONBA_PTR_FROM_JSON(NormalNodeNum, normalNodeNum_);
        DARABONBA_PTR_FROM_JSON(NotPreferredNodeNum, notPreferredNodeNum_);
        DARABONBA_PTR_FROM_JSON(NotSyncingNodeNum, notSyncingNodeNum_);
        DARABONBA_PTR_FROM_JSON(PreferredNodeNum, preferredNodeNum_);
        DARABONBA_PTR_FROM_JSON(SyncedNodeNum, syncedNodeNum_);
      };
      MasterStatusInfo() = default ;
      MasterStatusInfo(const MasterStatusInfo &) = default ;
      MasterStatusInfo(MasterStatusInfo &&) = default ;
      MasterStatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MasterStatusInfo() = default ;
      MasterStatusInfo& operator=(const MasterStatusInfo &) = default ;
      MasterStatusInfo& operator=(MasterStatusInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exceptionNodeNum_ == nullptr
        && this->normalNodeNum_ == nullptr && this->notPreferredNodeNum_ == nullptr && this->notSyncingNodeNum_ == nullptr && this->preferredNodeNum_ == nullptr && this->syncedNodeNum_ == nullptr; };
      // exceptionNodeNum Field Functions 
      bool hasExceptionNodeNum() const { return this->exceptionNodeNum_ != nullptr;};
      void deleteExceptionNodeNum() { this->exceptionNodeNum_ = nullptr;};
      inline int32_t getExceptionNodeNum() const { DARABONBA_PTR_GET_DEFAULT(exceptionNodeNum_, 0) };
      inline MasterStatusInfo& setExceptionNodeNum(int32_t exceptionNodeNum) { DARABONBA_PTR_SET_VALUE(exceptionNodeNum_, exceptionNodeNum) };


      // normalNodeNum Field Functions 
      bool hasNormalNodeNum() const { return this->normalNodeNum_ != nullptr;};
      void deleteNormalNodeNum() { this->normalNodeNum_ = nullptr;};
      inline int32_t getNormalNodeNum() const { DARABONBA_PTR_GET_DEFAULT(normalNodeNum_, 0) };
      inline MasterStatusInfo& setNormalNodeNum(int32_t normalNodeNum) { DARABONBA_PTR_SET_VALUE(normalNodeNum_, normalNodeNum) };


      // notPreferredNodeNum Field Functions 
      bool hasNotPreferredNodeNum() const { return this->notPreferredNodeNum_ != nullptr;};
      void deleteNotPreferredNodeNum() { this->notPreferredNodeNum_ = nullptr;};
      inline int32_t getNotPreferredNodeNum() const { DARABONBA_PTR_GET_DEFAULT(notPreferredNodeNum_, 0) };
      inline MasterStatusInfo& setNotPreferredNodeNum(int32_t notPreferredNodeNum) { DARABONBA_PTR_SET_VALUE(notPreferredNodeNum_, notPreferredNodeNum) };


      // notSyncingNodeNum Field Functions 
      bool hasNotSyncingNodeNum() const { return this->notSyncingNodeNum_ != nullptr;};
      void deleteNotSyncingNodeNum() { this->notSyncingNodeNum_ = nullptr;};
      inline int32_t getNotSyncingNodeNum() const { DARABONBA_PTR_GET_DEFAULT(notSyncingNodeNum_, 0) };
      inline MasterStatusInfo& setNotSyncingNodeNum(int32_t notSyncingNodeNum) { DARABONBA_PTR_SET_VALUE(notSyncingNodeNum_, notSyncingNodeNum) };


      // preferredNodeNum Field Functions 
      bool hasPreferredNodeNum() const { return this->preferredNodeNum_ != nullptr;};
      void deletePreferredNodeNum() { this->preferredNodeNum_ = nullptr;};
      inline int32_t getPreferredNodeNum() const { DARABONBA_PTR_GET_DEFAULT(preferredNodeNum_, 0) };
      inline MasterStatusInfo& setPreferredNodeNum(int32_t preferredNodeNum) { DARABONBA_PTR_SET_VALUE(preferredNodeNum_, preferredNodeNum) };


      // syncedNodeNum Field Functions 
      bool hasSyncedNodeNum() const { return this->syncedNodeNum_ != nullptr;};
      void deleteSyncedNodeNum() { this->syncedNodeNum_ = nullptr;};
      inline int32_t getSyncedNodeNum() const { DARABONBA_PTR_GET_DEFAULT(syncedNodeNum_, 0) };
      inline MasterStatusInfo& setSyncedNodeNum(int32_t syncedNodeNum) { DARABONBA_PTR_SET_VALUE(syncedNodeNum_, syncedNodeNum) };


    protected:
      // The number of abnormal nodes.
      shared_ptr<int32_t> exceptionNodeNum_ {};
      // The number of normal nodes.
      shared_ptr<int32_t> normalNodeNum_ {};
      // The number of nodes whose roles are reversed.
      shared_ptr<int32_t> notPreferredNodeNum_ {};
      // The number of unsynchronized nodes.
      shared_ptr<int32_t> notSyncingNodeNum_ {};
      // The number of nodes whose roles are normal.
      shared_ptr<int32_t> preferredNodeNum_ {};
      // The number of synchronized nodes.
      shared_ptr<int32_t> syncedNodeNum_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostname_ == nullptr
        && this->nodeAddress_ == nullptr && this->nodeCID_ == nullptr && this->nodeID_ == nullptr && this->nodeName_ == nullptr && this->nodePort_ == nullptr
        && this->nodePreferredRole_ == nullptr && this->nodeReplicationMode_ == nullptr && this->nodeRole_ == nullptr && this->nodeStatus_ == nullptr && this->nodeType_ == nullptr; };
      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Items& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // nodeAddress Field Functions 
      bool hasNodeAddress() const { return this->nodeAddress_ != nullptr;};
      void deleteNodeAddress() { this->nodeAddress_ = nullptr;};
      inline string getNodeAddress() const { DARABONBA_PTR_GET_DEFAULT(nodeAddress_, "") };
      inline Items& setNodeAddress(string nodeAddress) { DARABONBA_PTR_SET_VALUE(nodeAddress_, nodeAddress) };


      // nodeCID Field Functions 
      bool hasNodeCID() const { return this->nodeCID_ != nullptr;};
      void deleteNodeCID() { this->nodeCID_ = nullptr;};
      inline string getNodeCID() const { DARABONBA_PTR_GET_DEFAULT(nodeCID_, "") };
      inline Items& setNodeCID(string nodeCID) { DARABONBA_PTR_SET_VALUE(nodeCID_, nodeCID) };


      // nodeID Field Functions 
      bool hasNodeID() const { return this->nodeID_ != nullptr;};
      void deleteNodeID() { this->nodeID_ = nullptr;};
      inline string getNodeID() const { DARABONBA_PTR_GET_DEFAULT(nodeID_, "") };
      inline Items& setNodeID(string nodeID) { DARABONBA_PTR_SET_VALUE(nodeID_, nodeID) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Items& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // nodePort Field Functions 
      bool hasNodePort() const { return this->nodePort_ != nullptr;};
      void deleteNodePort() { this->nodePort_ = nullptr;};
      inline string getNodePort() const { DARABONBA_PTR_GET_DEFAULT(nodePort_, "") };
      inline Items& setNodePort(string nodePort) { DARABONBA_PTR_SET_VALUE(nodePort_, nodePort) };


      // nodePreferredRole Field Functions 
      bool hasNodePreferredRole() const { return this->nodePreferredRole_ != nullptr;};
      void deleteNodePreferredRole() { this->nodePreferredRole_ = nullptr;};
      inline string getNodePreferredRole() const { DARABONBA_PTR_GET_DEFAULT(nodePreferredRole_, "") };
      inline Items& setNodePreferredRole(string nodePreferredRole) { DARABONBA_PTR_SET_VALUE(nodePreferredRole_, nodePreferredRole) };


      // nodeReplicationMode Field Functions 
      bool hasNodeReplicationMode() const { return this->nodeReplicationMode_ != nullptr;};
      void deleteNodeReplicationMode() { this->nodeReplicationMode_ = nullptr;};
      inline string getNodeReplicationMode() const { DARABONBA_PTR_GET_DEFAULT(nodeReplicationMode_, "") };
      inline Items& setNodeReplicationMode(string nodeReplicationMode) { DARABONBA_PTR_SET_VALUE(nodeReplicationMode_, nodeReplicationMode) };


      // nodeRole Field Functions 
      bool hasNodeRole() const { return this->nodeRole_ != nullptr;};
      void deleteNodeRole() { this->nodeRole_ = nullptr;};
      inline string getNodeRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRole_, "") };
      inline Items& setNodeRole(string nodeRole) { DARABONBA_PTR_SET_VALUE(nodeRole_, nodeRole) };


      // nodeStatus Field Functions 
      bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
      void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
      inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
      inline Items& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Items& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    protected:
      // The name of the node.
      shared_ptr<string> hostname_ {};
      // The IP address of the node.
      shared_ptr<string> nodeAddress_ {};
      // The node group ID.
      shared_ptr<string> nodeCID_ {};
      // The node ID.
      shared_ptr<string> nodeID_ {};
      // The name of the host where the node resides.
      shared_ptr<string> nodeName_ {};
      // The port number of the node.
      shared_ptr<string> nodePort_ {};
      // The initial role of the node. Valid values:
      // 
      // *   **primary**: primary node.
      // *   **mirror**: secondary node.
      // 
      // If the value of this parameter is the same as that of **NodeRole**, no primary/secondary switchover occurs. If the value of this parameter is different from that of **NodeRole**, a primary/secondary switchover occurs.
      shared_ptr<string> nodePreferredRole_ {};
      // The data synchronization state of the node. Valid values:
      // 
      // *   **Synced**: The node data is synchronized.
      // *   **Not Syncing**: The node data is not synchronized.
      // *   **No sync required**: Data synchronization is not required. This value may be returned only for the coordinator node.
      shared_ptr<string> nodeReplicationMode_ {};
      // The current role of the node. Valid values:
      // 
      // *   **primary**: primary node.
      // *   **mirror**: secondary node.
      shared_ptr<string> nodeRole_ {};
      // The running state of the node. Valid values:
      // 
      // *   **UP**: The node is running.
      // *   **DOWN**: The node is faulty.
      shared_ptr<string> nodeStatus_ {};
      // The type of the node. Valid values:
      // 
      // *   **master**: primary coordinator node.
      // *   **slave**: standby coordinator node.
      // *   **segment**: compute node.
      shared_ptr<string> nodeType_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->masterStatusInfo_ == nullptr && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->segmentStatusInfo_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstanceDiagnosisSummaryResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstanceDiagnosisSummaryResponseBody::Items>) };
    inline vector<DescribeDBInstanceDiagnosisSummaryResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstanceDiagnosisSummaryResponseBody::Items>) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setItems(const vector<DescribeDBInstanceDiagnosisSummaryResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setItems(vector<DescribeDBInstanceDiagnosisSummaryResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // masterStatusInfo Field Functions 
    bool hasMasterStatusInfo() const { return this->masterStatusInfo_ != nullptr;};
    void deleteMasterStatusInfo() { this->masterStatusInfo_ = nullptr;};
    inline const DescribeDBInstanceDiagnosisSummaryResponseBody::MasterStatusInfo & getMasterStatusInfo() const { DARABONBA_PTR_GET_CONST(masterStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBody::MasterStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody::MasterStatusInfo getMasterStatusInfo() { DARABONBA_PTR_GET(masterStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBody::MasterStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setMasterStatusInfo(const DescribeDBInstanceDiagnosisSummaryResponseBody::MasterStatusInfo & masterStatusInfo) { DARABONBA_PTR_SET_VALUE(masterStatusInfo_, masterStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setMasterStatusInfo(DescribeDBInstanceDiagnosisSummaryResponseBody::MasterStatusInfo && masterStatusInfo) { DARABONBA_PTR_SET_RVALUE(masterStatusInfo_, masterStatusInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // segmentStatusInfo Field Functions 
    bool hasSegmentStatusInfo() const { return this->segmentStatusInfo_ != nullptr;};
    void deleteSegmentStatusInfo() { this->segmentStatusInfo_ = nullptr;};
    inline const DescribeDBInstanceDiagnosisSummaryResponseBody::SegmentStatusInfo & getSegmentStatusInfo() const { DARABONBA_PTR_GET_CONST(segmentStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBody::SegmentStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody::SegmentStatusInfo getSegmentStatusInfo() { DARABONBA_PTR_GET(segmentStatusInfo_, DescribeDBInstanceDiagnosisSummaryResponseBody::SegmentStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setSegmentStatusInfo(const DescribeDBInstanceDiagnosisSummaryResponseBody::SegmentStatusInfo & segmentStatusInfo) { DARABONBA_PTR_SET_VALUE(segmentStatusInfo_, segmentStatusInfo) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setSegmentStatusInfo(DescribeDBInstanceDiagnosisSummaryResponseBody::SegmentStatusInfo && segmentStatusInfo) { DARABONBA_PTR_SET_RVALUE(segmentStatusInfo_, segmentStatusInfo) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeDBInstanceDiagnosisSummaryResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The group ID.
    shared_ptr<vector<DescribeDBInstanceDiagnosisSummaryResponseBody::Items>> items_ {};
    // The state information about the coordinator node.
    shared_ptr<DescribeDBInstanceDiagnosisSummaryResponseBody::MasterStatusInfo> masterStatusInfo_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The state information about compute nodes.
    shared_ptr<DescribeDBInstanceDiagnosisSummaryResponseBody::SegmentStatusInfo> segmentStatusInfo_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
