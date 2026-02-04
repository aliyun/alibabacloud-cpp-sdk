// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROLEZONEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROLEZONEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeRoleZoneInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoleZoneInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Node, node_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoleZoneInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Node, node_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRoleZoneInfoResponseBody() = default ;
    DescribeRoleZoneInfoResponseBody(const DescribeRoleZoneInfoResponseBody &) = default ;
    DescribeRoleZoneInfoResponseBody(DescribeRoleZoneInfoResponseBody &&) = default ;
    DescribeRoleZoneInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoleZoneInfoResponseBody() = default ;
    DescribeRoleZoneInfoResponseBody& operator=(const DescribeRoleZoneInfoResponseBody &) = default ;
    DescribeRoleZoneInfoResponseBody& operator=(DescribeRoleZoneInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Node : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Node& obj) { 
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Node& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
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
      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentBandWidth, currentBandWidth_);
          DARABONBA_PTR_TO_JSON(CurrentMinorVersion, currentMinorVersion_);
          DARABONBA_PTR_TO_JSON(CustinsId, custinsId_);
          DARABONBA_PTR_TO_JSON(DefaultBandWidth, defaultBandWidth_);
          DARABONBA_PTR_TO_JSON(InsName, insName_);
          DARABONBA_PTR_TO_JSON(InsType, insType_);
          DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
          DARABONBA_PTR_TO_JSON(IsOpenBandWidthService, isOpenBandWidthService_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentBandWidth, currentBandWidth_);
          DARABONBA_PTR_FROM_JSON(CurrentMinorVersion, currentMinorVersion_);
          DARABONBA_PTR_FROM_JSON(CustinsId, custinsId_);
          DARABONBA_PTR_FROM_JSON(DefaultBandWidth, defaultBandWidth_);
          DARABONBA_PTR_FROM_JSON(InsName, insName_);
          DARABONBA_PTR_FROM_JSON(InsType, insType_);
          DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
          DARABONBA_PTR_FROM_JSON(IsOpenBandWidthService, isOpenBandWidthService_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentBandWidth_ == nullptr
        && this->currentMinorVersion_ == nullptr && this->custinsId_ == nullptr && this->defaultBandWidth_ == nullptr && this->insName_ == nullptr && this->insType_ == nullptr
        && this->isLatestVersion_ == nullptr && this->isOpenBandWidthService_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr && this->role_ == nullptr
        && this->zoneId_ == nullptr; };
        // currentBandWidth Field Functions 
        bool hasCurrentBandWidth() const { return this->currentBandWidth_ != nullptr;};
        void deleteCurrentBandWidth() { this->currentBandWidth_ = nullptr;};
        inline int64_t getCurrentBandWidth() const { DARABONBA_PTR_GET_DEFAULT(currentBandWidth_, 0L) };
        inline NodeInfo& setCurrentBandWidth(int64_t currentBandWidth) { DARABONBA_PTR_SET_VALUE(currentBandWidth_, currentBandWidth) };


        // currentMinorVersion Field Functions 
        bool hasCurrentMinorVersion() const { return this->currentMinorVersion_ != nullptr;};
        void deleteCurrentMinorVersion() { this->currentMinorVersion_ = nullptr;};
        inline string getCurrentMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(currentMinorVersion_, "") };
        inline NodeInfo& setCurrentMinorVersion(string currentMinorVersion) { DARABONBA_PTR_SET_VALUE(currentMinorVersion_, currentMinorVersion) };


        // custinsId Field Functions 
        bool hasCustinsId() const { return this->custinsId_ != nullptr;};
        void deleteCustinsId() { this->custinsId_ = nullptr;};
        inline string getCustinsId() const { DARABONBA_PTR_GET_DEFAULT(custinsId_, "") };
        inline NodeInfo& setCustinsId(string custinsId) { DARABONBA_PTR_SET_VALUE(custinsId_, custinsId) };


        // defaultBandWidth Field Functions 
        bool hasDefaultBandWidth() const { return this->defaultBandWidth_ != nullptr;};
        void deleteDefaultBandWidth() { this->defaultBandWidth_ = nullptr;};
        inline int64_t getDefaultBandWidth() const { DARABONBA_PTR_GET_DEFAULT(defaultBandWidth_, 0L) };
        inline NodeInfo& setDefaultBandWidth(int64_t defaultBandWidth) { DARABONBA_PTR_SET_VALUE(defaultBandWidth_, defaultBandWidth) };


        // insName Field Functions 
        bool hasInsName() const { return this->insName_ != nullptr;};
        void deleteInsName() { this->insName_ = nullptr;};
        inline string getInsName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
        inline NodeInfo& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


        // insType Field Functions 
        bool hasInsType() const { return this->insType_ != nullptr;};
        void deleteInsType() { this->insType_ = nullptr;};
        inline int32_t getInsType() const { DARABONBA_PTR_GET_DEFAULT(insType_, 0) };
        inline NodeInfo& setInsType(int32_t insType) { DARABONBA_PTR_SET_VALUE(insType_, insType) };


        // isLatestVersion Field Functions 
        bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
        void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
        inline int32_t getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, 0) };
        inline NodeInfo& setIsLatestVersion(int32_t isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


        // isOpenBandWidthService Field Functions 
        bool hasIsOpenBandWidthService() const { return this->isOpenBandWidthService_ != nullptr;};
        void deleteIsOpenBandWidthService() { this->isOpenBandWidthService_ = nullptr;};
        inline bool getIsOpenBandWidthService() const { DARABONBA_PTR_GET_DEFAULT(isOpenBandWidthService_, false) };
        inline NodeInfo& setIsOpenBandWidthService(bool isOpenBandWidthService) { DARABONBA_PTR_SET_VALUE(isOpenBandWidthService_, isOpenBandWidthService) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline NodeInfo& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline NodeInfo& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline NodeInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The current bandwidth of the node, which consists of the default bandwidth and the increased bandwidth. Unit: MB/s.
        // 
        // > *   You can call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to specify the increased bandwidth.
        // > *   You can also use this parameter to calculate the increased bandwidth. For example, if the default bandwidth of the node is 96 MB/s and the returned value of this parameter is 100, the increased bandwidth is 4 MB/s.
        shared_ptr<int64_t> currentBandWidth_ {};
        // The minor version of the node.
        shared_ptr<string> currentMinorVersion_ {};
        // The ID of the data shard.
        shared_ptr<string> custinsId_ {};
        // The default bandwidth of the node. Unit: MB/s.
        shared_ptr<int64_t> defaultBandWidth_ {};
        // The ID of the node.
        shared_ptr<string> insName_ {};
        // Indicates whether the node is a read replica. If the node is a read replica, **3** is returned.
        // 
        // >  If the node is not a read replica, no value is returned.
        shared_ptr<int32_t> insType_ {};
        // Indicates whether the minor version is the latest version. Valid values:
        // 
        // *   **0**: The minor version is not the latest version.
        // *   **1**: The minor version is the latest version.
        // 
        // >  To update the minor version, call the [ModifyInstanceMinorVersion](https://help.aliyun.com/document_detail/473777.html) operation.
        shared_ptr<int32_t> isLatestVersion_ {};
        // Indicates whether the bandwidth of the node is increased. Valid values:
        // 
        // *   **true**: The bandwidth of the node is not increased.
        // *   **false**: The bandwidth of the node is increased.
        shared_ptr<bool> isOpenBandWidthService_ {};
        // This parameter is used only for internal maintenance of instances.
        shared_ptr<string> nodeId_ {};
        // The node type. Valid values:
        // 
        // *   **db**: data node.
        // *   **proxy**: proxy node.
        // *   **normal**: regular node. This value is returned when the instance runs in the standard architecture.
        shared_ptr<string> nodeType_ {};
        // The role of the node. Valid values:
        // 
        // *   **master**: master node
        // *   **slave**: replica node
        shared_ptr<string> role_ {};
        // The ID of the zone.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->nodeInfo_ == nullptr; };
      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const vector<Node::NodeInfo> & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, vector<Node::NodeInfo>) };
      inline vector<Node::NodeInfo> getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, vector<Node::NodeInfo>) };
      inline Node& setNodeInfo(const vector<Node::NodeInfo> & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline Node& setNodeInfo(vector<Node::NodeInfo> && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    protected:
      shared_ptr<vector<Node::NodeInfo>> nodeInfo_ {};
    };

    virtual bool empty() const override { return this->node_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const DescribeRoleZoneInfoResponseBody::Node & getNode() const { DARABONBA_PTR_GET_CONST(node_, DescribeRoleZoneInfoResponseBody::Node) };
    inline DescribeRoleZoneInfoResponseBody::Node getNode() { DARABONBA_PTR_GET(node_, DescribeRoleZoneInfoResponseBody::Node) };
    inline DescribeRoleZoneInfoResponseBody& setNode(const DescribeRoleZoneInfoResponseBody::Node & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline DescribeRoleZoneInfoResponseBody& setNode(DescribeRoleZoneInfoResponseBody::Node && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRoleZoneInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRoleZoneInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRoleZoneInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRoleZoneInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about each node in the instance.
    shared_ptr<DescribeRoleZoneInfoResponseBody::Node> node_ {};
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
